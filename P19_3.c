//PROGRAM TO PRINT A PATTERN -3
#include<stdio.h>
void main()
{ 
    int row, col,col1,spaces;
printf("\n");
 for(row=1;row<=4;row++)
  {  
 for(spaces=4;spaces>row;spaces--)
 {    
  printf(" ");
 } 
   for(col=1;col<=row;col++)
    {
     printf ("%d",col);
    }
     for(col1=col-2;col1>=1;col1--) 
      {
      printf("%d",col1);  
     }
   printf("\n");
   }
printf("\n");                                                                          
} 
