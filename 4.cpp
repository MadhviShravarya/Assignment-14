#include<stdio.h>

int main()
{
 int a[10],i;
 printf("enter the 10 numbers to be sum\n");
 for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<10 ; i++)
 {
   if(a[0]<a[i])
     {
         a[0]=a[i];
     }
 }
 printf(" greatest number is %d", a[0]);
return 0;
}

    

