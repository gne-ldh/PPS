//PROGRAM TO PRINT A PATTERN -2
#include<stdio.h>
void main()
{
    int row, col;
printf("\n");
 for(row=1;row<=4;row++)
  {
   for(col=0;col<row;col++)
    {
     printf ("%d ",row+col);
    }                                                                               
    printf("\n");  
 }
printf("\n");
}
