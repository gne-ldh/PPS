#include <stdio.h>

int main(int argc, char** argv)
{

	int firstNN = 10;

for (firstNN = 1; firstNN < 11; firstNN++)
{
	int sumN = 0;

	for (int i = 1; i <= firstNN; i++)
	{
		sumN += i;
	}

	printf("Sum of 1st %i natural numbers is %i.\n", firstNN, sumN);
}
    return 0;
}
