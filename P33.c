//PROGRAM TO PRINT TRANSPOSE OF A MATRIX
#include <stdio.h>
void main() 
{       
    static int array[10][10];
    int i, j, m, n;
    printf("\nEnter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("\nEnter the elements of the matrix\n");
    for (i = 0; i < m; ++i)
    {       
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nThe given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)                                     
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is \n");
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
}
