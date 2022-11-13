#include<stdio.h>

int main()
{
 int a[10],i,sum=0;
 float avg;
 printf("enter the 10 numbers to be sum ");
 for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<10 ; i++)
 {
 sum=sum + a[i];
 }

  avg= sum / 10.0;

 printf("average of all number is %f",avg);
 
return 0;
}

