## Data Types and Sizes

The type of a *variable* determines what kinds of values it may take on. An *operator* computes new values out of old ones. An *expression* consists of variables, constants, and operators combined to perform some useful computation. In this chapter, we'll learn about C's basic types, how to write constants and declare variables of these types, and what the basic operators are.

As Kernighan and Ritchie say, **"The type of an object determines the set of values it can have and what operations can be performed on it."** This is a fairly formal, mathematical definition of what a type is, but it is traditional (and meaningful). There are several implications to remember:

1. The *"set of values"* is finite. C's int type can not represent all of the integers; its float type can not represent all floating-point numbers.
1. When you're using an object (that is, a variable) of some type, you may have to remember what values it can take on and what operations you can perform on it. For example, there are several operators which play with the binary (bit-level) representation of integers, but these operators are not meaningful for and may not be applied to floating-point operands.
1. When declaring a new variable and picking a type for it, you have to keep in mind the values and operations you'll be needing.

### Types
There are only a few basic data types in C. The first ones we'll be encountering and using are:

+ `char` a character
+ `int` an integer, in the range -32,767 to 32,767
+ `long` int a larger integer (up to +-2,147,483,647)
+ `float` a floating-point number
+ `double` a floating-point number, with more precision and perhaps greater range than float

If you can look at this list of basic types and say to yourself, "Oh, how simple, there are only a few types, I won't have to worry much about choosing among them, " you'll have an easy time with declarations. (Some masochists wish that the type system were more complicated so that they could specify more things about each variable, but those of us who would rather not have to specify these extra things each time are glad that we don't have to.)

The ranges listed above for types int and long int are the guaranteed minimum ranges. On some systems, either of these types (or, indeed, any C type) may be able to hold larger values, but a program that depends on extended ranges will not be as portable. Some programmers become obsessed with knowing exactly what the sizes of data objects will be in various situations, and go on to write programs which depend on these exact sizes. Determining or controlling the size of an object is occasionally important, but most of the time we can sidestep size issues and let the compiler do most of the worrying.

You might wonder how the computer stores characters. The answer involves a character set, which is simply a mapping between some set of characters and some set of small numeric codes. Most machines today use the ASCII character set, in which the letter A is represented by the code 65, the ampersand & is represented by the code 38, the digit 1 is represented by the code 49, the space character is represented by the code 32, etc. (Most of the time, of course, you have no need to know or even worry about these particular code values; they're automatically translated into the right shapes on the screen or printer when characters are printed out, and they're automatically generated when you type characters on the keyboard. Eventually, though, we'll appreciate, and even take some control over, exactly when these translations--from characters to their numeric codes--are performed.) Character codes are usually small--the largest code value in ASCII is 126, which is the ~ (tilde or circumflex) character. Characters usually fit in a byte, which is usually 8 bits. In C, type char is defined as occupying one byte, so it is usually 8 bits.

Most of the simple variables in most programs are of types int, long int, or double. Typically, we'll use int and double for most purposes, and long int any time we need to hold integer values greater than 32,767. As we'll see, even when we're manipulating individual characters, we'll usually use an int variable, for reasons to be discussed later. Therefore, we'll rarely use individual variables of type char; although we'll use plenty of arrays of char.
