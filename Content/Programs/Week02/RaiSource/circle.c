#include <circle.h>

int main()
{

	float diameter, perimeter, area;
	scanf("%f", &diameter);

	perimeter = pi * diameter;
	area = perimeter * diameter / 4.0;

	printf("\n\nDia: %.2f\nPerimeter: %.2f\nArea: %.2f\n\n",\
		diameter, perimeter, area);

}
