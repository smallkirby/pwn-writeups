#define CREATE 0xffffff00
#define EDIT   0xffffff01
#define READ   0xffffff02
#define ALLDEL 0xffffff03

struct information{
  unsigned long idx;      // index of note
  unsigned char size;     // size of note
  char *buf;              // userland buffer to/from which note content is written/read
};

struct note{
  unsigned long secret;
  unsigned long size;
  char *content_ptr;      // maybe pointing to content below, though a little bit aligned?
  char content[];
};

struct note **notes;                  // array of note @ 0x102b60
static char *main_buf_ptr = 0x100b60; // @ 0x100b40

long* unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
  struct information info;
  char buffer[0x100];
  int tmp;
  char *tmp_ptr;
  unsigned long secret;
  struct note *target_note;

  info.idx = 0;
  info.size = 0;
  info.buf = NULL;
  memset(buffer, 0x00, 0x100);

  if(_copy_from_user(&info, (void*)arg, 0x18) == 0){
    info.size = info.size & 0xff;
    info.idx = info.idx & 0xf;

    switch(cmd){
      case CREATE:    // create new note
        info.idx = -1;
        for(int ix=0; ix!=0x10; ++ix){
          if(notes[ix] != NULL)  // when find empty note entry
            continue;

          // copy requested note information from user
          notes[ix] = main_buf_ptr;
          notes[ix]->size = info.size;
          notes[ix]->secret = *(unsigned long*)(*(long*)(*(long*)(&current_task + in_GS_OFFSET) + 0x7e8) + 0x50);

          if(info.size > 0x100){
            _warn_printk("Buffer overflow detected (%d < %lu)!\n", 0x100, info.size);
            do{ invalidInstructionException(); }while(true);
          }

          // copy note content from userland
          __check_object_size(buffer, 0, info.size);
          _copy_from_user(buffer, info.buf, info.size);

          // encrypt copied note content
          if(info.size != 0){
            tmp = 0;
            secret = notes[ix]->secret;
            do{
              *(unsigned long*)(buffer + tmp) = *(unsigned long*)(buffer + tmp) ^ secret;
              tmp += 8;
            }while(tmp < info.size);
          }
          memcpy(main_buf_ptr + 0x18, buffer);
          notes[ix]->content_ptr = main_buf_ptr + 0x18 - page_offset_base; // ???

          // set pointer forward
          main_buf_ptr = main_buf_ptr + 0x18 + notes[ix]->size;
        }
        break;

      case READ:
        target_note = notes[info.idx];
        if(target_note != NULL){
          tmp_ptr = target_note->content_ptr + page_offset_base;
          if(target_note->size != 0){
            memcpy(buffer, tmp_ptr, target_note->size);
            for(int ix=0; ix!=target_note->size; ){
              *(unsigned long*)(buffer + ix) = *(unsigned long*)(buffer + ix) ^  target_note->secret;
              ix += 8;
            }
            __check_object_size(buffer, target_note->size, 1);
            _copy_to_user(info.buf, buffer, target_note->size);
          }
          return 0;
        }else
          return 0;
        break;

      case ALLDEL:
        for(int ix=0; ix!=8; ++ix)
          notes[ix] = NULL;
        main_buf_ptr = 0x100b60;
        for(int ix=0; ix!=0x400; ++ix)
          *(unsigned long*)(main_buf_ptr + ix*8) = 0x0;
        break;

    case EDIT:
      /* ommitted cuz almost same as create */
      break;

      default:
        return  0xffffffffffffffe7;
    }

  }else{
    return 0xfffffffffffffff2;
  }
}