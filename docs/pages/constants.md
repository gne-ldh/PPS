## Constants

A constant is just an immediate, absolute value found in an expression. The simplest constants are decimal integers, e.g. 0, 1, 2, 123 . Occasionally it is useful to specify constants in base 8 or base 16 (octal or hexadecimal); this is done by prefixing an extra 0 (zero) for octal, or 0x for hexadecimal: the constants 100, 0144, and 0x64 all represent the same number. (If you're not using these non-decimal constants, just remember not to use any leading zeroes. If you accidentally write 0123 intending to get one hundred and twenty three, you'll get 83 instead, which is 123 base 8.)

We write `constants` in decimal, octal, or hexadecimal for our convenience, not the compiler's. The compiler doesn't care; it always converts everything into binary internally, anyway. (There is, however, no good way to specify constants in source code in binary.)

A constant can be forced to be of type long int by suffixing it with the letter L (in upper or lower case, although upper case is strongly recommended, because a lower case l looks too much like the digit 1).

A constant that contains a **decimal** point or the letter e (or both) is a floating-point constant: 3.14, 10., .01, 123e4, 123.456e7 . The e indicates multiplication by a power of 10; 123.456e7 is 123.456 times 10 to the 7th, or 1,234,560,000. (Floating-point constants are of type double by default.)

We also have constants for specifying characters and strings. (Make sure you understand the difference between a character and a string: a character is exactly one character; a string is a set of zero or more characters; a string containing one character is distinct from a lone character.) A character constant is simply a single character between single quotes: 'A', '.', '%'. The numeric value of a character constant is, naturally enough, that character's value in the machine's character set. (In ASCII, for example, 'A' has the value 65.)

A string is represented in C as a sequence or array of characters. (We'll have more to say about arrays in general, and strings in particular, later.) A string constant is a sequence of zero or more characters enclosed in double quotes: "apple", "hello, world", "this is a test".

Within character and string constants, the backslash character `\` is special, and is used to represent characters not easily typed on the keyboard or for various reasons not easily typed in constants. The most common of these ``character escapes'' are:

+	`\n`	a "newline" character
+	`\b`	a backspace
+	`\r`	a carriage return (without a line feed)
+	`\'`	a single quote (e.g. in a character constant)
+	`\"`	a double quote (e.g. in a string constant)
+	`\\`	a single backslash

For example, *"he said \"hi\""* is a string constant which contains two double quotes, and  `\`  is a character constant consisting of a (single) single quote. Notice once again that the character constant `'A'` is very different from the string constant `"A"`.
