//PROGRAM TO PRINT A PATTERN 
#include<stdio.h>
void main()
{
    int row, col;
printf("\n");
 for(row=1;row<=4;row++)
  {
   for(col=1;col<=row;col++)
    {
     printf ("%d ",col);
    }
    printf("\n");  
 }
printf("\n");
}
