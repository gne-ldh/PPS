// Range of various types of variable

//    printf("Some int %d and %d with foat %f", a, b, foo);

// C program to print values of
// INT_MAX and
// INT_MIN 

#include <stdio.h> 
#include <limits.h> 


int main(void) 
{ 
   printf("Character:\tmin-> %d\tmax-> %d\n", CHAR_MIN, CHAR_MAX); 
   printf("Signed Char:\tmin-> %d\tmax-> %d\n", SCHAR_MIN, SCHAR_MAX); 
   printf("Unsigned char:\tmin-> %d\tmax-> %d\n", 0, UCHAR_MAX); 

   printf("Signed short:\tmin-> %d\tmax-> %d\n", SHRT_MIN, SHRT_MAX); 
   printf("Unsigned short:\tmin-> %d\tmax-> %d\n", 0, USHRT_MAX);
    
   printf("Signed int:\tmin-> %d\tmax-> %d\n", INT_MIN, INT_MAX); 
   printf("Unsigned int:\tmin-> %d\tmax-> %u\n", 0, UINT_MAX); // %d vs %u
   printf("Unsigned int:\tmin-> %d\tmax-> %d\n", 0, UINT_MAX); // %d vs %u

   return 0; 
} 
