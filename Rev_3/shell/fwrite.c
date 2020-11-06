#include<stdio.h>
#include<string.h>
int main()
{
  FILE* fp = fopen("myfile","w");
  if(fp == NULL)
  {
    printf("fopen error!");
  }
  char* msg = "hello world!";
  int count = 5;
  while(count--)
  {
  fwrite(msg,strlen(msg),1,fp);
  }
  return 0;
}
