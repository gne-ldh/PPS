// Calculate reverse of a number
#include<stdio.h>
void main()
{
int number, remainder, reverse_no=0;
printf("\nEnter a number::");
scanf("%d",&number);
while(number != 0)
{
remainder = number % 10;
reverse_no = reverse_no * 10 + remainder;
number = number / 10;
}
printf("\n Reverse of the number is %d::", reverse_no);
}
