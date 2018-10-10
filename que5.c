#include<stdio.h>
#include<unistd.h>

int main()
{
  int arr[1000],a2[10]={0,0,0,0,0,0,0,0,0,0},pid,sum=0,c=0,sumt=0;

  //takin input in array

  for(int i=0;i<1000;i++)
     {
       arr[i]=1;
     }

  //calling fork
  
  pid=fork();

  if(pid==0)
   {
     for(int i1=0;i1<2;i1++)
       {
         pid=fork();
         for(int x=c;x<100;x++)
           {
              sum=sum+arr[x];
           }
         a2[n]=sum;
         c=x;
         n++;         
       } 
   }
   
  if(pid<0)
    printf("child creation failed.\n");
  
   for(int y=0;y<10;y++)
     {
        sumt=sumt+ar[y];
     }    

   printf("sum= %d ",sum);
   print("\n");
  return 0;
}
