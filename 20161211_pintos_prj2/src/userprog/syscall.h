#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H
#include "lib/user/syscall.h"

void syscall_init (void);

/* ====== newly implemeted for prj1 ====== */

void check_address(const void* addr);

void halt(void);
void exit(int status);
pid_t exec(const char* filename);
int wait(pid_t pid);
int read(int fd, void* buffer, unsigned size);
int write(int fd, const void* buffer, unsigned size);
int fibonacci(int n);
int max_of_four_int(int a, int b, int c, int d);

/* ====================================== */

/* ====== newly implemeted for prj2 ====== */

bool create(const char* file, unsigned initial_size);
bool remove(const char* file);
int open(const char* file);
int filesize(int fd);
void seek(int fd, unsigned position);
unsigned tell(int fd);
void close(int fd);

/* ====================================== */

#endif /* userprog/syscall.h */
