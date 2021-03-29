//PROGRAM TO FIND FACTORIAL OF A NUMBER WITHOUT USING RECURSION
#include <stdio.h>
void main()
{        
         int n, i;

         printf("\n Enter any number:: ");
         scanf("%d", &n);

         for (i=1; i<=n; i++)
         fact = fact*i;
         printf("\nFactorial = %ld\n", fact); 
}


