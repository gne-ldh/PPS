**Arithmetic Expressions and Precedence** 
---------------------------------------

An arithmetic expression is an expression using additions +, subtractions -, multiplications *, divisions /, and exponentials **. 

An expression is a combination of one or more operands, zero or more operators, and zero or more pairs of parentheses.

For example, in the expression:

(5 + x)
x and 5 are operands 
+ is an operator. 
( The open parenthesis, which is used to begin parenthetical text. 
) The close parenthesis 

There are three kinds of expressions:

- An arithmetic expression evaluates to a single arithmetic value.
- A character expression evaluates to a single value of type character.
- A logical or relational expression evaluates to a single logical value.

The operators indicate what action or operation to perform.

The operands indicate what items to apply the action to. An operand can be any of the following kinds of data items:

- Constant 
- Variable
- Array element
- Function
- Substring
- Structured record field (if it evaluates to a scalar data item)
- An expression

The operators for an arithmetic expression are any of the following:

An operator is a symbol that tells the compiler to perform specific mathematical or logical functions. C language is rich in built-in operators and provides the following types of operators −

- Arithmetic Operators
- Relational Operators
- Logical Operators
- Bitwise Operators
- Assignment Operators
- Misc Operators

We will, look into the way each operator works.

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

**Relational Operators**
---------------------------------------
A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.

Relational operators are used in decision making and loops.

The following table shows all the relational operators supported by C. Assume variable A holds 10 and variable B holds 20 then −

Example:

|Operator|	Description|	Example|
|--------|-------------|-----------|
|==	|Checks if the values of two operands are equal or not. If yes, then the condition becomes true.|	(A == B) is not true.|
|!=	|Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.|	(A != B) is true.|
|>	|Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.|	(A > B) is not true.|
|<	|Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.|	(A < B) is true.|
|>=|	Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.|	(A >= B) is not true.|
|<=|	Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.|	(A <= B) is true.|

Example:

    // Working of relational operators
    #include <stdio.h>
    int main()
    {
       int a = 5, b = 5, c = 10;
       printf("%d == %d is %d \n", a, b, a == b);
       printf("%d == %d is %d \n", a, c, a == c);
       printf("%d > %d is %d \n", a, b, a > b);
       printf("%d > %d is %d \n", a, c, a > c);
       printf("%d < %d is %d \n", a, b, a < b);
       printf("%d < %d is %d \n", a, c, a < c);
       printf("%d != %d is %d \n", a, b, a != b);
       printf("%d != %d is %d \n", a, c, a != c);
       printf("%d >= %d is %d \n", a, b, a >= b);
       printf("%d >= %d is %d \n", a, c, a >= c);
       printf("%d <= %d is %d \n", a, b, a <= b);
       printf("%d <= %d is %d \n", a, c, a <= c);
       return 0;
    }

Output

        5 == 5 is 1
        5 == 10 is 0
        5> 5 is 0
        5 > 10 is 0
        5 < 5 is 0
        5 < 10 is 1
        5 != 5 is 0
        5 != 10 is 1
        5 >= 5 is 1
        5 >= 10 is 0
        5 <= 5 is 1
        5 <= 10 is 1

**Logical Operators**
-----------------------
An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false. Logical operators are commonly used in decision making in C programming.

Following table shows all the logical operators supported by C language. Assume variable A holds 1 and variable B holds 0, then −

Example:

|Operator|	Description|	Example|
|--------|-------------|-----------|
|&&	     |Called Logical AND operator.| If both the operands are non-zero, then the condition becomes true.	(A && B) is false.|
| \|\|     |	Called Logical OR Operator.| If any of the two operands is non-zero, then the condition becomes true.	(A || B) is true.|
| !      |	Called Logical NOT Operator.| It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false.	!(A && B) is true.|

 Example: 
 
    // Working of logical operators
    #include <stdio.h>
    int main()
    {
      int a = 5, b = 5, c = 10, result;
      result = (a == b) && (c > b);
      printf("(a == b) && (c > b) is %d \n", result);
      result = (a == b) && (c < b);
      printf("(a == b) && (c < b) is %d \n", result);
      result = (a == b) || (c < b);
      printf("(a == b) || (c < b) is %d \n", result);
      result = (a != b) || (c < b);
      printf("(a != b) || (c < b) is %d \n", result);
      result = !(a != b);
      printf("!(a == b) is %d \n", result);
      result = !(a == b);
      printf("!(a == b) is %d \n", result);
      return 0;
    }

Output

        (a == b) && (c > b) is 1 
        (a == b) && (c < b) is 0 
        (a == b) || (c < b) is 1 
        (a != b) || (c < b) is 0 
        !(a != b) is 1 
        !(a == b) is 0 

Explanation of logical operator program

        (a == b) && (c > 5) evaluates to 1 because both operands (a == b) and (c > b) is 1 (true).
        (a == b) && (c < b) evaluates to 0 because operand (c < b) is 0 (false).
        (a == b) || (c < b) evaluates to 1 because (a = b) is 1 (true).
        (a != b) || (c < b) evaluates to 0 because both operand (a != b) and (c < b) are 0 (false).
        !(a != b) evaluates to 1 because operand (a != b) is 0 (false). Hence, !(a != b) is 1 (true).
        !(a == b) evaluates to 0 because (a == b) is 1 (true). Hence, !(a == b) is 0 (false).


**Bitwise Operators**
----------------------------

During computation, mathematical operations like: addition, subtraction, multiplication, division, etc are converted to bit-level which makes processing faster and saves power.

Bitwise operators are used in C programming to perform bit-level operations.

Bitwise operator works on bits and perform bit-by-bit operation. The truth tables for &, |, and ^ is as follows −
&	Bitwise AND
|	Bitwise OR
^	Bitwise exclusive OR
~	Bitwise complement
<<	Shift left
`>>`Shift right

|p|q|p & q| p \| q |p^q|
|-|-|-----|--------|---|
|0|0|   0 |    0   |0  |
|0|1|   0 |    1   |1  |
|1|1|   1 |    1   |0  |
|1|0|   0 |    1   |1  |

Assume A = 60 and B = 13 in binary format, they will be as follows −

A = 0011 1100

B = 0000 1101

-----------------

A&B = 0000 1100

A|B = 0011 1101

A^B = 0011 0001

~A = 1100 0011

The following table lists the bitwise operators supported by C. Assume variable 'A' holds 60 and variable 'B' holds 13, then −

Example:

|Operator|	Description	|Example|
|--------|--------------|-------|
|&	|Binary AND Operator copies a bit to the result if it exists in both operands.|	(A & B) = 12, i.e., 0000 1100|
|\|	|Binary OR Operator copies a bit if it exists in either operand.|	(A \| B) = 61, i.e., 0011 1101|
|^|	Binary XOR Operator copies the bit if it is set in one operand but not both.|	(A ^ B) = 49, i.e., 0011 0001|
|~|	Binary One's Complement Operator is unary and has the effect of 'flipping' bits.|	(~A ) = ~(60), i.e,. -0111101|
|<<|	Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.|	A << 2 = 240 i.e., 1111 0000|
|>>|	Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.	|A >> 2 = 15 i.e., 0000 1111|

Let us suppose the bitwise AND operation of two integers 12 and 25.

        12 = 00001100 (In Binary)
        25 = 00011001 (In Binary)

        Bit Operation of 12 and 25
          00001100
        & 00011001
          ________
          00001000  = 8 (In decimal)

Example #1: Bitwise AND

        #include <stdio.h>
        int main()
        {
            int a = 12, b = 25;
            printf("Output = %d", a&b);
            return 0;
        }
Output

        Output = 8

**Bitwise OR operator |**
------------------------------
The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. In C Programming, bitwise OR operator is denoted by |.

        12 = 00001100 (In Binary)
        25 = 00011001 (In Binary)

Bitwise OR Operation of 12 and 25

          00001100
        | 00011001
          ________
          00011101  = 29 (In decimal)

Example #2: Bitwise OR

        #include <stdio.h>
        int main()
        {
            int a = 12, b = 25;
            printf("Output = %d", a|b);
            return 0;
        }
Output

        Output = 29

**Bitwise XOR (exclusive OR) operator ^**
=========================================
The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by ^.

        12 = 00001100 (In Binary)
        25 = 00011001 (In Binary)

Bitwise XOR Operation of 12 and 25

          00001100
        ^ 00011001
          ________
          00010101  = 21 (In decimal)

Example #3: Bitwise XOR

        #include <stdio.h>
        int main()
        {
            int a = 12, b = 25;
            printf("Output = %d", a^b);
            return 0;
        }
Output

        Output = 21

**Assignment Operators**
--------------------------
An assignment operator is used for assigning a value to a variable. The most common assignment operator is =

The following table lists the assignment operators supported by the C language −

Examples:

|Operator|	Description|	Example|
|--------|-------------|-----------|
|=|	Simple assignment operator. Assigns values from right side operands to left side operand|	C = A + B will assign the value of A + B to C|
|+=|	Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand.|	C += A is equivalent to C = C + A|
|-=|	Subtract AND assignment operator. It subtracts the right operand from the left operand and assigns the result to the left operand.|	C -= A is equivalent to C = C - A|
|*=|	Multiply AND assignment operator. It multiplies the right operand with the left operand and assigns the result to the left operand.|	C *= A is equivalent to C = C * A|
|/=|	Divide AND assignment operator. It divides the left operand with the right operand and assigns the result to the left operand.	|C /= A is equivalent to C = C / A|
|%=|	Modulus AND assignment operator. It takes modulus using two operands and assigns the result to the left operand.|	C %= A is equivalent to C = C % A|
|<<=|	Left shift AND assignment operator.|	C <<= 2 is same as C = C << 2|
|>>=|	Right shift AND assignment operator.|	C >>= 2 is same as C = C >> 2|
|&=	|Bitwise AND assignment operator.|	C &= 2 is same as C = C & 2|
|^=|	Bitwise exclusive OR and assignment operator.|	C ^= 2 is same as C = C ^ 2|
|\|=|	Bitwise inclusive OR and assignment operator.|	C \|= 2 is same as C = C \| 2|

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

Other Operators

**The sizeof operator**
-------------------------
The sizeof is a unary operator that returns the size of data (constants, variables, array, structure, etc).

Example 6: sizeof Operator

        #include <stdio.h>
        int main()
        {
            int a;
            float b;
            double c;
            char d;
            printf("Size of int=%lu bytes\n",sizeof(a));
            printf("Size of float=%lu bytes\n",sizeof(b));
            printf("Size of double=%lu bytes\n",sizeof(c));
            printf("Size of char=%lu byte\n",sizeof(d));
            return 0;
        }
Output

        Size of int = 4 bytes
        Size of float = 4 bytes
        Size of double = 8 bytes
        Size of char = 1 byte

**Operator Precesence and Associativity**

Operator precedence determines the grouping of terms in an expression and decides how an expression is evaluated. Certain operators have higher precedence than others; for example, the multiplication operator has a higher precedence than the addition operator.

        For example, 
           x = 7 + 3 * 2; here, x is assigned 13, not 20 because operator * has
           a higher precedence than +, so it first gets multiplied with 3*2 and 
           then adds into 7.

Here, operators with the highest precedence appear at the top of the table, those with the lowest appear at the bottom. Within an expression, higher precedence operators will be evaluated first.

|Category|	Operator|	Associativity|
|--------|----------|----------------|
|Postfix |	() [] -> . ++ - -|	Left to right|
|Unary	|+ - ! ~ ++ - - (type)* & sizeof|	Right to left|
|Multiplicative|	* / %|	Left to right|
|Additive|	+ -|	Left to right|
|Shift	|<< >>|	Left to right|
|Relational|	< <= > >=|	Left to right|
|Equality	|== !=	|Left to right|
|Bitwise AND|	&	|Left to right|
|Bitwise XOR|	^	|Left to right|
|Bitwise OR|	\|	|Left to right|
|Logical AND|	&&	|Left to right|
|Logical OR|	\|\| |	Left to right|
|Conditional|	?:	|Right to left|
|Assignment	|= += -= *= /= %=>>= <<= &= ^= \|=	|Right to left|
|Comma	|,	|Left to right|

Example

  Try the following example to understand operator precedence in C −

         #include <stdio.h>

          int main() 
          {

           int a = 20;
           int b = 10;
           int c = 15;
           int d = 5;
           int e;
 
           e = (a + b) * c / d;      // ( 30 * 15 ) / 5
           printf("Value of (a + b) * c / d is : %d\n",  e );

           e = ((a + b) * c) / d;    // (30 * 15 ) / 5
           printf("Value of ((a + b) * c) / d is  : %d\n" ,  e );

           e = (a + b) * (c / d);   // (30) * (15/5)
           printf("Value of (a + b) * (c / d) is  : %d\n",  e );

           e = a + (b * c) / d;     //  20 + (150/5)
           printf("Value of a + (b * c) / d is  : %d\n" ,  e );
  
           return 0;
          }

When you compile and execute the above program, it produces the following result −

        Value of (a + b) * c / d is : 90
        Value of ((a + b) * c) / d is  : 90
        Value of (a + b) * (c / d) is  : 90
        Value of a + (b * c) / d is  : 50

Operators Associativity is used when two operators of same precedence appear in an expression. Associativity can be either Left to Right or Right to Left.

For example: ‘*’ and ‘/’ have same precedence and their associativity is Left to Right, so the expression “100 / 10 * 10” is treated as “(100 / 10) * 10”.

Operators Precedence and Associativity are two characteristics of operators that determine the evaluation order of sub-expressions in absence of brackets.
