### else if statement

**else if Statements:** The *if-else* statement executes two different codes depending upon whether the test expression is true or false. Sometimes, a choice has to be made from more than two possibilities.

The *else-if* statement is useful when you need to check multiple conditions within the program.
**The syntax for else-if ladder is:**
```C
if (test expression1) {
   // statement(s)
}
else if(test expression2) {
   // statement(s)
}
else if (test expression3) {
   // statement(s)
}
.
.
else {
   // statement(s)
}
```
**Example:** Program to relate two integers using =, > or < symbol


```c
#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    //checks if the two integers are equal.
    if(number1 == number2) {
        printf("Result: %d = %d",number1,number2);
    }

    //checks if number1 is greater than number2.
    else if (number1 > number2) {
        printf("Result: %d > %d", number1, number2);
    }

    //checks if both test expressions are false
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}
```

**Output**
```c
Enter two integers: 12
23
Result: 12 < 23
```











