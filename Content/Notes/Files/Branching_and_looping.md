# Branching and Looping 
## Branching -:
Branching is a basic concept in computer science. It means an instruction that tells a computer to begin executing a different part of a program rather than executing statements one-by-one.

  1. If Statement
  2. The If else Statement
  3. Compound Relational tests
  4. Nested if Statement
  5. Switch Statement
  
### If Statement
  - If statement is the simplest form of the control statement. It is very frequently used in    allowing the flow of program execution and decision making.
  - The If structure has the following syntax
>if(condition)
statement; 
- The command says that if the condition is true then perform the following statement or If the condition is fake the computer skips the statement and moves on to the next instruction in the program
##### The following program calculate the absolute value of an integer using if statement:

```sh
#include < stdio.h > //Include the stdio.h file
void main ( ) // start of the program
{
int numbers; // Declare the variables
printf (“Type a number:”); // message to the user
scanf (“%d”, & number); // read the number from standard input
if (number < 0) // check whether the number is a negative
number
number = – number; // If it is negative then convert it into
positive.
Printf (“The absolute value is % d \n”, number); // print the value
}
```   
### The If else Statement
  - The if else is actually just an extension of the general format of if statement. If the result of the condition is true, then program statement 1 is executed else program statement 2 will be executed.
  - The syntax of the If else statement is as follows:
  
>If (condition)
Program statement 1;
Else
Program statement 2;


##### The following program find whether a number is negative or positive using if statement:
#
```sh
#include < stdio.h > //include the stdio.h header file in your program
void main ( ) // Start of the main
{
int num; // declare variable num as integer
printf (“Enter the number”); //message to the user
scanf (“%d”, &num); // read the input number from keyboard
if (num < 0) // check whether number is less than zero.
Printf (“The number is negative”) // If it is less than zero then it is negative.
Else // else statement.
Printf (“The number is positive”); //If it is more than zero then the given
number is positive.
``` 
### Compound Relational tests
  - To perform compound relational tests,C language provides the necessary mechanisms. A compound relational test is simple one or more simple relational tests joined together by either the the logical OR operators or logical AND. These operators are represented by character pairs && // respectively. To form complex expressions in C,the compound operators can be used. 
  - The syntax of the Compound Relational tests is as follows:
  
> a> if (condition1 && condition2 && condition3)
> b>if (condition1 // condition2 // condition3)


### Nested if Statement
  - The if statement may itself contain another if statement is called as nested if statement. - - The syntax of the Nested if Statement is as follows
 
>if (condition1)
if (condition2)
statement-1;
else
statement-2;
else
statement-3;


##### The following example print the given numbers along with the largest number using nested if statement.
#
```sh
#include < stdio.h > //includes the stdio.h file to your program
main ( ) //start of main function
{
int a,b,c,big; //declaration of variables
printf (“Enter three numbers”); //message to the user
scanf (“%d %d %d”, &a, &b, &c); //Read variables a,b,c,
if (a>b) // check whether a is greater than b if true then
if(a>c) // check whether a is greater than c
big = a ; // assign a to big
else big = c ; // assign c to big
else if (b>c) // if the condition (a>b) fails check whether b is
greater than c
big = b ; // assign b to big
else big = c ; // assign C to big
printf (“Largest of %d,%d&%d = %d”, a,b,c,big);
}
//print the given numbers along with the largest number.
``` 
### Switch Statement
  - The switch-case statement is a multi-way decision making statement. Unlike the multiple decision statement that can be created using if-else, the switch statement evaluates the conditional expression and tests it against the numerous constant values.During execution,the branch corresponding to the value that the expression matches is taken.
  - The value of the expressions in a switch-case statement must have to be an ordinal type i.e. integer, char, short, long, etc.Double and Float are not allowed.
  - The syntax of switch statement is as follows :
  
>switch( expression )
{
case constant-expression1: statements1;
[case constant-expression2: statements2;]
[case constant-expression3: statements3;]
[default : statements4;]
}

##### The following program find whether a number is negative or positive using if statement:
#
```sh
#include <stdio.h>
main()
{
int n=7;
switch(n) {
case 0:
printf(“You typed zero.\n”);
break;
case 3:
case 5:
case 7:
printf(“n is a prime number\n”);
break;
case 2: printf(“n is a prime number\n”);
case 4:
case 6:
case 8:
printf(“n is an even number\n”);
break;
case 1:
case 9:
printf(“n is a perfect square\n”);
break;
default:
printf(“Only single-digit numbers are allowed\n”);
break;
}
}
``` 

## Looping -: 
Looping statement are the statements execute one or more statement repeatedly several number of times. In
 1. while loop
 2. for loop
 3. do while
 
### while loop
  - In While Loop in C First check the condition if condition is true then control goes inside the loop body other wise goes outside the body. while loop will be repeats in clock wise direction.
  - The syntax of the while statement is as follows:
>Assignment;
while(condition)
{
Statements;
......
Increment/decrements (++ or --);
}
Note: If while loop condition never false then loop become infinite loop.


##### Example of while loop:
#
```sh
#include<stdio.h>

void main()
{
int i;
clrscr();
i=1;
while(i<5)
{
printf("\n%d",i);
i++;
}
}
``` 

### for loop
  - TFor Loop in C is a statement which allows code to be repeatedly executed. For loop contains 3 parts Initialization, Condition and Increment or Decrements.
  - The syntax of the for loop statement is as follows:
  
>for(init; condition; increment)
{
    loop body;
}


##### Example of for loop:
#
```sh
#include<stdio.h>

void main()
{
int i;
clrscr();
for(i=1;i<5;i++)
{
printf("\n%d",i);
}
}
``` 
### do-while
  - TA do-while Loop in C is similar to a while loop, except that a do-while loop is execute at least one time.
  - A do while loop is a control flow statement that executes a block of code at least once, and then repeatedly executes the block, or not, depending on a given condition at the end of the block (in while).
  - The syntax of the do-while loop statement is as follows:
  
>do
{
Statements;
........
Increment/decrement (++ or --)
} while();


##### Example of do while loop:
#
```sh
#include<stdio.h>

void main()
{
int i;
clrscr();
i=1;
do
{
printf("\n%d",i);
i++;
}
while(i<5);
}
``` 













