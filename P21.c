//PROGRAM TO FIND SUM OF N ELEMENTS OF AN ARRAY
#include<stdio.h>
void main()
{
    int a[10],i, sum=0,n;
printf("\nEnter number of elements(<=10)::");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
printf("\nEnter element %d::",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
  sum=sum+a[i];
   }
 printf("\nSum of elements of the Array is::%d\n",sum);
}
