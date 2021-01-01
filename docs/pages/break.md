### Break and Continue

**Break:** Suppose we are writing a program to search for a particular number among 1000 numbers. In the 10th iteration, we have found the desired number. At this point, we don't want to transverse the remaining 990 numbers instead we want the loop to terminate and continue with the execution of statement following the loop. This is where the break statement comes into the play.

When break statement is encountered within the loop, the program control immediately breaks out of the loop and resumes execution with the statement following the loop. The break statement is commonly used in conjunction with a condition.

**Its syntax is:**
```c
break;
```
**Example:**
```c
#include<stdio.h>
int main()
{
    int i;
    for(i = 1; i < 10 ; i++)
    {
        if(i==5)
        {
            break; // breaks out of the for loop
        }
        printf("Value of i = %d\n", i);
    }

    return 0;
}
```

**Output**
```c
Value of i = 1
Value of i = 2
Value of i = 3
Value of i = 4
```

**How does break statement works?**

In the 5th iteration value of i becomes 5. The condition (i==5) is checked since it is true. The break statement is executed and the control comes out of the for loop to execute the statement following it. Had there been no break statement, this loop would have been executed 9 times.

**Continue:**  The continue statement is used to prematurely end the current iteration and move on to the next iteration. When the continue statement is encountered in a loop, all the statements after the continue statement are omitted and the loop continues with the next iteration. 

The **difference between break statement and continue statement** is that when *break statement* is encountered it breaks out of the loop, but when the *continue statement* is encountered, the loop is not terminated instead the control is passed to the beginning of the loop.

When the continue statement is encountered in the while and do while loop, the control is transferred to the test condition and then the loop continues whereas in the for loop when continue statement is encountered the control is transferred to the update expression, then the condition is tested.

**Its syntax is:**
```c 
continue;
```
**Example:** The following program prints all the numbers between 0 to 10 which are not divisible by 4 using the continue statement.

```c
#include<stdio.h>
int main()
{
    int i;

    for(i = 0; i < 10; i++)
    {
        if( i % 4 == 0 )
        {
            /*
                when i is divisible by 4
                continue to the next iteration
            */
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
```
**Output**
```c
text
1
2
3
5
6
7
9
```

**How does continue statement works?**

When the for loop starts the variable i is set to 0, then the condition (i < 10) or (0 < 10) is tested, since it is true, the program control moves ahead to execute the loop body. Inside the loop body, the if condition i % 4 == 0 i.e 0 % 4 == 0 is checked, since it is false, the execution of statement in the if body is skipped. In line 17, we print the value of i, using the printf() statement. There are no more statements to execute in the loop body, so the program control is transferred to the update expression (i++). This completes the first iteration.
In the 5th iteration, the value of i reaches 4. Then the if condition (i % 4 == 0) i.e (4 % 4 == 0) is tested, since it is true, the continue statement is executed, and the control is transferred to the update expression. The expression i++ increments the value of the variable i by 1. Then, the condition i < 10 is tested again. This process continues until i < 10



