# PPS: Functions & Program Structure

# FUNCTION in C
A function is a block of code that performs a specific task.
we can divide a large program into the basic building blocks known as function. 
The function contains the set of programming statements enclosed by {}. 
A function can be called multiple times to provide reusability and modularity to the C program. 
In other words, we can say that the collection of functions creates a program. 
The function is also known as procedureor subroutine in other programming languages.

### Advantage of functions in C
There are the following advantages of C functions.
 - By using functions, we can avoid rewriting same logic/code again and again in a program.Thus improve the readability of code.
 - We can call C functions any number of times in a program and from any place in a program.Thus improves the reusability of the code.
 - We can track a large C program easily when it is divided into multiple functions.Thus Debugging of the code would be easier if you use functions, as errors are easy to be traced.
 - Reduces the size of the code, duplicate set of statements are replaced by function calls.

### Function Aspects
 - Function declaration: 
Syntax-  return_type function_name (argument list)
A function must be declared globally in a c program to tell the compiler about the function name, function parameters, and return type.

 - Function call:
Syntax- function_name (argument_list)
Function can be called from anywhere in the program. 
The parameter list must not differ in function calling and function declaration. 
We must pass the same number of functions as it is declared in the function declaration.

 - Function definition:
Syntax- return_type function_name (argument list) {function body;}
It contains the actual statements which are to be executed. 
It is the most important aspect to which the control comes when the function is called. 
Here, we must notice that only one value can be returned from the function.


 # Syntax of a function
>return_type function_name (argument list)
>{
>   Set of statements – Block of code
>}

 - return_type: Return type can be of any data type such as int, double, char, void, short etc. 
 - function_name: It can be anything, however it is advised to have a meaningful name for the functions so that it would be easy to understand the purpose of function just by seeing it’s name.
 - argument list: Argument list contains variables names along with their data types. These arguments are kind of inputs for the function. 
For example – A function which is used to add two integer variables, will be having two integer argument.
 - Block of code: Set of C statements, which will be executed whenever a call will be made to the function.


### Types of functions
1) Predefined standard library functions
Standard library functions are also known as built-in functions. Functions such as puts(), gets(), printf(), scanf() etc are standard library functions. 
These functions are already defined in header files (files with .h extensions are called header files such as stdio.h), so we just call them whenever there is a need to use them.
```sh
For example: 
printf() function is defined in <stdio.h> header file so in order to use the
printf() function, we need to include the <stdio.h> header file in our program using #include <stdio.h>.
```
2) User Defined functions
The functions that we create in a program according to our need.are known as user defined functions.

# PREDEFINED STANDARD LIBRARY FUNCTIONS

C Standard library functions or simply C Library functions are inbuilt functions in C programming.
The prototype and data definitions of these functions are present in their respective header files. 
To use these functions we need to include the header file in our program. 
For example,
If you want to use the printf() function, the header file <stdio.h> should be included.

>#include <stdio.h>
>int main()
>{
>   printf("Sat Sri Akal"); 
>}

#### Example:

To can compute the square root of a number, you can use the sqrt() library function.
The function is defined in the math.h header file.
>#include <stdio.h>
>#include <math.h>
>int main()
>{
>  float num, root;
>  printf("Enter a number: ");
>  scanf( " %f " , &num);
   // Computes the square root of num and stores in root.
> root = sqrt(num);
>   printf("Square root of %.2f = %.2f", num, root);
>  return 0;
>}

When you run the program, the output will be:
Enter a number: 12
Square root of 12.00 = 3.46

# C Header Files
* <assert.h>	Program assertion functions
* <ctype.h>	Character type functions
* <locale.h>	Localization functions
* <math.h>	Mathematics functions
* <setjmp.h>	Jump functions
* <signal.h>	Signal handling functions
* <stdarg.h>	Variable arguments handling functions
* <stdio.h>	Standard Input/Output functions
* <stdlib.h>	Standard Utility functions
* <string.h>	String handling functions
* <time.h>	Date time functions

# MAIN FUNCTION

Is main() function in c programming language predefined or user defined?

main() function is a user defined, body of the function is defined by the programmer or we can say main() is programmer/user implemented function, whose prototype is predefined in the compiler.
Hence we can say that main() in c programming is user defined as well as predefined because it's prototype is predefined.
### Prototype of main(): 
>void main(void)
{
    /* Declaration part */
    /* Executable part */
}
### No return type and no argument. 

>int main(void)
{
    /* Declaration part */
    /* Executable part */
}

### Integer type return type with no argument. 
>int main(int argc, char *argv[])
{
    /* Declaration part */
    /* Executable part */
}

>int main(int agrc, char **argv)
{
    /* Declaration part */
    /* Executable part */
}

# USER DEFINED FUNCTIONS
> #include <stdio.h>
int addNumbers(int a, int b);         // function prototype
int main()
{    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);
    return 0; }
int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}

- Function prototype:
A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body.
A function prototype gives information to the compiler that the function may later be used in the program.
- returnType functionName(type1 argument1, type2 argument2, ...);
In the above example, int addNumbers(int a, int b); is the function prototype which provides the following information to the compiler:
name of the function is addNumbers()
return type of the function is int
two arguments of type int are passed to the function
The function prototype is not needed if the user-defined function is defined before the main() function.
- Control of the program is transferred to the user-defined function by calling it.
```sh 
Syntax of function call
functionName(argument1, argument2, ...);
In the above example, the function call is made using addNumbers(n1, n2); statement inside the main() function.
```
- Function definition
Function definition contains the block of code to perform a specific task. 
For example, adding two numbers and returning it.
```sh 
Syntax of function definition
returnType functionName(type1 argument1, type2 argument2, ...)
{
    //body of the function
}
```
When a function is called, the control of the program is transferred to the function definition. And, the compiler starts executing the codes inside the body of a function.
- Passing arguments to a function
In programming, argument refers to the variable passed to the function. In the above example, two variables n1 and n2 are passed during the function call.
The parameters a and b accepts the passed arguments in the function definition. These arguments are called formal parameters of the function.
The type of arguments passed to a function and the formal parameters must match, otherwise, the compiler will throw an error.
If n1 is of char type, a also should be of char type. If n2 is of float type, variable b also should be of float type.
- Return Statement
The return statement terminates the execution of a function and returns a value to the calling function. 
The program control is transferred to the calling function after the return statement.
In the above example, the value of the result variable is returned to the main function. The sum variable in the main() function is assigned this value.

>Syntax of return statement
return (expression);     
For example,
return a;
return (a+b);
The type of value returned from the function and the return type specified in the function prototype and function definition must match.

# FUNCTION ARGUMENTS 
If a function is to use arguments, it must declare variables that accept the values of the arguments. 
These variables are called the formal parameters of the function.
Formal parameters behave like other local variables inside the function and are created upon entry into the function and destroyed upon exit.

While calling a function, there are two ways in which arguments can be passed to a function -
### Call by value:  
The call by value method of passing arguments to a function copies the actual value of an argument into the formal parameter of the function. In this case, changes made to the parameter inside the function have no effect on the argument.
By default, C programming uses call by value to pass arguments. In general, it means the code within a function cannot alter the arguments used to call the function. 
In call by value, different memory is allocated for actual and formal parameters since the value of the actual parameter is copied into the formal parameter.
Example:
>#include<stdio.h>  
void change(int num) {    
    printf("Before adding value inside function num=%d \n",num);    
    num=num+100;    
    printf("After adding value inside function num=%d \n", num);    
}    
int main() {    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(x);//passing value in function    
    printf("After function call x=%d \n", x);    
return 0;  
}    

Output:
Before function call x=100
Before adding value inside function num=100
After adding value inside function num=200
After function call x=100

### Call by Reference:
In call by reference, the address of the variable is passed into the function call as the actual parameter.
The value of the actual parameters can be modified by changing the formal parameters since the address of the actual parameters is passed.
All the operations in the function are performed on the value stored at the address of the actual parameters, and the modified value gets stored at the same address.
Example:
> #include<stdio.h>  
void change(int *num) {    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num);    
}      
int main() {    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(&x);//passing reference in function    
    printf("After function call x=%d \n", x);    
return 0;  
}

Output:
Before function call x=100
Before adding value inside function num=100
After adding value inside function num=200
After function call x=200

# FUNCTIONS RETURNING NON-INTEGERS
For functions returning non-integers
Function must declare the type of value it returns (ie. double function ( ) )
Calling routine must know that the function returns a non-int value 
 Declarations must match definitions
If functions take argument, declare them; if functions take no argument, use void

# EXTERNAL VARIABLES
A program is just a set of external objects, which are either variables or functions Functions are always external C does not allow functions to be defined inside other functions 
External variables are defined outside any function 
Internal variables to a function come into existence when the function is entered, and disappear when it is left

- Extern keyword: The extern keyword means "declare without defining".
it is a way to explicitly declare a variable, or to force a declaration without a definition. It is also possible to explicitly define a variable, i.e. to force a definition. It is done by assigning an initialization value to a variable
A declaration can be done any number of times but definition only once.
the extern keyword is used to extend the visibility of variables/functions.
Since functions are visible throughout the program by default, the use of extern is not needed in function declarations or definitions. Its use is implicit.
When extern is used with a variable, it’s only declared, not defined.
As an exception, when an extern variable is declared with initialization, it is taken as the definition of the variable as well.

# SCOPE RULES 
The scope of a name is the part of the program within which the name can be used. 
Scope of an external variable or function lasts from the point at which it is declared to the end of the file being compiled.
Scope of an automatic variable (i.e. local variable of a function) is the block in which the name is declared Remarks about the declaration and definition of an external variable

# HEADER FILES
Header files contain the set of predefined standard library functions. 
The request to use a header file in a program is done by including it with the C preprocessing directive “#include”. 
All the header file have a ‘.h’ an extension. 
By including a header file, we can use its contents in our program.
There are of 2 types of header file:
- Pre-existing header files: Files which are already available in C/C++ compiler we just need to import them.
- User-defined header files: These files are defined by the user and can be imported using “#include”.

# STATIC VARIABLES
Static global variable
When a global variable is declared with a static keyword, then it is known as a static global variable. 
It is declared at the top of the program, and its visibility is throughout the program.
Static variables are initialized only once. 
The compiler persists with the variable till the end of the program. 
Static variables can be defined inside or outside the function. 
They are local to the block. 
The default value of static variables is zero. 
The static variables are alive till the execution of the program.

# REGISTER VARIABLES
Keyword used is – “register”.
Register variables are declared inside a function.
Register variables are similar to auto or local or internal variables.
The register variables leads to faster execution of programs.
Register variables are active only within the function.
Register variables are alive until the end of a function.






