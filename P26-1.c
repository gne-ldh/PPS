//PROGRAM TO SWAP TWO NUMBERS USING CALL BY REFERENCE
# include <stdio.h>
void swap(int *, int *);
int x,y;
void  main()
{   
   //int x, y;
   printf("\nEnter the value of x and y\n::");
   scanf("%d %d",&x,&y);
   printf("\nBefore Swapping\nx = %d\ny = %d\n", x, y);
   swap(&x,&y);
   printf("\nAfter Swapping\nx = %d\ny = %d\n", x, y);
}

void swap(int *x,int *y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
