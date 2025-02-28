//PROGRAM TO FIND LARGEST ELEMENT FROM 1-D ARRAY
#include<stdio.h>
void main()
{
    int a[10],i, largest,n;
printf("\nEnter number of elements(<=10)::");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
printf("\nEnter element %d::",i+1);
scanf("%d",&a[i]);
}
largest=a[0];
for(i=1;i<=n-1;i++)
{
  if(a[i]>largest)
   largest=a[i];
}
 printf("\nThe largest element in the array is::%d\n",largest);
}
