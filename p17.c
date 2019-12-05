//PROGRAM TO PRINT PRIME NUMBERS FROM 1 TO 100                                                                                                                                            
#include <stdio.h>                                                                                                                                                                        
void main()                                                                                                                                                                               
{                                                                                                                                                                                         
  int i, Number, flag;                                                                                                                                                                    
  printf("\nPrime Numbers from 1 to 100 are:: \n");                                                                                                                                       
  for(Number = 1; Number <= 100; Number++)                                                                                                                                                
  {                                                                                                                                                                                       
    flag = 0;                                                                                                                                                                             
    for (i = 2; i <= Number/2; i++)                                                                                                                                                       
    {                                                                                                                                                                                     
        if(Number%i == 0)                                                                                                                                                                 
        {                                                                                                                                                                                 
          flag=1;                                                                                                                                                                         
          break;                                                                                                                                                                          
        }                                                                                                                                                                                 
    }                                                                                                                                                                                     
    if(flag == 0 && Number != 1 )                                                                                                                                                         
    {                                                                                                                                                                                     
        printf("%d  ", Number);                                                                                                                                                           
    }
  }
printf("\n");
  }
