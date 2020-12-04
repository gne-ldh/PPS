#include <stdio.h>

int main(int argc, char** argv)
{


//mm += 5

for ( int mm = 10; mm <= 100; mm+=10)
{
    printf("%4i mm == %f inches\n", mm, mm / 25.4 );
}

    return 0;
}
