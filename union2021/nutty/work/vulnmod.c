#include <linux/module.h>    
#include <linux/kernel.h>    
#include <linux/init.h>      
#include <linux/miscdevice.h>
#include <linux/slab.h>
#include <linux/fs.h>        
#include <linux/string.h>    
#include <linux/types.h>    

MODULE_LICENSE("GPL");
MODULE_AUTHOR("p4wn");
MODULE_DESCRIPTION("nutty module");

struct nut {
    u64 size;
    char* contents;
};

typedef struct req {
    int idx;
    int size;
    char* contents;
    int content_length;
    char* show_buffer;
} req;

static struct nut nuts[10];

static int read_idx(req* arg){
    return arg->idx;
}

static int memcpy_safe(void* dst, void* src, int size){
    size = size & 0x3ff;
    return memcpy(dst, src, size);
}

static char* read_contents(req* arg){ 
    char* to_read = (char*) arg->contents;
    int content_length = arg->content_length;
    if (content_length <= 0){
        printk(KERN_INFO "bad content length");
        return 0;
    }
    char* res = kmalloc(content_length, GFP_KERNEL);
    copy_from_user(res, to_read, content_length);
    return res;
}

static int read_size(req* arg){
    int size = arg->size;
    if (size < 0 || size >= 1024){
        printk(KERN_INFO "invalid size");
        return -EOVERFLOW;
    }
    return size;
}

static int create(req* arg){
    int size = read_size(arg);
    char* contents = read_contents(arg);
    int i;

    for (i = 0; i < 10; i++){
        if (nuts[i].contents == NULL){
            break;
        }
    }

    if (i == 10){
        printk(KERN_INFO "creation error");
        return -EINVAL;
    }

    if (size < 0 || size >= 1024){
        printk(KERN_INFO "bad size");
        return -EINVAL;
    }
    nuts[i].size = size;
    nuts[i].contents = kmalloc(size, GFP_KERNEL);
    if (contents != 0){
        memcpy_safe(nuts[i].contents, contents, size);
        kfree(contents);
    }
    else {
        printk("bad content length!");
        return -EINVAL;
    }

    return 0;
}

static int delete(req* arg){
    int idx = read_idx(arg);
    if (idx < 0 || idx >= 10){
        return -EINVAL;
    }
    if (nuts[idx].contents == NULL){
        return -EINVAL;
    }
    printk(KERN_INFO "deleting at 0x%px", nuts[idx].contents);
    kfree(nuts[idx].contents); 
    nuts[idx].contents = NULL;
    nuts[idx].size = 0;

    return 0;
}
static int show(req* arg){ 
    int idx = read_idx(arg);
    if (idx < 0 || idx >= 10){
        return -EINVAL;
    }
    if (nuts[idx].contents == NULL){
        return -EINVAL;
    }
    copy_to_user(arg->show_buffer, nuts[idx].contents, nuts[idx].size);

    return 0;
}



static int append(req* arg){ 
    int idx = read_idx(arg);
    if (idx < 0 || idx >= 10){
        return -EINVAL;
    }
    if (nuts[idx].contents == NULL){
        return -EINVAL;
    }

    int new_size = read_size(arg) + nuts[idx].size;
    if (new_size < 0 || new_size >= 1024){
        printk(KERN_INFO "bad new size!\n"); 
        return -EINVAL;
    }
    char* tmp = kmalloc(new_size, GFP_KERNEL); 
    memcpy_safe(tmp, nuts[idx].contents, nuts[idx].size);
    kfree(nuts[idx].contents);
    char* appended = read_contents(arg);
    if (appended != 0){
        memcpy_safe(tmp+nuts[idx].size, appended, new_size - nuts[idx].size); 
        kfree(appended);
    }
    nuts[idx].contents = tmp;
    nuts[idx].size = new_size;

    return 0;
}

static long handle_ioctl(struct file *f, unsigned int cmd, unsigned long arg){
    long ret;

    req* args = kmalloc(sizeof(req), GFP_KERNEL);
    copy_from_user(args, arg, sizeof(req));


    if (cmd == 0x13371){
        ret = create(args);
    }
    else if (cmd == 0x13372){
        ret = delete(args);
    }
    else if (cmd == 0x13373){
        ret = show(args);
    }
    else if (cmd == 0x13374){
        ret = append(args);
    }
    else{
        ret = -EINVAL;
    }
    return ret;
}

static const struct file_operations file_ops = {
    .owner = THIS_MODULE,
    .unlocked_ioctl = handle_ioctl,
};

static struct miscdevice nutty_device = {
    MISC_DYNAMIC_MINOR, "nutty" , &file_ops
};


static int __init mod_init(void)
{
    int ret;
    printk(KERN_INFO "Initialise module.\n");
    ret = misc_register(&nutty_device);
    return 0;    
}

static void __exit mod_cleanup(void)
{
    printk(KERN_INFO "Clean up module.\n");
    misc_deregister(&nutty_device);
}


module_init(mod_init);
module_exit(mod_cleanup);


