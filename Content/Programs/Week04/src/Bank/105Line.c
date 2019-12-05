// Skeleton of C code

#include <stdio.h>

int roundNear(float);

int main()
{
    int X, X1, X2, Y1, Y2, X_Max = 78, Y_MAX = 23;
    float slope;
    
    X1 = 0; Y1 = 0; X2 = 78; Y2 = 23;
    slope = (float)(Y2 - Y1) / (X2 - X1);
    
//    for (int i = 0; i < Y_MAX; i++)
    {
            
    
    }
    
//    printf("Some int %d and %d with foat %f", a, b, foo);

scanf("%f",&slope);



X = roundNear(slope);
printf(" Input %f  Rounded to nearest %d: ", slope, X);
    return 0;
}

int roundNear(float fn)
{
 int ans; 
 int iFN = (int) fn;
 float fracPart = fn - iFN;
 
 if (fracPart < 0.5) ans = iFN;
 else ans = iFN + 1;
 
 return ans; 

}
