// Check whether a number is palindrome

#include<stdio.h>
void main()
{
int number, remainder, original_no, reverse_no=0;
printf("\nEnter a number::");
scanf("%d",&number);
original_no=number;
while(number != 0)
{
remainder = number % 10;
reverse_no = reverse_no * 10 + remainder;
number = number / 10;
}
printf("\n Reverse of the number is %d::", reverse_no);
if (original_no == reverse_no)
printf("\nThe number is a palindrome");
else
printf("\n The number is not a palindrome");
}

