#include<stdio.h>
#include<unistd.h>

int main()
{
  int pid;

  pid=fork();

  for(int i=0;i<4;i++)
     {
      if(pid>0)
        printf("Hello ! \n");
     }

     printf("Exit! \n");
  return 0;
}
