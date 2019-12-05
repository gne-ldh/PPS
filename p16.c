//PROGRAM TO CHECK WHETHER A NO. IS PRIME OR NOT
#include<stdio.h>
void main()
{
int number,i,m=0,flag=0;
printf("Enter a number::");
scanf("%d",&number);
m=number/2;
for(i=2;i<=m;i++)
{
if(number%i==0)
{
printf("\nNumber is NOT prime\n");
flag=1;
break;
}
}
if(flag==0)
printf("\nNumber IS prime\n");
 }

