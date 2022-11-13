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
   if(a[i]<a[0])
     {
         a[0]=a[i];
     }
 }
 printf(" smallest number is %d", a[0]);
return 0;
}
    

