#include<stdio.h>

int main()
{
 int a[10],i,j,x;
 printf("enter the 10 numbers \n");
 for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<10 ; i++)
 {
  for(j=i+1;j<10;j++)
   {
      if (a[i]>a[j])
       {
          x=a[i];
          a[i]=a[j];
          a[j]=x;
       }
         
   }
}
   printf(" sorted array is\n");
    for(i=0;i<10;i++)
      printf("%d\n",a[i]);
return 0;
}

