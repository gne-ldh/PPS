## Conditional Expressions

The conditional operator is also known as a **`ternary operator`**. The conditional statements are the decision-making statements which depends upon the output of the expression. It is represented by two symbols, i.e., '?' and ':'.

As conditional operator works on three operands, so it is also known as the ternary operator.

The behavior of the conditional operator is similar to the 'if-else' statement as 'if-else' statement is also a decision-making statement.

*Syntax of a Conditional Operator*
```c
Expression1? expression2: expression3;
```
**Meaning of the above syntax**

+ In the above syntax, the expression1 is a Boolean condition that can be either true or false value.

+  If the expression1 results into a true value, then the expression2 will execute.

+  The expression2 is said to be true only when it returns a non-zero value.

+ If the expression1 returns false value then the expression3 will execute.

+ The expression3 is said to be false only when it returns zero value.

```c
#include <stdio.h>  
int main()  
{  
    int age;  // variable declaration  
    printf("Enter your age");  
    scanf("%d",&age); // taking user input for age variable  
    (age>=18)? (printf("eligible for voting")) : (printf("not eligible for voting"));  // conditional operator  
    return 0;  
}  

```

In the above code, we are taking input as the 'age' of the user. After taking input, we have applied the condition by using a conditional operator. In this condition, we are checking the age of the user. If the age of the user is greater than or equal to 18, then the statement1 will execute, i.e., **`(printf("eligible for voting")) otherwise, statement2 will execute, i.e., (printf("not eligible for voting"))`**.

