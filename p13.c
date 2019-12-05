// To make simple calculator using switch

#include<stdio.h>
void main()
 {
 int num1, num2, choice;
float result;

printf("\nEnter the first number::");
scanf("%d",&num1);
printf("\nEnter the second number::");
scanf("%d",&num2);
printf("\n\t\tMENU");
printf("\n1 : ADDITION");
printf("\n2 : SUBTRACTION");
printf("\n3 : MULTIPLICATION");
printf("\n4 : DiVISION");
printf("\n Enter your choice of Operation to be performed::");
scanf("%d",&choice);
switch(choice)
{
case 1:
result = num1+num2;
printf("\nThe Sum is %f", result);
break;
case 2:
result=num1-num2;
printf("\nThe Difference is  %f",result);
break;
case 3:
result=num1*num2;
printf("\nThe product is %f", result);
break;
case 4:
result = num1/num2;
printf("\nThe quotient is %f", result);
break;
}
}
