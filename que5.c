#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
  int a1[1000],a2[10]={0,0,0,0,0,0,0,0,0,0},sum=0,pid,c=0,n=0,sumt=0;
  int a=0,b=0;
 
  for(int a=0;a<1000;a++)
     {
       a1[a]=1;
     }
   
    int fid[2];
    if(pipe(fid)==-1)
      {
          printf("pipe failed \n");
          return 1;
      }   

   pid=fork();
   if(pid==0)
    {
      for(int x=0;x<10;x++)
          {
         
           pid= fork();
           if(pid==0)
           {
             for(b=c;b<(b+100);b++)
                  {
                     sum=sum+a1[b];
                  }
                  a2[n]=sum;
                  c=b;
                  n++;
                    
           }
            
         } 
          exit(0);  
      }
      else
        { 
         int out[10];
         read(fid[0],out,10);
         for(int y=0;y<10;y++)
            {
               sumt=sumt+a2[y];
             } 
         printf("sumTotal= %d",sumt);
         printf("\n");
         close(fid[0]);
        }
      
  return 0;
}
