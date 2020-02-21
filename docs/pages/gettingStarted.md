## Getting Started 

The only way to learn a new programming language is by writing programs
in it.  The first program to write is to print most common words we
use, when we meet, i.e.:

    Sat Sri Akaal 

which is a form of greetings, like "Hello", or "Good morning".  For
this you need to type the program text somewhere, compile it
successfully, load it, run it, and find out where your output went. 
With these mechanical details mastered, everything else is
comparatively easy.

In C, the program to print `Sat Sri Akaal` is:
 
```
#include <stdio.h> 

int main(void) 
{ 
    puts("Sat Sri Akaal"); 
    return 0;
} 
```

Just how to run this program depends on the system you are using. If
you are following our instructions at
[Github](https://github.com/gne-ldh/PPS/tree/master/Content/Notes),
then create the program in a file named `main.c` in folder `source`,
then compile it with following commands from `build` directory
(folder):

```
cmake ..
make
``` 

If you haven’t fumbled, not commited any mistake, such as omitting a
character or misspelling something, then compilation will proceed and
you will read a message like:

```
[100%] Built target main
```

which mean you are able to built the target with name `main`, which is
the outcome of compilation process. If you run `main` by typing the
command:

```
./main
```

it will print 

```
Sat Sri Akaal
```

On other systems, the rules will be different; check with a local guru. 

Let is try to understand the C program.  A computer program written in
C language, whatever its size, consists of functions and variables.  A
function contains statements that specify the computing operations to
be done, and variables store values used during the computation.  Our
example is a function named, `main`.  Normally you are at liberty to give
functions whatever names you like, but `main` is special. Your program
begins executing at the beginning of `main`. This means that every
program must have a `main` somewhere.

`main` will usually call other functions to help perform its job, some
that you wrote, and others from libraries that are provided to you. 
The first line of the program,

```
#include <stdio.h> 
```

tells the compiler to include information about the standard
input/output library; this line appears at the beginning of many C
source files.

One method of communicating data between functions is for the calling
function to provide a list of values, called arguments, to the function
it calls.  The parentheses (round brackets) after the function name
surround the argument list.  In this example, `main` is defined to be a
function that expects no arguments, thus void written there (if you
wish, you may ommit it).

The statements of a function are enclosed in braces {}. The function
`main` contains only one statement,

```
puts("Sat Sri Akaal"); 

```
## The first C program
```
#include <stdio.h>          // include information about standard library 
int main(void)              // define a function named main that receives no argument values
{                           // statements of main are enclosed in braces 
    puts("Sat Sri Akaal");  // main calls library function puts
                            // to print this sequence of characters
    return 0;               // indicate successful execution
}
```

A function is called by naming it, followed by a parenthesised list of
arguments, so this calls the function `puts` with the argument `"Sat
Sri Akaal"`. `puts` is a library function that prints output, in this
case the string of characters between the double quotes.

A sequence of characters in double quotes, like `"Sat Sri Akaal"`, is
called a "character string" or "string constant".

```
puts("Sat\nSri\nAkaal");
```

If we change our program as above, then all three world, namely `Sat`.
`Sri`, and `Akaal` will in three separate lines.

The sequence \n in the string is C notation for the newline character,
which when printed advances the output to the left margin on the next
line.

If you try something like

```
puts("Sat Sri Akaal 
```

the C compiler will produce an error message. 

In place of `puts`, you may also try another library functon `printf`.
In source file of our first program, replace `puts` with `printf`, and
observe the similarities and differences.

`printf` never supplies a newline (\n) automatically, so several calls
may be used to build up an output line in stages.  Our "first program
could just as well have been written

```
#include <stdio.h> 
int main(void) 
{ 
    printf("Sat "); 
    printf("Sri "); 
    printf("Akaal"); 
    printf("\n");
    return 0; 
}

to produce identical output. 

Notice that \n represents only a single character.  An escape sequence
like \n provides a general and extensible mechanism for representing
hard-to-type or invisible characters.  Among the others that C provides
are \t for tab, \b for backspace, \" for the double quote, and \\ for
the backslash itself, and a few more.

## Exercise 

1.  Run the program to print "Sat Sri Akaal" on your system or on
code.gndec.ac.in
Experiment with leaving out parts of the program, to see what error
messages you get.

1.  Experiment to find out what happens when printf's argument string
contains \c, where c is some character not listed above.
