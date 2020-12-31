## Increment and Decrement Operator 

In programming (Java, C, C++, JavaScript etc. ), the increment operator ++ increases the value of a variable by 1. Similarly, the decrement operator -- decreases the value of a variable by 1.

```c
a = 5
++a;          // a becomes 6
a++;          // a becomes 7
--a;          // a becomes 6
a--;          // a becomes 5
```
### ++ and -- operator as prefix and postfix

If you use the ++ operator as prefix like: ++var. The value of var is incremented by 1 then, it returns the value.

If you use the ++ operator as postfix like: var++. The original value of var is returned first then, var is incremented by 1.

The -- operator works in a similar way like the ++ operator except it decreases the value by 1.
 
*Example: Increment and Decrement Operators*

```c
// Working of increment and decrement operators
#include <stdio.h>
int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;
 
    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);
 
    return 0;
}
```
```c
Output
++a = 11
--b = 99
++c = 11.500000
--d = 99.500000
```
