#include <stdio.h>

void rect(int col, int row)
{   
    for (int i=0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ( (i == 0) || (i == row-1) || (j == 0) || (j == col-1) ) printf("#");
            else printf(" "); 
        }
        printf("\n");
    }
    printf("\nlast line in function\n");
}
int main(void)
{
    int width = 20, height = 20; // More than one variables may be declared in a single statemenmt

    rect(width, height);

    return 0;
}
