//PROGRAM TO CHECK WHETHER A NO. IS AN ARMSTRONG NUMBER OR NOT                                                                                                                            
#include<stdio.h>                                                                                                                                                                         #include <math.h>
void main()
{
    int number, sum = 0, rem = 0, cube = 0, original_no;
    printf ("\nEnter a number::");
    {
        rem = number % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        number = number / 10;
    }
    if (sum == original_no)
        printf ("\nThe given no IS an ARMSTRONG no\n");
    else
        printf ("\nThe given no is NOT an ARMSTRONG no\n");
 }
