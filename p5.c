//PROGRAM TO PRINT THE QUOTIENT AND REMAINDER
#include <stdio.h>
void main()
{
int a,b,c,d;                                                                           
printf("\nEnter first number");
scanf("%d",&a);
printf("\nEnter second number");
scanf("%d",&b);
c=a/b;
printf("\nThe quotient is %d",c);
d=a%b;
printf("\nThe remainder is %d\n",d);
}
