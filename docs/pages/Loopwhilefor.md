### Loop: while and for

**Loop:** A Loop executes the sequence of statements many times until the stated condition becomes false. A loop consists of two parts, a body of a loop and a control statement. The control statement is a combination of some conditions that direct the body of the loop to execute until the specified condition becomes false. 

The purpose of the loop is to repeat the same code a number of times.

C programming has three types of loops:
1. for loop
2. while loop
3. do...while loop

**For Loop:** A for loop is a more efficient loop structure in 'C' programming.

**The syntax of the for loop is:**
```c
for (initializationStatement; testExpression; updateStatement)
{
   // statements inside the body of loop
}
```
**How for loop works?**

The initialization statement is executed only once. Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is terminated. However, if the test expression is evaluated to true, statements inside the body of for loop are executed, and the update expression is updated. Again the test expression is evaluated. This process goes on until the test expression is false. When the test expression is false, the loop terminates.

**Example:** Print numbers from 1 to 10
```c
#include <stdio.h>

int main() {
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
  return 0;
}
```
**Output**
```c
1 2 3 4 5 6 7 8 9 10
```
1.	i is initialized to 1.
2.	The test expression i < 11 is evaluated. Since 1 less than 11 is true, the body of for loop is executed. This will print the 1 (value of i) on the screen.
3.	The update statement ++i is executed. Now, the value of i will be 2. Again, the test expression is evaluated to true, and the body of for loop is executed. This will print 2 (value of i) on the screen.
4.	Again, the update statement ++i is executed and the test expression i < 11 is evaluated. This process goes on until i becomes 11.
5.	When i becomes 11, i < 11 will be false, and the for loop terminates.

**Example:** Program to print multiplication table using for loop.

```c
#include <stdio.h>
int main()
{
   int n, i;
 
    printf("Enter a Number \n");
    scanf("%d",&n);
 
    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
     
    return 0;
    
}
```
**Output**
```c
Enter a Number 
2
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20
```


**While Loop:** In while loop, a condition is evaluated before processing a body of the loop.

If a condition is true then and only then the body of a loop is executed. After the body of a loop is executed then control again goes back at the beginning, and the condition is checked if it is true, the same process is executed until the condition becomes false. Once the condition becomes false, the control goes out of the loop.After exiting the loop, the control goes to the statements which are immediately after the loop. 

It is an **entry-controlled loop.**

**The syntax of the While loop is:**
```c
while(condition) 
{
    //Statements

 }
```
**Example:**
```c
#include<stdio.h>
int main()
{
	int num=1;	//initializing the variable
	while(num<=10)	//while loop with condition
	{
		printf("%d\n",num);
		num++;		//incrementing operation
	}
	return 0;
}
```

**Output:**
```c
1
2
3
4
5
6
7
8
9
10
```
**Program:** Program to print multiplication table using while loop.
```c
#include <stdio.h>
int main()
{
   int n, i;
 
    printf("Enter a Number \n");
    scanf("%d",&n);
    i=1;
    while(i<=10){
                
        printf("%d * %d = %d \n", n, i, n*i);
        ++i;
    }
     
    return 0;    
}
```
**Output**
```c
Enter a Number 
2
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20
```




