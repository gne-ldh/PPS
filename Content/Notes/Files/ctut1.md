Edition 4.1

[]{#Top}

  ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

The GNU C Programming Tutorial {#the-gnu-c-programming-tutorial .settitle}
==============================

  ------------------------------------------------------------------------ ---- --
  [Preface](#Preface)                                                           
  [1. Introduction](#Introduction)                                              
  [2. Using a compiler](#Using-a-compiler)                                      
  [3. The form of a C program](#The-form-of-a-C-program)                        
  [4. Functions](#Functions)                                                    
  [5. Variables and declarations](#Variables-and-declarations)                  
  [6. Scope](#Scope)                                                            
  [7. Expressions and operators](#Expressions-and-operators)                    
  [8. Parameters](#Parameters)                                                  
  [9. Pointers](#Pointers)                                                      
  [10. Decisions](#Decisions)                                                   
  [11. Loops](#Loops)                                                           
  [12. Preprocessor directives](#Preprocessor-directives)                       
  [13. Libraries](#Libraries)                                                   
  [14. Arrays](#Arrays)                                                         
  [15. Strings](#Strings)                                                       
  [16. Input and output](#Input-and-output)                                     
  [17. Putting a program together](#Putting-a-program-together)                 
  [18. Advanced operators](#Advanced-operators)                                 
  [19. More data types](#More-data-types)                                       
  [20. Data structures](#Data-structures)                                       
  [21. Recursion](#Recursion)                                                   
  [22. Style](#Style)                                                           
  [23. Debugging](#Debugging)                                                   
  [24. Example programs](#Example-programs)                                     
  [A. A note from the original author](#A-note-from-the-original-author)        
  [B. Reserved words in C](#Reserved-words-in-C)                                
  [C. Precedence of operators](#Precedence-of-operators)                        
  [D. Special characters](#Special-characters)                                  
  [E. Character conversion table](#Character-conversion-table)                  
  [F. A word about `goto`](#A-word-about-goto)                                  
  [G. Answers to questions](#Answers-to-questions)                              
  [Bibliography](#Bibliography)                                                 
  [Glossary](#Glossary)                                                         
  [Code index](#Code-index)                                                     
  [Concept index](#Concept-index)                                               
  [Bits and pieces](#Bits-and-pieces)                                           
  ------------------------------------------------------------------------ ---- --

------------------------------------------------------------------------

[]{#Preface}

  ---------------------------------------------------- --------------------------------------------------------- --- ------------ ----------------------------- ------------------------------------------ --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Top "Previous section in reading order")\]   \[[\>](#Introduction "Next section in reading order")\]       \[ \<\< \]   \[[Up](#Top "Up section")\]   \[[\>\>](#Introduction "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ---------------------------------------------------- --------------------------------------------------------- --- ------------ ----------------------------- ------------------------------------------ --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Preface-1}

Preface {#preface .unnumbered}
=======

[]{#index-C-language_002c-why-it-is-useful}
[]{#index-C-language-as-standard}

This book is a tutorial for the computer programming language C. Unlike
BASIC or Pascal, C was not written as a teaching aid, but as a
professional tool. Programmers love C! Moreover, C is a standard,
widely-used language, and a single C program can often be made to run on
many different kinds of computer. As Richard M. Stallman remarks in GNU
Coding Standards, "Using another language is like using a non-standard
feature: it will cause trouble for users." (See
<http://www.gnu.org/prep/standards_toc.html>.)

[]{#index-C-language_002c-unforgiving-nature}
[]{#index-Unforgiving-nature-of-C-language}
[]{#index-C-language_002c-power-of} []{#index-Power-of-C-language}

Skeptics have said that everything that can go wrong in C, does. True,
it can be unforgiving, and holds some difficulties that are not obvious
at first, but that is because it does not withhold its powerful
capabilities from the beginner. If you have come to C seeking a powerful
language for writing everyday computer programs, you will not be
disappointed.

[]{#index-GNU-Project} []{#index-GNU_002fLinux}
[]{#index-Software_002c-free} []{#index-Free-software}

To get the most from this book, you should have some basic computer
literacy --- you should be able to run a program, edit a text file, and
so on. You should also have access to a computer running a GNU system
such as GNU/Linux. (For more information on GNU and the philosophy of
free software, see <http://www.gnu.org/philosophy/>.)

The tutorial introduces basic ideas in a logical order and progresses
steadily. You do not need to follow the order of the chapters
rigorously, but if you are a beginner to C, it is recommended that you
do. Later, you can return to this book and copy C code from it; the many
examples range from tiny programs that illustrate the use of one simple
feature, to complete applications that fill several pages. Along the
way, there are also brief discussions of the philosophy behind C.

[]{#index-Jargon}

Computer languages have been around so long that some jargon has
developed. You should not ignore this jargon entirely, because it is the
language that programmers speak. Jargon is explained wherever necessary,
but kept to a minimum. There is also a glossary at the back of the book.

[]{#index-GNU-Free-Documentation-License} []{#index-GNU-FDL}
[]{#index-Free-Documentation-License} []{#index-FDL}

The authors of this book hope you will learn everything you need to
write simple C programs from this book. Further, it is released under
the GNU Free Documentation License, so as the computers and robots in
the fantasies of Douglas Adams say, "Share and Enjoy!"

\
\
\

*The first edition of this book was written in 1987, then updated and
rewritten in 1999. It was originally published by Dabs Press. After it
went out of print, David Atherton of Dabs and the original author, Mark
Burgess, agreed to release the manuscript. At the request of the Free
Software Foundation, the book was further revised by Ron Hale-Evans in
2001 and 2002.*

[]{#index-Texinfo} []{#index-Emacs-Info-reader} []{#index-Info-reader}

*The current edition is written in Texinfo, which is a documentation
system using a single source file to produce both online information and
printed output. You can read this tutorial online with either the Emacs
Info reader, the stand-alone Info reader, or a World Wide Web browser,
or you can read it as a printed book.*

------------------------------------------------------------------------

[]{#Introduction}

  -------------------------------------------------------- ------------------------------------------------------------ --- ---------------------------------------------------------------------- ----------------------------- ---------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Preface "Previous section in reading order")\]   \[[\>](#Advantages-of-C "Next section in reading order")\]       \[[\<\<](#Preface "Beginning of this chapter or previous chapter")\]   \[[Up](#Top "Up section")\]   \[[\>\>](#Using-a-compiler "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  -------------------------------------------------------- ------------------------------------------------------------ --- ---------------------------------------------------------------------- ----------------------------- ---------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Introduction-1}

1. Introduction {#introduction .chapter}
===============

*What is a high-level language? Why is C unusual?*

[]{#index-Levels-of-detail} []{#index-Detail_002c-levels-of}

Any sufficiently complex object has levels of detail; the amount of
detail we see depends on how closely we scrutinize the object. A
computer has many levels of detail.

[]{#index-Low-level_002c-the} []{#index-High-level_002c-the}

The terms *low level* and *high level* are often used to describe these
layers of complexity in computers. The low level is buried in the
computer's microchips and microcircuits. The low level is the level at
which the computer seems most primitive and mechanical, whereas the high
level describes the computer in less detail, and makes it easier to use.

[]{#index-Car-as-metaphor-for-computer}
[]{#index-Automobile-as-metaphor-for-computer} []{#index-Black-boxes}
[]{#index-Boxes_002c-black}

You can see high levels and low levels in the workings of a car. In a
car, the nuts, bolts, and pistons of the low level can be grouped
together conceptually to form the higher-level engine. Without knowing
anything about the nuts and bolts, you can treat the engine as a *black
box*: a simple unit that behaves in predictable ways. At an even higher
level (the one most people use when driving), you can see a car as a
group of these black boxes, including the engine, the steering, the
brakes, and so on. At a high level, a computer also becomes a group of
black boxes.

[]{#index-C-language-as-high_002dlevel-language}
[]{#index-High_002dlevel-language_002c-C-language-as}

C is a high-level language. The aim of any high-level computer language
is to provide an easy, natural way to give a list of instructions (a
computer program) to a computer. The native language of the computer is
a stream of numbers called *machine language*. As you might expect, the
action resulting from a single machine language instruction is very
primitive, and many thousands of them can be required to do something
substantial. A high-level language provides a set of instructions you
can recombine creatively and give to the imaginary black boxes of the
computer. The high-level language software will then translate these
high-level instructions into low-level machine language instructions.

  --------------------------------------------------------- ---- --
  [1.1 The advantages of C](#Advantages-of-C)                    
  [1.2 Questions for Chapter 1](#Questions-for-Chapter-1)        
  --------------------------------------------------------- ---- --

------------------------------------------------------------------------

[]{#Advantages-of-C}

  ------------------------------------------------------------- -------------------------------------------------------------------- --- --------------------------------------------------------------------------- -------------------------------------- ---------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Introduction "Previous section in reading order")\]   \[[\>](#Questions-for-Chapter-1 "Next section in reading order")\]       \[[\<\<](#Introduction "Beginning of this chapter or previous chapter")\]   \[[Up](#Introduction "Up section")\]   \[[\>\>](#Using-a-compiler "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------------- -------------------------------------------------------------------- --- --------------------------------------------------------------------------- -------------------------------------- ---------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#The-advantages-of-C}

1.1 The advantages of C {#the-advantages-of-c .section}
-----------------------

[]{#index-C-language_002c-advantages-of}
[]{#index-Advantages-of-the-C-language}
[]{#index-general_002dpurpose-programming}
[]{#index-programming_002c-general_002dpurpose}

C is one of a large number of high-level languages designed for
*general-purpose programming*, in other words, for writing anything from
small programs for personal amusement to complex industrial
applications.

C has many advantages:

-   []{#index-Black-boxes_002c-disadvantages-of}
    []{#index-Disadvantages-of-black-boxes}
-   Before C, machine-language programmers criticized high-level
    languages because, with their black box approach, they shielded the
    user from the working details of the computer and all its
    facilities. C, however, was designed to give access to any level of
    the computer down to raw machine language, and because of this, it
    is perhaps the most flexible high-level language.
    []{#index-C-language_002c-flexibility-of}
    []{#index-Style_002c-freedom-of-in-C-language}
    []{#index-Freedom-of-style-in-C-language}
-   C has features that allow the programmer to organize programs in a
    clear, easy, logical way. For example, C allows meaningful names for
    variables without any loss of efficiency, yet it gives a complete
    freedom of programming style, including flexible ways of making
    decisions, and a set of flexible commands for performing tasks
    repetitively (`for`, `while`, `do`).
    []{#index-C-language_002c-succinctness-of}
    []{#index-Suucinctness-of-C-language}
-   C is succinct. It permits the creation of tidy, compact programs.
    This feature can be a mixed blessing, however, and the C programmer
    must balance simplicity and readability.
    []{#index-C-language_002c-concealed-difficulties}
    []{#index-C-language_002c-power-of-1}
    []{#index-Concealed-difficulties-of-C-language}
    []{#index-Power-of-C-language-1}
-   C allows commands that are invalid in other languages. This is no
    defect, but a powerful freedom which, when used with caution, makes
    many things possible. It does mean that there are concealed
    difficulties in C, but if you write carefully and thoughtfully, you
    can create fast, efficient programs.
    []{#index-C-language-and-peripherals}
    []{#index-Peripherals-and-C-language}
-   With C, you can use every resource your computer offers. C tries to
    link closely with the local environment, providing facilities for
    gaining access to common peripherals like disk drives and printers.
    When new peripherals are invented, the GNU community quickly
    provides the ability to program them in C as well. In fact, most of
    the GNU project is written in C (as are many other operating
    systems).

For the reasons outlined above, C is the preeminent high-level language.
Clearly, no language can guarantee good programs, but C can provide a
framework in which it is easy to program well.

------------------------------------------------------------------------

[]{#Questions-for-Chapter-1}

  ---------------------------------------------------------------- ------------------------------------------------------------- --- --------------------------------------------------------------------------- -------------------------------------- ---------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Advantages-of-C "Previous section in reading order")\]   \[[\>](#Using-a-compiler "Next section in reading order")\]       \[[\<\<](#Introduction "Beginning of this chapter or previous chapter")\]   \[[Up](#Introduction "Up section")\]   \[[\>\>](#Using-a-compiler "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ---------------------------------------------------------------- ------------------------------------------------------------- --- --------------------------------------------------------------------------- -------------------------------------- ---------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Questions-for-Chapter-1-1}

1.2 Questions for Chapter 1 {#questions-for-chapter-1 .section}
---------------------------

1.  Explain the distinction between high levels and low levels.
2.  What is a "black box"?
3.  Name a few advantages to programming in the C language.

------------------------------------------------------------------------

[]{#Using-a-compiler}

  ------------------------------------------------------------------------ -------------------------------------------------------- --- --------------------------------------------------------------------------- ----------------------------- ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Questions-for-Chapter-1 "Previous section in reading order")\]   \[[\>](#Basic-ideas "Next section in reading order")\]       \[[\<\<](#Introduction "Beginning of this chapter or previous chapter")\]   \[[Up](#Top "Up section")\]   \[[\>\>](#The-form-of-a-C-program "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------------------------ -------------------------------------------------------- --- --------------------------------------------------------------------------- ----------------------------- ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Using-a-compiler-1}

2. Using a compiler {#using-a-compiler .chapter}
===================

*How to use a compiler. What can go wrong.*

[]{#index-Operating-system} []{#index-Shell_002c-command}
[]{#index-Command-shell} []{#index-GNU-shell} []{#index-Shell_002c-GNU}
[]{#index-Compiler}

The *operating system* is the layer of software that drives the hardware
of a computer and provides the user with a comfortable work environment.
Operating systems vary, but most have a *shell*, or text interface. You
use the GNU shell every time you type in a command that launches an
email program or text editor under GNU.

In the following sections of this chapter, we will explore how to create
a C program from the GNU shell, and what might go wrong when you do.

  --------------------------------------------------------- ---- --
  [2.1 Basic ideas about C](#Basic-ideas)                        
  [2.2 The compiler](#The-compiler)                              
  [2.3 File names](#File-names)                                  
  [2.4 Errors](#Errors)                                          
  [2.5 Questions for Chapter 2](#Questions-for-Chapter-2)        
  --------------------------------------------------------- ---- --

------------------------------------------------------------------------

[]{#Basic-ideas}

  ----------------------------------------------------------------- --------------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Using-a-compiler "Previous section in reading order")\]   \[[\>](#The-compiler "Next section in reading order")\]       \[[\<\<](#Using-a-compiler "Beginning of this chapter or previous chapter")\]   \[[Up](#Using-a-compiler "Up section")\]   \[[\>\>](#The-form-of-a-C-program "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ----------------------------------------------------------------- --------------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Basic-ideas-about-C}

2.1 Basic ideas about C {#basic-ideas-about-c .section}
-----------------------

[]{#index-Shell_002c-command-1} []{#index-Command-shell-1}
[]{#index-GNU-shell-1} []{#index-Shell_002c-GNU-1}

First a note about a programming language that is different from the C
programming language, the GNU shell. When you enter commands in the GNU
shell, they are executed immediately. Moreover, the shell is a
programming language, in that the commands you type are a program,
because you can also create a text file containing many shell commands.
When you run this file, the commands will be executed in sequence.

On the other hand, consider C. While a shell command file can be
executed directly, a C program must be created in two stages:

1.  First, the program is written in the form of text files with a text
    editor such as GNU Emacs. This form of the program is called the
    *source code*. A computer cannot execute source code directly.
    []{#index-Compiler-1}
2.  Second, the completed source code is processed with a *compiler* ---
    a program that generates a new file containing a machine-language
    translation of the source code. This file is called an *executable
    file*, or *executable*. The executable file is said to have been
    *compiled* from the source code.

[]{#index-Executable-file_002c-running}
[]{#index-Running-an-executable-file}

To run the compiled program, you must usually type the name of the
executable file preceded by a period and a slash, as in this example:

+-----------------------------------+-----------------------------------+
|                                   | ``` {.smallexample}               |
|                                   | ./myprogram                       |
|                                   | ```                               |
+-----------------------------------+-----------------------------------+

[]{#index-_002e_002f-_0028dot_002dslash_0029-prefix-in-shell}
[]{#index-Dot_002dslash-_0028_002e_002f_0029-prefix-in-shell}

The "dot-slash" prefix tells the GNU shell to look in the current
directory for the executable. You usually do not need to type './' in
front of commands for programs that came with your GNU system, such as
`emacs`, because the computer already knows where to look for the
executables of those programs, which were placed in special directories
when your GNU system was installed.

[]{#index-Variable} []{#index-Function}

A C program is made up of, among other components, variables and
functions. A *variable* is a way to hold some data which may vary, hence
the name. For example, a variable might hold the number 17, and later
the number 41. Another variable might hold the word "Sue".

A *function* is a segment of text in the source code of a program that
tells the computer what to do. Programming consists, in large part, of
writing functions.

------------------------------------------------------------------------

[]{#The-compiler}

  ------------------------------------------------------------ ------------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Basic-ideas "Previous section in reading order")\]   \[[\>](#File-names "Next section in reading order")\]       \[[\<\<](#Using-a-compiler "Beginning of this chapter or previous chapter")\]   \[[Up](#Using-a-compiler "Up section")\]   \[[\>\>](#The-form-of-a-C-program "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------------ ------------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#The-compiler-1}

2.2 The compiler {#the-compiler .section}
----------------

[]{#index-Compiler-2} []{#index-Compiler-passes}
[]{#index-Passes_002c-compiler}

When you compile a program, the compiler usually operates in an orderly
sequence of phases called *passes*. The sequence happens approximately
like this:

1.  []{#index-Source-code} []{#index-Code_002c-source}
    []{#index-Pseudo_002dcode}
2.  First, the compiler reads the source code, perhaps generating an
    intermediate code (such as *pseudo-code*) that simplifies the source
    code for subsequent processing. []{#index-Object-code-file}
    []{#index-Object-file} []{#index-File_002c-object-code}
    []{#index-File_002c-object} []{#index-Object-code}
    []{#index-Code_002c-object}
3.  Next, the compiler converts the intermediate code (if there is any)
    or the original source code into an *object code* file, which
    contains machine language but is not yet executable. The compiler
    builds a separate object file for each source file. These are only
    temporary and are deleted by the compiler after compilation.
    []{#index-Linker}
4.  Finally, the compiler runs a *linker*. The linker merges the
    newly-created object code with some standard, built-in object code
    to produce an executable file that can stand alone.

[]{#index-GCC} []{#index-gcc} []{#index-GNU-C-Compiler}
[]{#index-GNU-Compiler-Collection} []{#index-Compiler-3}

GNU environments use a simple command to invoke the C compiler: `gcc`,
which stands for "GNU Compiler Collection". (It used to stand for "GNU C
Compiler", but now GCC can compile many more languages than just C.)
Thus, to compile a small program, you will usually type something like
the following command:

+-----------------------------------+-----------------------------------+
|                                   | ``` {.smallexample}               |
|                                   | gcc file_name                     |
|                                   | ```                               |
+-----------------------------------+-----------------------------------+

[]{#index-a_002eout}

On GNU systems, this results in the creation of an executable program
with the default name '`a.out`'. To tell the compiler you would like the
executable program to be called something else, use the '-o' option for
setting the name of the object code:

+-----------------------------------+-----------------------------------+
|                                   | ``` {.smallexample}               |
|                                   | gcc -o program_name file_name     |
|                                   | ```                               |
+-----------------------------------+-----------------------------------+

For example, to create a program called '`myprog`' from a file called
'`myprog.c`', write

+-----------------------------------+-----------------------------------+
|                                   | ``` {.smallexample}               |
|                                   | gcc -o myprog myprog.c            |
|                                   | ```                               |
+-----------------------------------+-----------------------------------+

To launch the resulting program '`myprog`' from the same directory, type

+-----------------------------------+-----------------------------------+
|                                   | ``` {.smallexample}               |
|                                   | ./myprog                          |
|                                   | ```                               |
+-----------------------------------+-----------------------------------+

------------------------------------------------------------------------

[]{#File-names}

  ------------------------------------------------------------- --------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#The-compiler "Previous section in reading order")\]   \[[\>](#Errors "Next section in reading order")\]       \[[\<\<](#Using-a-compiler "Beginning of this chapter or previous chapter")\]   \[[Up](#Using-a-compiler "Up section")\]   \[[\>\>](#The-form-of-a-C-program "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------------- --------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#File-names-1}

2.3 File names {#file-names .section}
--------------

[]{#index-File-name-conventions} []{#index-Conventions_002c-file-name}

GCC uses the following file name conventions:

  ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- ---------------------------------
  []{#index-_002ec-file-suffix} []{#index-_002eo-file-suffix} []{#index-_002eh-file-suffix} []{#index-_002ea-file-suffix} []{#index-_002eso-file-suffix} []{#index-File_002c-source-code} []{#index-Source-code-file} []{#index-File_002c-object-1} []{#index-Object-file-1} []{#index-File_002c-executable} []{#index-Executable-file} []{#index-File_002c-header} []{#index-Header-file} []{#index-File_002c-library} []{#index-Library-file}   
  Source code file                                                                                                                                                                                                                                                                                                                                                                                                                                program\_name`.c`
  Object file                                                                                                                                                                                                                                                                                                                                                                                                                                     program\_name`.o`
  Executable file                                                                                                                                                                                                                                                                                                                                                                                                                                 program\_name (no ending)
  Header file                                                                                                                                                                                                                                                                                                                                                                                                                                     name`.h`
  Library file                                                                                                                                                                                                                                                                                                                                                                                                                                    `lib`name`.a` or `lib`name`.so`
  ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- ---------------------------------

The file name endings, or *file extensions*, identify the contents of
files to the compiler. For example, the '.c' suffix tells the compiler
that the file contains C source code, and the other letters indicate
other kinds of files in a similar way.

------------------------------------------------------------------------

[]{#Errors}

  ----------------------------------------------------------- ----------------------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#File-names "Previous section in reading order")\]   \[[\>](#Typographical-errors "Next section in reading order")\]       \[[\<\<](#Using-a-compiler "Beginning of this chapter or previous chapter")\]   \[[Up](#Using-a-compiler "Up section")\]   \[[\>\>](#The-form-of-a-C-program "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ----------------------------------------------------------- ----------------------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Errors-1}

2.4 Errors {#errors .section}
----------

[]{#index-Errors} []{#index-Bugs}

Errors are mistakes that programmers make in their code. There are two
main kinds of errors.

-   []{#index-Compile_002dtime-errors}
    []{#index-Errors_002c-compile_002dtime}
    []{#index-Compile_002dtime-bugs}
    []{#index-Bugs_002c-compile_002dtime} []{#index-Syntax-errors}
    []{#index-Errors_002c-syntax} []{#index-Type-errors}
    []{#index-Errors_002c-type}
-   *Compile-time errors* are errors caught by the compiler. They can be
    *syntax errors*, such as typing fro instead of for, or they can be
    errors caused by the incorrect construction of your program. For
    example, you might tell the compiler that a certain variable is an
    integer, then attempt to give it a non-integer value such as 5.23.
    (See section [Type errors](#Type-errors).)

    The compiler lists all compile-time errors at once, with the line
    number at which each error occurred in the source code, and a
    message that explains what went wrong.

    For example, suppose that, in your file '`eg.c`' you write

    +-----------------------------------+-----------------------------------+
    |                                   | ``` {.smallexample}               |
    |                                   | y = sin (x];                      |
    |                                   | ```                               |
    +-----------------------------------+-----------------------------------+

    instead of

    +-----------------------------------+-----------------------------------+
    |                                   | ``` {.smallexample}               |
    |                                   | y = sin (x);                      |
    |                                   | ```                               |
    +-----------------------------------+-----------------------------------+

    []{#index-Assignment} []{#index-Assignment_002c-example-of}
    []{#index-_003d-_0028equals-sign_0029}
    []{#index-Equals-sign-_0028_003d_0029}

    (By the way, this is an example of *assignment*. With the equals
    sign ('='), you are *assigning* the variable `y` (causing the
    variable `y` to contain) the sine of the variable `x`. This is
    somewhat different from the way equals signs work in mathematics. In
    math, an equals sign indicates that the numbers and variables on
    either side of it are *already* equal; in C, an equals sign *makes*
    things equal. Sometimes it is useful to think of the equals sign as
    an abbreviation for the phrase "becomes the value of".)

    Ignore the syntactic details of the statements above for now, except
    to note that closing the `(x)` with a square bracket instead of a
    parenthesis is an error in C. Upon compilation, you will see
    something like this error message:

    error\--\>

    +-----------------------------------+-----------------------------------+
    |                                   | ``` {.smallexample}               |
    |                                   | eg.c: In function `main':         |
    |                                   | eg.c:8: parse error before `]'    |
    |                                   | ```                               |
    +-----------------------------------+-----------------------------------+

    (If you compile the program within Emacs, you can jump directly to
    the error. We will discuss this feature later. See section
    [Debugging](#Debugging), for more information.)

    []{#index-Compile_002dtime-errors-1}
    []{#index-Errors_002c-compile_002dtime-1} []{#index-Error-cascade}

    A program with compile-time errors will cause the compiler to halt,
    and will not produce an executable. However, the compiler will check
    the syntax up to the last line of your source code before stopping,
    and it is common for a single real error, even something as simple
    as a missing parenthesis, to result in a huge and confusing list of
    nonexistent "errors" from the compiler. This can be shocking and
    disheartening to novices, but you'll get used to it with experience.
    (We will provide an example later in the book. See section
    [Debugging](#Debugging).)

    As a rule, the best way to approach this kind of problem is to look
    for the *first* error, fix that, and then recompile. You will soon
    come to recognize when subsequent error messages are due to
    independent problems and when they are due to a cascade.

    []{#index-Run_002dtime-errors} []{#index-Errors_002c-run_002dtime}

-   *Run-time errors* are errors that occur in a compiled and running
    program, sometimes long after it has been compiled.

    One kind of run-time error happens when you write a running program
    that does not do what you intend. For example, you intend to send a
    letter to all drivers whose licenses will expire in June, but
    instead, you send a letter to all drivers whose licenses will *ever*
    expire.

    []{#index-Crash_002c-computer} []{#index-Computer-crash}
    []{#index-Stability-of-GNU-system}
    []{#index-GNU-system_002c-stability-of}

    Another kind of run-time error can cause your program to *crash*, or
    quit abruptly. For example, you may tell the computer to examine a
    part of its memory that doesn't exist, or to divide some variable by
    zero. Fortunately, the GNU environment is extremely stable, and very
    little will occur other than an error message in your terminal
    window when you crash a program you are writing under GNU.

[]{#index-Executable-file-1} []{#index-File_002c-executable-1}

If the compilation of a program is successful, then a new executable
file is created.

When a programmer wishes to make alterations and corrections to a C
program, these must be made in the source code, using a text editor;
after making the changes, the programmer must recompile the program, or
its salient parts.

  ----------------------------------------------------- ---- --
  [2.4.1 Typographical errors](#Typographical-errors)        
  [2.4.2 Type errors](#Type-errors)                          
  ----------------------------------------------------- ---- --

------------------------------------------------------------------------

[]{#Typographical-errors}

  ------------------------------------------------------- -------------------------------------------------------- --- ------------------------------------------------------------------------------- -------------------------------- ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Errors "Previous section in reading order")\]   \[[\>](#Type-errors "Next section in reading order")\]       \[[\<\<](#Using-a-compiler "Beginning of this chapter or previous chapter")\]   \[[Up](#Errors "Up section")\]   \[[\>\>](#The-form-of-a-C-program "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------- -------------------------------------------------------- --- ------------------------------------------------------------------------------- -------------------------------- ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Typographical-errors-1}

### 2.4.1 Typographical errors {#typographical-errors .subsection}

[]{#index-Typographical-errors} []{#index-Errors_002c-typographical}
[]{#index-Case_002dsensitivity-of-C-language}
[]{#index-C-language_002c-case_002dsensitivity-of}

The compiler can sometimes fail for very simple reasons, such as
typographical errors, including the misuse of upper- and lower-case
characters. The C language is *case-sensitive*. Unlike languages such as
Pascal and some versions of BASIC, C distinguishes between upper- and
lower-case letters, such as 'A' and 'a'. If a letter is typed in the
wrong case in a critical place in the source code, compilation will
fail. This is a potential source of errors that are difficult to find.

------------------------------------------------------------------------

[]{#Type-errors}

  --------------------------------------------------------------------- -------------------------------------------------------------------- --- ------------------------------------------------------------------------------- -------------------------------- ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Typographical-errors "Previous section in reading order")\]   \[[\>](#Questions-for-Chapter-2 "Next section in reading order")\]       \[[\<\<](#Using-a-compiler "Beginning of this chapter or previous chapter")\]   \[[Up](#Errors "Up section")\]   \[[\>\>](#The-form-of-a-C-program "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  --------------------------------------------------------------------- -------------------------------------------------------------------- --- ------------------------------------------------------------------------------- -------------------------------- ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Type-errors-1}

### 2.4.2 Type errors {#type-errors .subsection}

[]{#index-Variable-types} []{#index-Types_002c-variable}
[]{#index-Type-errors-1} []{#index-Errors_002c-type-1}
[]{#index-Defining-your-own-types}
[]{#index-Types_002c-defining-your-own}

C supports a variety of *variable types* (different kinds of variables
for different kinds of data), such as `integer` for integer numbers, and
`float` for numbers with fractional parts. You can even define your own
types, such as `total` for a sum, or `surname` for someone's last name.
You can also convert a variable of one type into other types. (This is
called *type coercion*.) Consequently, the type of a variable is of
great importance to the compiler.

[]{#index-Variable-declaration} []{#index-Declaration_002c-variable}

C requires us to list the names and types of all variables that will be
used in a program, and provide information about where they are going to
be used. This is called *declaring* variables. If you fail to declare a
variable, or use it as if it were a different type from the type it is
declared to be, for example, by assigning a non-integer value to an
integer variable, you will receive a compile-time error.

See section [Variables and declarations](#Variables-and-declarations),
for more information on variable declarations. See section [The form of
a C program](#The-form-of-a-C-program), for some simple examples of
variable declarations.

------------------------------------------------------------------------

[]{#Questions-for-Chapter-2}

  ------------------------------------------------------------ -------------------------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Type-errors "Previous section in reading order")\]   \[[\>](#The-form-of-a-C-program "Next section in reading order")\]       \[[\<\<](#Using-a-compiler "Beginning of this chapter or previous chapter")\]   \[[Up](#Using-a-compiler "Up section")\]   \[[\>\>](#The-form-of-a-C-program "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------------ -------------------------------------------------------------------- --- ------------------------------------------------------------------------------- ------------------------------------------ ----------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Questions-for-Chapter-2-1}

2.5 Questions for Chapter 2 {#questions-for-chapter-2 .section}
---------------------------

1.  What is a compiler?
2.  How does one run a C program?
3.  How does one usually compile a C program?
4.  Are upper and lower case equivalent in C?
5.  What the two main kinds of error that can occur in a program?
6.  If you had some C source code that you wished to call "accounts",
    under what name would you save it?
7.  What would be the name of the executable file for the program in the
    last question?
8.  How would you run this program?

------------------------------------------------------------------------

[]{#The-form-of-a-C-program}

  ------------------------------------------------------------------------ --------------------------------------------------------------- --- ------------------------------------------------------------------------------- ----------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Questions-for-Chapter-2 "Previous section in reading order")\]   \[[\>](#A-word-about-style "Next section in reading order")\]       \[[\<\<](#Using-a-compiler "Beginning of this chapter or previous chapter")\]   \[[Up](#Top "Up section")\]   \[[\>\>](#Functions "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------------------------ --------------------------------------------------------------- --- ------------------------------------------------------------------------------- ----------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#The-form-of-a-C-program-1}

3. The form of a C program {#the-form-of-a-c-program .chapter}
==========================

*What goes into a C program? What does one look like?*

[]{#index-Function_002c-as-building-block}
[]{#index-Building-block_002c-function-as}

The basic building block of a C program is the *function*. Every C
program is a collection of one or more functions. Functions are made of
variable declarations and *statements*, or complex commands, and are
surrounded by curly brackets ('{' and '}').

[]{#index-main-function} []{#index-Function_002c-main}
[]{#index-C-program_002c-simplest} []{#index-Simplest-C-program}

One and only one of the functions in a program must have the name
`main`. This function is always the starting point of a C program, so
the simplest C program is a single function definition:

+-----------------------------------+-----------------------------------+
|                                   | ``` {.smallexample}               |
|                                   | main ()                           |
|                                   | {                                 |
|                                   | }                                 |
|                                   | ```                               |
+-----------------------------------+-----------------------------------+

The parentheses '()' that follow the name of the function must be
included. This is how C distinguishes functions from ordinary variables.

The function `main` does not need to be at the top of a program, so a C
program does not necessarily start at line 1, but wherever the function
called `main` is located. The function `main` cannot be *called*, or
started, by any other function in the program. Only the operating system
can call `main`; this is how a C program is started.

The next most simple C program is perhaps a program that starts, calls a
function that does nothing, and then ends.

+-----------------------------------+-----------------------------------+
|                                   | ``` {.smallexample}               |
|                                   | /******************************** |
|                                   | **********************/           |
|                                   | /*                                |
|                                   |                      */           |
|                                   | /* Program : do nothing           |
|                                   |                      */           |
|                                   | /*                                |
|                                   |                      */           |
|                                   | /******************************** |
|                                   | **********************/           |
|                                   |                                   |
|                                   | main()                          / |
|                                   | * Main program */                 |
|                                   | {                                 |
|                                   |   do_nothing();                   |
|                                   | }                                 |
|                                   |                                   |
|                                   | /******************************** |
|                                   | **********************/           |
|                                   |                                   |
|                                   | do_nothing()                 /* F |
|                                   | unction called */                 |
|                                   | {                                 |
|                                   | }                                 |
|                                   | ```                               |
+-----------------------------------+-----------------------------------+

[]{#index-Comments} []{#index-Comment-characters}

(Any text sandwiched between '/\*' and '\*/' in C code is a comment for
other humans to read. See the section on comments below for more
information.)

There are several things to notice about this program.

First, this program consists of two functions, one of which calls the
other.

Second, the function `do_nothing` is called by simply typing the main
part of its name followed by '()' parentheses and a semicolon.

Third, the semicolon is vital; every simple statement in C ends with
one. This is a signal to the compiler that the end of a statement has
been reached and that anything that follows is part of another
statement. This signal helps the compiler diagnose errors.

Fourth, the curly bracket characters '{' and '}' outline a *block* of
statements. When this program meets the closing '}' of the second
function's block, it transfers control back to 'main', where it meets
another '}', and the program ends.

  --------------------------------------------------------- ---- --
  [3.1 A word about style](#A-word-about-style)                  
  [3.2 Comments](#Comments)                                      
  [3.3 Example 1](#Example-comment)                              
  [3.4 Questions for Chapter 3](#Questions-for-Chapter-3)        
  --------------------------------------------------------- ---- --

------------------------------------------------------------------------

[]{#A-word-about-style}

  ------------------------------------------------------------------------ ----------------------------------------------------- --- -------------------------------------------------------------------------------------- ------------------------------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#The-form-of-a-C-program "Previous section in reading order")\]   \[[\>](#Comments "Next section in reading order")\]       \[[\<\<](#The-form-of-a-C-program "Beginning of this chapter or previous chapter")\]   \[[Up](#The-form-of-a-C-program "Up section")\]   \[[\>\>](#Functions "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------------------------ ----------------------------------------------------- --- -------------------------------------------------------------------------------------- ------------------------------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#A-word-about-style-1}

3.1 A word about style {#a-word-about-style .section}
----------------------

[]{#index-Style} []{#index-C_002c-ANSI-Standard}
[]{#index-ANSI-Standard-C}

The code examples above are simple, but they illustrate the *control
flow* of a C program, or the order in which its statements are executed.
You should note that these programs are written in "old-fashioned" C, as
the language existed before ANSI Standard C --- the version in which
most C programs are now written. The above programs are also missing
several key elements that most C programs have, such as header files and
function prototypes. Finally, they do not show good style; if you wish
to submit programs you write to the Free Software Foundation, you should
consult its advice on how best to use the C language.

You may wonder why we chose old-style C for these first few examples,
even though people proverbially learn best what they learn first. We did
so because pre-ANSI C is considerably simpler than the present form, and
also because as you develop as a C programmer, you will probably run
across some old C code that you will want to read.

You may also wonder why a savvy programmer would want to follow the ANSI
Standard, which was drafted by committee, or even the GNU guidelines.
Isn't programming free software all about freedom? Yes, but following
the ANSI Standard ensures that your code can be easily compiled on many
other computer platforms, and the GNU guidelines ensure that your code
can be read by other programmers. (We will introduce good C style in our
examples soon. Meanwhile, you can examine the GNU guidelines later in
the book. See section [Style](#Style).)

  --------------------------------------------------------- ---- --
  [3.2 Comments](#Comments)                                      
  [3.3 Example 1](#Example-comment)                              
  [3.4 Questions for Chapter 3](#Questions-for-Chapter-3)        
  --------------------------------------------------------- ---- --

------------------------------------------------------------------------

[]{#Comments}

  ------------------------------------------------------------------- ------------------------------------------------------------ --- -------------------------------------------------------------------------------------- ------------------------------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#A-word-about-style "Previous section in reading order")\]   \[[\>](#Example-comment "Next section in reading order")\]       \[[\<\<](#The-form-of-a-C-program "Beginning of this chapter or previous chapter")\]   \[[Up](#The-form-of-a-C-program "Up section")\]   \[[\>\>](#Functions "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------------------- ------------------------------------------------------------ --- -------------------------------------------------------------------------------------- ------------------------------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Comments-1}

3.2 Comments {#comments .section}
------------

\

*Annotating programs.*\

[]{#index-Comments-1} []{#index-Annotating-programs}
[]{#index-Programs_002c-annotating}

Comments are a way of inserting remarks and reminders into code without
affecting its behavior. Since comments are only read by other humans,
you can put anything you wish to in a comment, but it is better to be
informative than humorous.

The compiler ignores comments, treating them as though they were
*whitespace* (blank characters, such as spaces, tabs, or carriage
returns), and they are consequently ignored. During compilation,
comments are simply stripped out of the code, so programs can contain
any number of comments without losing speed.

Because a comment is treated as whitespace, it can be placed anywhere
whitespace is valid, even in the middle of a statement. (Such a practice
can make your code difficult to read, however.)

[]{#index-Comment-characters-1}

Any text sandwiched between '/\*' and '\*/' in C code is a comment. Here
is an example of a C comment:

+-----------------------------------+-----------------------------------+
|                                   | ``` {.smallexample}               |
|                                   | /* ...... comment ......*/        |
|                                   | ```                               |
+-----------------------------------+-----------------------------------+

Comments do not necessarily terminate at the end of a line, only with
the characters '\*/'. If you forget to close a comment with the
characters '\*/', the compiler will display an 'unterminated comment'
error when you try to compile your code.

[]{#index-Comments_002c-example}

------------------------------------------------------------------------

[]{#Example-comment}

  --------------------------------------------------------- -------------------------------------------------------------------- --- -------------------------------------------------------------------------------------- ------------------------------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Comments "Previous section in reading order")\]   \[[\>](#Questions-for-Chapter-3 "Next section in reading order")\]       \[[\<\<](#The-form-of-a-C-program "Beginning of this chapter or previous chapter")\]   \[[Up](#The-form-of-a-C-program "Up section")\]   \[[\>\>](#Functions "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  --------------------------------------------------------- -------------------------------------------------------------------- --- -------------------------------------------------------------------------------------- ------------------------------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Example-1}

3.3 Example 1 {#example-1 .section}
-------------

+-----------------------------------+-----------------------------------+
|                                   | ``` {.smallexample}               |
|                                   | #include <stdio.h>      /* header |
|                                   |  file */                          |
|                                   |                                   |
|                                   | main ()   /* Trivial program */   |
|                                   |                                   |
|                                   | {                                 |
|                                   |                                   |
|                                   | /* This little line has no effect |
|                                   |  */                               |
|                                   | /* This little line has none */   |
|                                   | /* This little line went all the  |
|                                   | way down                          |
|                                   |    to the next line,              |
|                                   |    And so on...                   |
|                                   |    And so on...                   |
|                                   |    And so on... */                |
|                                   |                                   |
|                                   |   do_little();                    |
|                                   |                                   |
|                                   |   printf ("Function 'main' comple |
|                                   | ting.\n");                        |
|                                   | }                                 |
|                                   |                                   |
|                                   | /******************************** |
|                                   | **************/                   |
|                                   |                                   |
|                                   | /* A bar like the one above can b |
|                                   | e used to */                      |
|                                   | /* separate functions visibly in  |
|                                   | a program */                      |
|                                   |                                   |
|                                   |                                   |
|                                   | do_little ()                      |
|                                   | {                                 |
|                                   |                                   |
|                                   | /* This function does little. */  |
|                                   |                                   |
|                                   |   printf ("Function 'do_little' c |
|                                   | ompleting.\n");                   |
|                                   | }                                 |
|                                   | ```                               |
+-----------------------------------+-----------------------------------+

[]{#index-C_002c-ANSI-Standard-1} []{#index-ANSI-Standard-C-1}
[]{#index-GNU-style-guidelines} []{#index-Style-1}

Again, this example is old-fashioned C, and in mediocre style. To make
it more compliant with the ANSI Standard and GNU guidelines, we would
declare the variable type each function returns (`int` for `main`, which
also requires an `exit` or `return` statement), and we would create
function prototypes at the beginning of the file. (See section
[Functions](#Functions).)

  --------------------------------------------------------- ---- --
  [3.4 Questions for Chapter 3](#Questions-for-Chapter-3)        
  --------------------------------------------------------- ---- --

------------------------------------------------------------------------

[]{#Questions-for-Chapter-3}

  ---------------------------------------------------------------- ------------------------------------------------------ --- -------------------------------------------------------------------------------------- ------------------------------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Example-comment "Previous section in reading order")\]   \[[\>](#Functions "Next section in reading order")\]       \[[\<\<](#The-form-of-a-C-program "Beginning of this chapter or previous chapter")\]   \[[Up](#The-form-of-a-C-program "Up section")\]   \[[\>\>](#Functions "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ---------------------------------------------------------------- ------------------------------------------------------ --- -------------------------------------------------------------------------------------- ------------------------------------------------- --------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Questions-for-Chapter-3-1}

3.4 Questions for Chapter 3 {#questions-for-chapter-3 .section}
---------------------------

1.  What is a block?
2.  Does a C program start at the beginning? Where is the beginning?
3.  What happens when a program comes to a '}' character? What does this
    character signify?
4.  What vital piece of punctuation goes at the end of every simple C
    statement?
5.  What happens if a comment is not ended? That is if the programmer
    types '/\*' .. to start but forgets the ..'\*/' to close?

------------------------------------------------------------------------

[]{#Functions}

  ------------------------------------------------------------------------ ----------------------------------------------------------- --- -------------------------------------------------------------------------------------- ----------------------------- -------------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------
  \[[\<](#Questions-for-Chapter-3 "Previous section in reading order")\]   \[[\>](#Function-names "Next section in reading order")\]       \[[\<\<](#The-form-of-a-C-program "Beginning of this chapter or previous chapter")\]   \[[Up](#Top "Up section")\]   \[[\>\>](#Variables-and-declarations "Next chapter")\]                   \[[Top](#Top "Cover (top) of document")\]   \[[Contents](#SEC_Contents "Table of contents")\]   \[[Index](#Code-index "Index")\]   \[[?](#SEC_About "About (help)")\]
  ------------------------------------------------------------------------ ----------------------------------------------------------- --- -------------------------------------------------------------------------------------- ----------------------------- -------------------------------------------------------- --- --- --- --- ------------------------------------------- --------------------------------------------------- ---------------------------------- ------------------------------------

[]{#Functions-1}

