#include<stdio.h>
#include<unistd.h>
int main(int argc, char* argv[])
{
  char arr[10]={0};
  int i = 0;
  for(i=0;i<10;i++)
  {
    arr[i]='-';
    printf("%s\r",arr);
    fflush(stdout);
    usleep(1000000);
  }
  return 0;
}
