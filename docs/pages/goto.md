### goto and labels

**goto and labels:** goto is a jumping statement in c language, which transfer the program’s control from one statement to another statement (where label is defined). **goto** can transfer the program’s within the same block and there must a label, where you want to transfer program’s control.

**The syntax of goto statement is:**
```c
goto label;
... .. ...
... .. ...
label: 
statement;
```
**Label is defined by the following syntax:**

**label_name:**

•	label_name should be a valid identifier name.

•	: (colon) should be used after the label_name.

**Example:**
```c 
#include <stdio.h>
int main()
{
    int number;
 
    printf("Enter an integer number: ");
    scanf("%d",&number);
 
    if(number<=0)
        goto end;
    printf("Number is : %d", number);
 
end:    
    printf("Bye Bye !!!");
    return 0;
}
```

**Output**
```c
First run:
    Enter an integer number: 123
    Number is : 123
    Bye Bye !!!

    Second run:
    Enter an integer number: 0
    Bye Bye !!!
```

**Disadvantages of using goto statement:**
1. The use of goto statement is highly discouraged as it makes the program logic very complex.
2. Use of goto makes the task of analyzing and verifying the correctness of programs (particularly those involving loops) very difficult.

+ Use of goto can be simply avoided using break and continue statements.


