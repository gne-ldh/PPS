### Loops: do-while

**do-while:** In the do-while loop, the body of a loop is always executed at least once. After the body is executed, then it checks the condition. If the condition is true, then it will again execute the body of a loop otherwise control is transferred out of the loop.

A do...while loop in C is similar to the while loop except that the condition is always executed after the body of a loop. 

It is called an **exit-controlled** loop.

**The Syntax of do...while loop is:**
```c
do 
{
    //Statements

 } while(expression); 
 ```

 **Example:**
```c
#include<stdio.h>
int main()
{
	int num=1;	//initializing the variable
	do	//do-while loop 
	{
		printf("%d\n",2*num);
		num++;		//incrementing operation
	}while(num<=10);
	return 0;
}
```
**Output**
```c
2
4
6
8
10
12
14
16
18
20
```
**Program:** Sum of N natural numbers in C using do-while loop.

```c
#include<stdio.h>
int main()
{
  int n, sum=0, i=0;

  printf("Enter n value: ");
  scanf("%d", &n);

  do
  {
    sum += i++;
  } while(i<=n);

  printf("Sum of first %d natural numbers = %d",
                                      n, sum );

  return 0;
}
```
**Output**
```c
Enter n value: 5
Sum of first 5 natural numbers = 15
```






