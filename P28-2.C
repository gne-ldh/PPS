//PROGRAM TO PRINT FIBONACCI SERIES USING RECURSION
#include<stdio.h> 
int fibonacci(int);
void main()
{   
    int terms;
    
    printf("\nEnter number of elements of fibonacci series to be printed:: ");
    scanf("%d", &terms);
    for(int n = 0; n < terms; n++)
    {
        printf("%d ", fibonacci(n));
    }
   printf("\n");
 }  
    
int fibonacci(int num)
{   
    
    //base condition
    if(num == 0 || num == 1)
    {   
        return num;
    }
    else
    {
        // recursive call
        return fibonacci(num-1) + fibonacci(num-2);
    }
}
