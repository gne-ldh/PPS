**Arithmetic Expressions and Precedence** 
---------------------------------------

An arithmetic expression is an expression using additions +, subtractions -, multiplications *, divisions / and modulus %.

An expression is a combination of one or more operands, zero or more operators, and zero or more pairs of parentheses.

For example, in the expression:

(5 + x)

**x and 5** are operands 

**+** is an operator

**(** The open parenthesis, which is used to begin parenthetical text

**)** The close parenthesis 

The operators indicate what action or operation to perform. The operands indicate what items to apply the action to. 

The operators for an arithmetic expression are any of the following:

An operator is a symbol that tells the compiler to perform specific mathematical or logical functions. C language is rich in built-in operators and provides the following types of operators −

- Arithmetic Operators

**Arithmetic Operators**
------------------------------
An arithmetic operator performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).

The following table shows all the arithmetic operators supported by the C language. Assume variable A holds 10 and variable B holds 20 then −

Example:

|  Operator |  Description | Example                  |
|-----------|--------------|--------------------------|
|     +     |	Adds two operands.|	A + B = 30|
|     −	    |  Subtracts second operand from the first.|	A − B = -10|
|     *	    |Multiplies both operands.|	A * B = 200|
|    /      |Divides numerator by de-numerator.	|B / A = 2|
|    %      |Modulus Operator and remainder of after an integer division.|	B % A = 0|
|    ++     |Increment operator increases the integer value by one.|	A++ = 11
|    --	    |Decrement operator decreases the integer value by one.|	A-- = 9|

Example: 
   
    // Working of arithmetic operators
    #include <stdio.h>
    int main()
    {
       int a = 9,b = 4, c;
  
       c = a+b;
       printf("a+b = %d \n",c);
       c = a-b;
       printf("a-b = %d \n",c);
       c = a*b;
       printf("a*b = %d \n",c);
       c = a/b;
       printf("a/b = %d \n",c);
       c = a%b;
       printf("Remainder when a divided by b = %d \n",c);
    
       return 0;
    }

Output

    a+b = 13
    a-b = 5
    a*b = 36
    a/b = 2
    Remainder when a divided by b=1

