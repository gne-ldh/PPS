//===================================================================//
//                                                                   //
// Code written by Hardeep Singh Rai                                 //
// Replace name in above line with your own                          //
// Delete this and line above this                                   //
//                                                                   //
// Make this code in to two files, with no line containing "stdio.h" //
// in the file containing "main" function, but in a header file in   //
// directory named "HeadeFiles".                                     //
//                                                                   //
//===================================================================//

#include <stdio.h>
// Single line comments are suited to explain something in same line

// In above line replace stdio.h with myHeader.h
// Anything starts with Double Slash, is a single line comment

// The character printed with SHIFT+8, i.e. * is also called asterisk
// and it 

/* This is a multi-line comment, it starts with Slash Asterisk and then
   follows by text
   which may
   span
   many
   line, and then comment terminated with Asterisk Slash */

int main(void) /* Every C code must have main function, where int in the
 beginning conveying that this main function with return integer value
 to calling program (which is Operating System). */ 
{ // curly brace, i.e. is beginning of body of function

    int distance = 100; /* Here distance is a variable (also called 
     identifier) is declared of the type integer, identified with
     keyword "int", and is initialised with value of 100, using
     assignment operator represented by symbol "=" (without double
     quotes) */
     
     // Note further, Every C statement is terminated with semicolon.

    printf("\n\nOuput of C code developed by Hardeep Singh Rai.\n\n");
     /* printf is a built-in function, which is output function, used
     to print formated text. To use this function we need to include
     stdio.h file */
     
    printf("GNE is %d km away from my house.\n\n\n", distance);
     /* The above statement is print 1st argument, with current value
     identifier (variable) "distance" taking place of %d, which demands
     "distance" to be of type integer. */

    return 0; /* return 0, which is a way to tell calling software
     needful is done successfully. Anything other than 0, will indicate
     error. */ 
}
