#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>

//定义一个锁Lock
pthread_cond_t cond;

pthread_mutex_t mutex;
void *r1(void *arg)
{
  while(1)
  {
    pthread_cond_wait(&cond,&mutex);
    printf("活动\n");
  }
}
void *r2(void *arg)
{
  while(1)
  {
    pthread_cond_signal(&cond);
    sleep(1);
  }
}

int main()

{
  pthread_t t1,t2;
  pthread_cond_init(&cond,NULL);//条件变量初始化
  pthread_mutex_init(&mutex,NULL);
  pthread_create(&t1,NULL,r1,NULL);
  pthread_create(&t2,NULL,r2,NULL);
  pthread_join(t1,NULL);
  pthread_join(t2,NULL);
  pthread_mutex_destroy(&mutex);
  pthread_cond_destroy(&cond);
  return 0; 
}
