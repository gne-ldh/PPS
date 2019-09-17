**Arithmetic Expressions and Precedence** 
---------------------------------------

An arithmetic expression is an expression using additions +, subtractions -, multiplications *, divisions / and modulus %.

An expression is a combination of one or more operands, zero or more operators, and zero or more pairs of parentheses.

For example, in the expression:

                               (5 + x)

x and 5 are operands 

\+  is an operator

(  The open parenthesis, which is used to begin parenthetical text

)  The close parenthesis 

The operators indicate what action or operation to perform. The operands indicate what items to apply the action to. 

An operator is a symbol that tells the compiler to perform specific mathematical or logical functions. C language is rich in built-in operators and provides the following types of operators −

- Arithmetic Operators
- Assignment Operators

**Arithmetic Operators**
------------------------------
An arithmetic operator performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).

The following table shows all the arithmetic operators supported by the C language. Assume variable A holds 10 and variable B holds 20 then:

Example:

|  Operator |  Description | Example                  |
|-----------|--------------|--------------------------|
|     +     |	Adds two operands.|	A + B = 30|
|     −	    |  Subtracts second operand from the first.|	A − B = -10|
|     *	    |Multiplies both operands.|	A * B = 200|
|    /      |Divides numerator by de-numerator.	|B / A = 2|
|    %      |Modulus Operator and remainder of after an integer division.|	B % A = 0|

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
    
**Assignment Operators**
--------------------------
An assignment operator is used for assigning a value to a variable. The most common assignment operator is =

The following table lists the assignment operators supported by the C language:

Examples:

|Operator|	Description|	Example|
|--------|-------------|-----------|
|=|	Simple assignment operator. Assigns values from right side operands to left side operand|	C = A + B will assign the value of A + B to C|
|+=|	Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand.|	C += A is equivalent to C = C + A|
|-=|	Subtract AND assignment operator. It subtracts the right operand from the left operand and assigns the result to the left operand.|	C -= A is equivalent to C = C - A|
|*=|	Multiply AND assignment operator. It multiplies the right operand with the left operand and assigns the result to the left operand.|	C *= A is equivalent to C = C * A|
|/=|	Divide AND assignment operator. It divides the left operand with the right operand and assigns the result to the left operand.	|C /= A is equivalent to C = C / A|
|%=|	Modulus AND assignment operator. It takes modulus using two operands and assigns the result to the left operand.|	C %= A is equivalent to C = C % A|

Example: 

     // Working of assignment operators
     #include <stdio.h>
     int main()
     {
       int a = 5, c;
       c = a;      // c is 5
       printf("c = %d\n", c);
       c += a;     // c is 10 
       printf("c = %d\n", c);
       c -= a;     // c is 5
       printf("c = %d\n", c);
       c *= a;     // c is 25
       printf("c = %d\n", c);
       c /= a;     // c is 5
       printf("c = %d\n", c);
       c %= a;     // c = 0
       printf("c = %d\n", c);
       return 0;
      }
    
 **Operator Precedence and Associativity**

Operator precedence determines the grouping of terms in an expression and decides how an expression is evaluated. Certain operators have higher precedence than others. Operators on the same line have the same precedence.

For example, the multiplication operator has a higher precedence than the addition operator.

        For example, 
           x = 7 + 3 * 2; 
           Here, x is assigned 13, not 20 because operator * has a higher precedence than +, 
           so it first gets multiplied with 3*2 and then adds into 7.

Here, operators with the highest precedence appear at the top of the table, those with the lowest appear at the bottom. Within an expression, higher precedence operators will be evaluated first.

|Category|	Operator     |	Associativity|
|--------|---------------|----------------|
|Postfix |	( )     [ ]  |	Left to right|
|Unary	| +  -  ++  - -|	Right to left|
|Multiplicative|	 *  /   %  |	Left to right|
|Additive|	+   -|	Left to right|t|
|Relational|	  <     <=      >     >=  |	Left to right|

Example

  Try the following example to understand operator precedence in C:

         #include <stdio.h>

          int main() 
          {

           int a = 20;
           int b = 10;
           int c = 15;
           int d = 5;
           int e;
 
           e = (a + b) * c / d;                                       // ( 30 * 15 ) / 5
           printf("Value of (a + b) * c / d is : %d\n",  e );

           e = ((a + b) * c) / d;                                    // (30 * 15 ) / 5
           printf("Value of ((a + b) * c) / d is  : %d\n" ,  e );

           e = (a + b) * (c / d);                                   // (30) * (15/5)
           printf("Value of (a + b) * (c / d) is  : %d\n",  e );

           e = a + (b * c) / d;                                   //  20 + (150/5)
           printf("Value of a + (b * c) / d is  : %d\n" ,  e );
  
           return 0;
          }

When you compile and execute the above program, it produces the following result:

        Value of (a + b) * c / d is : 90
        Value of ((a + b) * c) / d is  : 90
        Value of (a + b) * (c / d) is  : 90
        Value of a + (b * c) / d is  : 50

Operators Associativity is used when two operators of same precedence appear in an expression. Associativity can be either Left to Right or Right to Left.

For example: ‘*’ and ‘/’ have same precedence and their associativity is Left to Right, so the expression “100 / 10 * 10” is treated as “(100 / 10) * 10”.

Operators Precedence and Associativity are two characteristics of operators that determine the evaluation order of sub-expressions in absence of brackets.  

