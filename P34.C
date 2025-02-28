//PROGRAM TO PRINT ADDRESS OF VARIABLES USING POINTERS
#include <stdio.h>
void main( )
{
int  a ;
int  *p ;
printf("\nEnter any integer: ") ;
scanf("%d",&a) ;
p = &a ;
printf("\n Value of Integer : %d ",a) ;
printf("\n Value of Integer : %d ",*p) ;
printf("\n Value of Integer : %d ",*(&a)) ;
printf("\n Address of Integer : %u ",p) ;
printf("\n Address of Integer : %u ",&a) ;
}
