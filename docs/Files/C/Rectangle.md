```c
// About program
//

#include <stdio.h>

int main(void)
{   

    int col;
    col = 70;
    int row = 15;

    int i, j;
    
    for (i=0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if ( (i < 1) || (i > row-2) ||
                 (j < 1) || (j > col-2) )
            {
                printf("#");
            }
            else
            {
               printf("."); 
            }
            
        }
        printf("\n");
    }
    
    return 0;
}

```
