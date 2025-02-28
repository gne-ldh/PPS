// Find roots of a quadratic equation
#include <stdio.h>
#include<math.h>
void main()
{
float a,b,c,discriminant;
float root1, root2;
printf("\nEnter the coefficient of x^2 (a)::");
scanf("%f",&a);
printf("\nEnter the coefficient of x (b)::");
scanf("%f",&b);
printf("\nEnter the constant term (c)::");
scanf("%f",&c);
discriminant =pow(b,2)-4*a*c;
root1=( -b + sqrt(discriminant))/(2*a);
root2=(-b - sqrt(discriminant))/(2*a);
printf("\nRoots are :: %f %f \n", root1,root2);
}
