//PROGRAM TO FIND FACTORIAL OF A NUMBER USING RECURSION
#include <stdio.h>
int factorial(int n);
void main()
{      
    int n;
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);
    printf("\nFactorial of %d = %d\n", n, factorial(n));
}
int factorial(int n)
{
    if (n >= 1)
        return n*factorial(n-1);
    else
        return 1;
} 
