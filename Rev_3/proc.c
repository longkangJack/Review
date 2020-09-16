#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
  pid_t id = fork();
 // printf("pid: %d,ppid: %d,id:%d\n",getpid(),getppid(),id);
//printf("hello proc :%d!,ret: %d\n",getpid(),ret);
 if(id<0)
 {
   perror("fork");
   return 1;
 }
 else if(id == 0)
 {
   printf("I am child pid:%d,ppid:%d\n",getpid(),getppid());
 }
 else
 {
   printf("I am father ppid:%d,pid:%d\n",getppid(),getpid());
 }
 // printf("pid: %d\n",getpid());
 // printf("ppid: %d\n",getppid());
  return 0;
}
