//Greatest of three numbers
#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter the first number");
scanf("%d",&a);
printf("Enter the second number");
scanf("%d",&b);
printf("Enter the third number");
scanf("%d",&c);
if((a>b) && (a>c))
printf("\n The largest number is %d",a);
else if((b>a) && (b>c))
printf("\n The largest number is %d",b);
else
printf("\n The largest number is %d",c);
}
