### Statements and Blocks

**Statements:** A statement is a command given to the computer that instructs the computer to take a specific action, such as display to the screen, or collect input. A computer program is made up of a series of statements.

In C, a statement can be any of the following:
1. **Labeled Statements:** A statement can be preceded by a label. Three types of labels exist in C.

A simple identifier followed by a colon (:) is a label. Usually, this label is the target of a goto statement.

Within switch statements, case and default labeled statements exist. A statement of the form

```c
case constant-expression : statement
```
indicates that control will pass to this statement if the value of the control expression of the switch statement matches the value of the *constant-expression.*

A statement of the form

```c
default : statement
```



indicates that control will pass to this statement if the control expression of the switch statement does not match any of the *constant-expressions* within the switch statement. If the default statement is omitted, the control will pass to the statement following the switch statement. Within a switch statement, there can be only one default statement, unless the switch statement is within another switch statement.

2. **Compound Statements:** A compound statement is the way C groups multiple statements into a single statement. It consists of multiple statements and declarations within braces (i.e. { and }). 

3. **Expression statements:** An expression statement consists of an optional expression followed by a semicolon (;). If the expression is present, the statement may have a value. If no expression is present, the statement is often called the *null statement.*

The printf function calls are expressions, so statements such as **printf ("Hello World!\n");** are expression statements.

4. **Selection Statement:** Selection Statements in C programming are used to make decisions based on the conditions. It is also called as **branching** as a program decides which statement to execute based on the result of the evaluated condition. Three types of selection statements exist in C:

+ In this type of if-statement, the sub-statement will only be executed iff the expression is non-zero.

```c
if ( expression ) statement
```
+ In this type of if-statement, the first sub-statement will only be executed iff the expression is non-zero; otherwise, the second sub-statement will be executed.

```c
if ( expression ) statement else statement
```

+ Switch statements are also a type of selection statement. They have the format:
```c
switch ( expression ) statement
```      
The expression here is an integer or a character. The statement here is usually compound and it contains case-labeled statements and optionally a default-labeled statement. 

5. **Iteration Statement**: An iteration statement, or loop, repeatedly executes a statement, known as the loop body, until the controlling expression is false. C has three kinds of iteration statements.

+ The first is a while-statement with the form:
 ```c
while ( expression )     statement
```
The sub-statement of a while runs repeatedly as long as the control expression evaluates to non-zero at the beginning of each iteration. If the control expression evaluates to zero the first time through, the substatement may not run at all.
+ The second is a do-while statement of the form

```c
do statement
while ( expression ) ;
```
This is similar to a while loop, except that the controlling expression is evaluated at the end of the loop instead of the beginning and consequently the sub-statement must execute at least once.
+ The third type of iteration statement is the for-statement. 
```c
for ( expressionopt ; expressionopt ; expressionopt ) statement
```
6. **Jump Statements**:
C has four types of jump statements. 
+ The first, the *goto statement*, is used sparingly and has the form

```c
  goto identifier ;
```
This statement transfers control flow to the statement labeled with the given identifier. The statement must be within the same function as the goto.

+  The second, the *break statement*, with the form

```c
  break ;
```       
is used within iteration statements and switch statements to pass control flow to the statement following the while, do-while, for, or switch.

+ The third, the *continue statement*, with the form
```c
  continue ;
```
is used within the sub-statement of iteration statements to transfer control flow to the place just before the end of the substatement. In *for statements* the iteration expression will then be executed before the controlling expression is evaluated.

+ The fourth type of *jump statement* is the return statement with the form
```c
  return expressionopt ;
```
This statement returns from the function. If the function return type is void, the function may not return a value; otherwise, the expression represents the value to be returned.

**Blocks:** Blocks are a way of solving the scoping problem. A block is a program region containing definitions of variables and that delimits the regions where these definitions apply. In C programming language, a block is created using a pair of curly braces. The beginning of the block is denoted by an open curly brace '{' and the end is denoted by a closing curly brace '}'. The block collects statements together into a *single compound statements*.
There are two types of block:

1. **Statement blocks**
```c
	if ( i == j)
        {
          printf("martin \n");
        }
```
The statement block containing the printf is only executed if the i ==  j expression evaluates to TRUE.

2. **Function blocks**
```c
	int add( int a, int b)      /* Function definition */
	{
	  int c;
	  c = a + b;
	  return c;
	}
```
The statements in this block will only be executed if the add function is called.



