// Skeleton of C code

#include <rai_line.h>

int main()
{
    int X_MAX = 75, Y_MAX = 21, X, Y;
    char point[Y_MAX][X_MAX], pointStyle = '#', pointBlank = '.';
    float mSlope, yIntercept, X1, X2, Y1, Y2;
    
    scanf("%f %f %f %f", &X1, &Y1, &X2, &Y2);

    mSlope = (Y2 - Y1) / (X2 - X1);
    yIntercept = Y1 - mSlope * X1;
    
    for (int i = 0; i < Y_MAX; i++)
    {
        for (int j = 0; j < X_MAX; j++)
        {
            point[i][j] = pointBlank;
        }
    }    


    for (X = roundNear(X1); X < roundNear(X2); X++)
    {
        Y = roundNear(yIntercept + mSlope * X);
        
        point[Y][X] = pointStyle;
    }
    
//    printf("Some int %d and %d with foat %f", a, b, foo);

    for (int i = 0; i < Y_MAX; i++)
    {
        for (int j = 0; j < X_MAX; j++)
        {
            printf("%c", point[i][j]);
        }
        printf("\n");
    }    



    return 0;
}
