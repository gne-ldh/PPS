// Skeleton of C code

#include <rai_line.h>

int main()
{
    int X, X1, X2, Y1, Y2, X_Max = 78, Y_MAX = 21;
    float mSlopeR, xIntercept;
    
    X1 = 4; Y1 = 0; X2 = 78; Y2 = 21;
    mSlopeR = (float) (X2 - X1) / (Y2 - Y1);
    xIntercept = X1 - mSlopeR * Y1;
    
    for (int i = 0; i < Y_MAX; i++)
    {
        X = roundNear(xIntercept + mSlopeR * (float) i);
        
        for (int j = 0; j < X - 2; j++)
        {
            printf(" ");
        }            
        
        printf("X\n");
    
    }
    
//    printf("Some int %d and %d with foat %f", a, b, foo);

    return 0;
}
