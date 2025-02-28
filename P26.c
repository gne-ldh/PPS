//PROGRAM TO SWAP TWO NUMBERS USING CALL BY VALUE
# include <stdio.h>
void swap(int, int);
int x,y;
void  main()
{  
   //int x, y;
   printf("\nEnter the value of x and y\n::");
   scanf("%d %d",&x,&y);
   printf("\nBefore Swapping\nx = %d\ny = %d\n", x, y);
   swap(x, y);
}

void swap(int a, int b)
{                                                                                   
   int temp;
   temp = b;
   b = a;
   a = temp;
   printf("After Swapping\nx = %d\ny = %d\n", a, b);
}
