/**
 * syscall kit - WinterKosenCTF 2020
 *
 * This application is (maybe) made for educational purpose
 * and for those who learn system calls.
 */
#include <iostream>
#include <sys/syscall.h>

class Emulator {
private:
  unsigned long rax;
  unsigned long rdi;
  unsigned long rsi;
  unsigned long rdx;
  virtual void set(std::string, unsigned long&);
  virtual int check();
  virtual void syscall();
public:
  Emulator();
  virtual void emulate();
};

/**
 * Constructor
 */
Emulator::Emulator() {
  this->rax = 0;
  this->rdi = 0;
  this->rsi = 0;
  this->rdx = 0;
}

/**
 * Read system call number and arguments
 */
void Emulator::set(std::string msg, unsigned long &reg) {
  std::cout << msg;
  std::cin >> reg;
  if (!std::cin.good()) exit(1);
}

/**
 * Filter dangerous system calls
 */
int Emulator::check() {
  if (this->rax >= 0x40000000)   return 1; // x32 ABI is dangerous!
  if (this->rax == SYS_open)     return 1; // never open files
  if (this->rax == SYS_openat)   return 1;
  if (this->rax == SYS_write)    return 1; // no more leak
  if (this->rax == SYS_read)     return 1; // no more overwrite
  if (this->rax == SYS_sendfile) return 1;
  if (this->rax == SYS_execve)   return 1; // of course not!
  if (this->rax == SYS_execveat) return 1;
  if (this->rax == SYS_ptrace)   return 1; // may ruine the program
  if (this->rax == SYS_fork)     return 1;
  if (this->rax == SYS_vfork)    return 1;
  if (this->rax == SYS_clone)    return 1;
  return 0;
}

/**
 * Call syscall
 */
void Emulator::syscall() {
  asm volatile ("movq %0, %%rdi":: "a"(this->rdi));
  asm volatile ("movq %0, %%rsi":: "a"(this->rsi));
  asm volatile ("movq %0, %%rdx":: "a"(this->rdx));
  asm volatile ("movq %0, %%rax":: "a"(this->rax));
  asm volatile ("syscall");
  asm volatile ("movq %%rax, %0": "=a"(this->rax));
}

/**
 * Run emulator
 */
void Emulator::emulate(void)
{
  int i;
  for(i = 0; i < 10; i++) {
    std::cout << "=========================" << std::endl;
    this->set("syscall: ", this->rax);
    this->set("arg1: ", this->rdi);
    this->set("arg2: ", this->rsi);
    this->set("arg3: ", this->rdx);
    
    std::cout << "=========================" << std::endl;
    
    if (this->check()) {
      std::cerr << "syscall=" << this->rax << " is not allowed" << std::endl;
      continue;
    } else {
      this->syscall();
      std::cout << "retval: " << std::hex << this->rax << std::endl;
    }
  }

  std::cout << "Bye!" << std::endl;
}

Emulator *m;

void setup(void)
{
  std::setbuf(stdin, NULL);
  std::setbuf(stdout, NULL);
  std::setbuf(stderr, NULL);

  m = new Emulator();
}

int main(void)
{
  setup();
  m->emulate();
  exit(0);
}
