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


