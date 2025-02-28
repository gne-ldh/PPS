## Functions
A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.
You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division is such that each function performs a specific task.
A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.
A function can also be referred as a method or a sub-routine or a procedure, etc.


## Why do need functions?
- Functions help us in reducing code redundancy. If functionality is performed at multiple places in software, then rather than writing the same code, again and again, we create a function and call it everywhere. This also helps in maintenance as we have to change at one place if we make future changes to the functionality.
- Functions make code modular. Consider a big file having many lines of codes. It becomes really simple to read and use the code if the code is divided into functions.
- Functions provide abstraction. For example, we can use library functions without worrying about their internal working.

### C functions can be classified into two categories
1. Library functions
2. User-Defined functions

![image alt](https://3.bp.blogspot.com/-bCszLcVsvSo/XHKVNdlf5WI/AAAAAAAAAZ0/DTRX_N5lKQ8qMBEQvCppnKKaiFRHkUrgwCLcBGAs/s1600/c%2Bfun.png)



Library functions are those functions which are already defined in C library, example printf(), scanf(), strcat() etc. You just need to include appropriate header files to use these functions. These are already declared and defined in C libraries.
A User-defined functions on the other hand, are those functions which are defined by the user at the time of writing program. These functions are made for code reusability and for saving time and space.
### Function Declaration
General syntax for function declaration is,
returntype functionName(type1 parameter1, type2 parameter2,...);
Like any variable or an array, a function must also be declared before its used. Function declaration informs the compiler about the function name, parameters is accept, and its return type. The actual body of the function can be defined separately. It's also called as Function Prototyping. 
Function declaration consists of 4 parts.

- returntype
- function name
- parameter list
- terminating semicolon


returntype
When a function is declared to perform some sort of calculation or any operation and is expected to provide with some result at the end, in such cases, a return statement is added at the end of function body. Return type specifies the type of value(int, float, char, double) that function is expected to return to the program which called the function.

### Note: In case your function doesn't return any value, the return type would be void.

functionName
Function name is an identifier and it specifies the name of the function. The function name is any valid C identifier and therefore must follow the same naming rules like other variables in C language.


parameter list
The parameter list declares the type and number of arguments that the function expects when it is called. Also, the parameters in the parameter list receives the argument values when the function is called. They are often referred as formal parameters.

Let's write a simple program with a main() function, and a user defined function to multiply two numbers, which will be called from the main() function.

 #include<stdio.h>

int multiply(int a, int b);        // function declaration

int main() 
{
    int i, j, result;
    printf("Please enter 2 numbers you want to multiply...");
    scanf("%d%d", &i, &j);
    
    result = multiply(i, j);        // function call
    printf("The result of muliplication is: %d", result);
    
    return 0;
}

int multiply(int a, int b)
{
    return (a*b);       // function defintion, this can be done in one line
}

### Function definition Syntax
Just like in the example above, the general syntax of function definition is,

returntype functionName(type1 parameter1, type2 parameter2,...)
{
    // function body goes here
}
### Calling a function
When a function is called, control of the program gets transferred to the function.
functionName(argument1, argument2,...);

## Passing Arguments to a function
Arguments are the values specified during the function call, for which the formal parameters are declared while defining the function.


![image alt](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcRwHJrfJ8x11EpmcOiBt4aOCUgtahhwgijA1QIdDdtj7NrpI3HR)
It is possible to have a function with parameters but no return type. It is not necessary, that if a function accepts parameter(s), it must return a result too.
![image alt](https://www.studytonight.com/c/images/passing-argument-c-functions.jpg)

While declaring the function, we have declared two parameters a and b of type int. Therefore, while calling that function, we need to pass two arguments, else we will get compilation error. And the two arguments passed should be received in the function definition, which means that the function header in the function definition should have the two parameters to hold the argument values. These received arguments are also known as formal parameters. The name of the variables while declaring, calling and 
defining a function can be different.

## Returning a value from function
A function may or may not return a result. But if it does, we must use the return statement to output the result. return statement also ends the function execution, hence it must be the last statement of any function. If you write any statement after the return statement, it won't be executed.
![image alt](https://www.studytonight.com/c/images/return-statement-c-functions.jpg)

The datatype of the value returned using the return statement should be same as the return type mentioned at function declaration and definition. If any of it mismatches, you will get compilation error.
## Type of User-defined Functions in C
There can be 4 different types of user-defined functions, they are:

Function with no arguments and no return value
Function with no arguments and a return value
Function with arguments and no return value
Function with arguments and a return value
Below, we will discuss about all these types, along with program examples.

## Function with no arguments and no return value
Such functions can either be used to display information or they are completely dependent on user inputs.

Below is an example of a function, which takes 2 numbers as input from user, and display which is the greater number.

#include<stdio.h>

void greatNum();       // function declaration

int main()
{
    greatNum();        // function call
    return 0;
}

void greatNum()        // function definition
{
    int i, j;
    printf("Enter 2 numbers that you want to compare...");
    scanf("%d%d", &i, &j);
    if(i > j) {
        printf("The greater number is: %d", i);
    }
    else {
        printf("The greater number is: %d", j);
    }
}
## Function with no arguments and a return value
We have modified the above example to make the function greatNum() return the number which is greater amongst the 2 input numbers.

#include<stdio.h>

int greatNum();       // function declaration

int main()
{
    int result;
    result = greatNum();        // function call
    printf("The greater number is: %d", result);
    return 0;
}

int greatNum()        // function definition
{
    int i, j, greaterNum;
    printf("Enter 2 numbers that you want to compare...");
    scanf("%d%d", &i, &j);
    if(i > j) {
        greaterNum = i;
    }
    else {
        greaterNum = j;
    }
    // returning the result
    return greaterNum;
}
## Function with arguments and no return value
We are using the same function as example again and again, to demonstrate that to solve a problem there can be many different ways.

This time, we have modified the above example to make the function greatNum() take two int values as arguments, but it will not be returning anything.

#include<stdio.h>

void greatNum(int a, int b);       // function declaration

int main()
{
    int i, j;
    printf("Enter 2 numbers that you want to compare...");
    scanf("%d%d", &i, &j);
    greatNum(i, j);        // function call
    return 0;
}

void greatNum(int x, int y)        // function definition
{
    if(x > y) {
        printf("The greater number is: %d", x);
    }
    else {
        printf("The greater number is: %d", y);
    }
}

 
## Function with arguments and a return value
This is the best type, as this makes the function completely independent of inputs and outputs, and only the logic is defined inside the function body.

#include<stdio.h>

int greatNum(int a, int b);       // function declaration

int main()
{
    int i, j, result;
    printf("Enter 2 numbers that you want to compare...");
    scanf("%d%d", &i, &j);
    result = greatNum(i, j); // function call
    printf("The greater number is: %d", result);
    return 0;
}

int greatNum(int x, int y)        // function definition
{
    if(x > y) {
        return x;
    }
    else {
        return y;
    }
}
## Nesting of Functions
C language also allows nesting of functions i.e to use/call one function inside another function's body. We must be careful while using nested functions, because it may lead to infinite nesting.


function1()
{
    // function1 body here
    
    function2();
    
    // function1 body here
}
If function2() also has a call for function1() inside it, then in that case, it will lead to an infinite nesting. They will keep calling each other and the program will never terminate.

Not able to understand? Lets consider that inside the main() function, function1() is called and its execution starts, then inside function1(), we have a call for function2(), so the control of program will go to the function2(). But as function2() also has a call to function1() in its body, it will call function1(), which will again call function2(), and this will go on for infinite times, until you forcefully exit from program execution.

## What is Recursion?
Recursion is a special way of nesting functions, where a function calls itself inside it. We must have certain conditions in the function to break out of the recursion, otherwise recursion will occur infinite times.

function1()
{   
    // function1 body
    function1();
    // function1 body
}

Example: Factorial of a number using Recursion
#include<stdio.h>

int factorial(int x);       //declaring the function

void main()
{
    int a, b;
    
    printf("Enter a number...");
    scanf("%d", &a);
    b = factorial(a);       //calling the function named factorial
    printf("%d", b);
}

int factorial(int x) //defining the function
{
    int r = 1;
    if(x == 1) 
        return 1;
    else 
        r = x*factorial(x-1);       //recursion, since the function calls itself
    
    return r;
}
Similarly, there are many more applications of recursion in C language. Go to the programs section, to find out more programs using recursion.
## Types of Function calls in C
Functions are called by their names, we all know that, then what is this tutorial for? Well if the function does not have any arguments, then to call a function you can directly use its name. But for functions with arguments, we can call a function in two different ways, based on how we specify the arguments, and these two ways are:

Call by Value
Call by Reference

## Call by Value
Calling a function by value means, we pass the values of the arguments which are stored or copied into the formal parameters of the function. Hence, the original values are unchanged only the parameters inside the function changes.

#include<stdio.h>

void calc(int x);

int main()
{
    int x = 10;
    calc(x);
    // this will print the value of 'x'
    printf("\nvalue of x in main is %d", x);
    return 0;
}

void calc(int x)
{
    // changing the value of 'x'
    x = x + 10 ;
    printf("value of x in calc function is %d ", x);
}

value of x in calc function is 20
value of x in main is 10

In this case, the actual variable x is not changed. This is because we are passing the argument by value, hence a copy of x is passed to the function, which is updated during function execution, and that copied value in the function is destroyed when the function ends(goes out of scope). So the variable x inside the main() function is never changed and hence, still holds a value of 10.


 
But we can change this program to let the function modify the original x variable, by making the function calc() return a value, and storing that value in x.

#include<stdio.h>

int calc(int x);

int main()
{
    int x = 10;
    x = calc(x);
    printf("value of x is %d", x);
    return 0;
}

int calc(int x)
{
    x = x + 10 ;
    return x;
}

value of x is 20

## Call by Reference
In call by reference we pass the address(reference) of a variable as argument to any function. When we pass the address of any variable as argument, then the function will have access to our variable, as it now knows where it is stored and hence can easily update its value.

In this case the formal parameter can be taken as a reference or a pointer(don't worry about pointers, we will soon learn about them), in both the cases they will change the values of the original variable.

#include<stdio.h>

void calc(int *p);      // functin taking pointer as argument

int main()
{
    int x = 10;
    calc(&x);       // passing address of 'x' as argument
    printf("value of x is %d", x);
    return(0);
}

void calc(int *p)       //receiving the address in a reference pointer variable
{
    /*
        changing the value directly that is 
        stored at the address passed
    */
    *p = *p + 10; 
}

value of x is 20
## How to pass Array to a Function in C
Whenever we need to pass a list of elements as argument to any function in C language, it is prefered to do so using an array. But how can we pass an array as argument to a function? Let's see how its done.

## Declaring Function with array as a parameter
There are two possible ways to do so, one by using call by value and other by using call by reference.

We can either have an array as a parameter.
int sum (int arr[]);
Or, we can have a pointer in the parameter list, to hold the base address of our array.
int sum (int* ptr);
We will study the second way in details later when we will study pointers.

## Returning an Array from a function
We don't return an array from functions, rather we return a pointer holding the base address of the array to be returned. But we must, make sure that the array exists after the function ends i.e. the array is not local to the function.

int* sum (int x[])
{
    // statements
    return x ;
}
We will discuss about this when we will study pointers with arrays.

## Passing arrays as parameter to function
Now let's see a few examples where we will pass a single array element as argument to a function, a one dimensional array to a function and a multidimensional array to a function.


 
## Passing a single array element to a function
Let's write a very simple program, where we will declare and define an array of integers in our main() function and pass one of the array element to a function, which will just print the value of the element.

#include<stdio.h>

void giveMeArray(int a);

int main()
{
    int myArray[] = { 2, 3, 4 };
    giveMeArray(myArray[2]);        //Passing array element myArray[2] only.
    return 0;
}

void giveMeArray(int a)
{
    printf("%d", a);
}

4

## Passing a complete One-dimensional array to a function
To understand how this is done, let's write a function to find out average of all the elements of the array and print it.

We will only send in the name of the array as argument, which is nothing but the address of the starting element of the array, or we can say the starting memory address.

#include<stdio.h>

float findAverage(int marks[]);

int main()
{
    float avg;
    int marks[] = {99, 90, 96, 93, 95};
    avg = findAverage(marks);       // name of the array is passed as argument.
    printf("Average marks = %.1f", avg);
    return 0;
}

float findAverage(int marks[])
{
    int i, sum = 0;
    float avg;
    for (i = 0; i <= 4; i++) {
        sum += marks[i];
    }
    avg = (sum / 5);
    return avg;
}

94.6

## Passing a Multi-dimensional array to a function
Here again, we will only pass the name of the array as argument.

#include<stdio.h>

void displayArray(int arr[3][3]);

int main()
{
    int arr[3][3], i, j;
    printf("Please enter 9 numbers for the array: \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {    
            scanf("%d", &arr[i][j]);
        }
    }
    // passing the array as argument
    displayArray(arr);
    return 0;
}

void displayArray(int arr[3][3])
{
    int i, j;
    printf("The complete array is: \n");
    for (i = 0; i < 3; ++i)
    {
        // getting cursor to new line
        printf("\n");
        for (j = 0; j < 3; ++j)
        {       
            // \t is used to provide tab space
            printf("%d\t", arr[i][j]);
        }
    }
}

Please enter 9 numbers for the array:
1
2
3
4
5
6
7
8
9
The complete array is:
1 2 3
4 5 6
7 8 9



