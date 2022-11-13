#include<stdio.h>

int main()
{
 int a[10],i;
 printf("enter the 10 numbers \n");
 for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<=10; i++)
 {
  printf("\n%d",a[9-i]);
 }
 
return 0;
}    

