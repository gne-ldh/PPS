### if else statement

**if Statements:** The *if statement* is a powerful decision making statement which can handle a single condition or group of statements. These have either true or false action.
When only one condition occurs in a statement, then simple *if statement* is used having one block.
**The syntax for if statement:**

```c 
if (test expression) 
{
   // statements to be executed if the test expression is true
}
```
**How if statement works?**

The *if statement* evaluates the test expression inside the parenthesis ().
If the test expression is evaluated to true, statements inside the body of if are executed. If the test expression is evaluated to false, statements inside the body of *if* are not executed.

**Example:** Program to display a number if it is negative.

```c
#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    return 0;
}
```
**Output** 
```c

Enter an integer: -2
You entered -2.
The if statement is easy.
```
**if-else:**
The *if statement* may have an optional *else* block. **The syntax of the if-else statement is:**
```c

if (test expression) {
    // statements to be executed if the test expression is true
}
else {
    // statements to be executed if the test expression is false
}
```
**How if-else statement works?**

If the test expression is evaluated to true, statements inside the body of *if* are executed and statements inside the body of *else* are skipped from execution.
If the test expression is evaluated to false, statements inside the body of *else* are executed and statements inside the body of *if* are skipped from execution.

**Example:** Check whether an integer is odd or even.
```c

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    return 0;
}
```
```c
Output
Enter an integer: 7
7 is an odd integer.
````
**Nested if-else:**
When an if else statement is present inside the body of another “*if*” or “*else*” then this is called *nested if else*.
**The syntax of Nested if-else is:**
```c
if(condition) 
{
    //Nested if else inside the body of "if"

    if(condition2) 
{
       //Statements inside the body of nested "if"
    }
    else 
   {
       //Statements inside the body of nested "else"
    }
}
else 
{
    //Statements inside the body of "else"
}
```
**Example:**
```c
#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 >= number2) {
      if (number1 == number2) {
        printf("Result: %d = %d",number1,number2);
      }
      else {
        printf("Result: %d > %d", number1, number2);
      }
    }
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}
```

**Output**
```c
Enter two integers: 2
3
Result: 2 < 3
```










