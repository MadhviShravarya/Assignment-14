#include<stdio.h>

int main()
{
 int a[10],i,sumeven=0,sumodd=0;
 printf("enter the 10 numbers to be sum\n");
 for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<10 ; i++)
 {
   if(i%2==0)
   sumeven = sumeven  + a[i];
   else
   sumodd = sumodd + a[i];
 
 }
 

 printf("sum  of all even number is %d\n",sumeven);
 
 printf("sum  of all odd number is %d\n",sumodd);

return 0;
}

