// Code by H. S. Rai

/* ******************************
*	Purpose of program	*
*				*
*	To exchange two number	*
*
*	Date of start
*	Date of finishing
*
*	Multi-line comment	*
*********************************
*/

#include <stdio.h>

int doubleMe(int n1, int n2, int n3)
{

	printf("2: x %d y %d z %d\n", n1, n2, n3);


    n1 *= 2;
    n2 *= 2; // n = 2* n
    n3 *= 2;
	printf("3: x %d y %d z %d\n", n1, n2, n3);

    return 0;
}

int main(void)
{

    int x = 10, y = 11, z = 9;
    
	printf("1: x %d y %d z %d\n", x, y, z);

    doubleMe(x, y, z); // Call a function

	printf("4: x %d y %d z %d\n", x, y, z);
    return 0;
}
