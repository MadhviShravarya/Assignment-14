#include<stdio.h>

int main()
{
 int a[10],i,j,f,sec;
 printf("enter the 10 numbers \n");
 for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<10 ; i++)
 {
  for(j=i+1;j<10;j++)
   {
      if(a[i]<a[j])
        {
           f=a[j];
           sec=a[i];
        }
      if(a[i]>sec && a[i]!=f)
         {
           sec=a[i];
         }
   }
 }
  printf(" second largest number is %d",sec);
return 0;
}        

