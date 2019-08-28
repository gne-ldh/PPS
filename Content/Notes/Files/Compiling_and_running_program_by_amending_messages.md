[Index](../README.md) | [Previous](Compiling_and_running_1st_program.md)

# Compiling and running program by amending messages

Now we will change the message written in file `message.m`.  Either you may
edit this file, with your favorite editor (like `nano`, `pico`, `joe`,
`emacs`, `vim`, `slap` or [some thing
difference](https://www.tecmint.com/linux-command-line-editors/)).

Also read [this](https://itsfoss.com/command-line-text-editors-linux/) for
additional information.

or we can copy file form the **message Bank**. We will follow the later
approach. Below, we are copy file `102Address.m` from `Bank` folder: 

	|> cp ../src/application/Bank/102Address.m ../src/application/message.m
	|> make
	|> ./main
	Principal
	Panth Rattan Shiri Gurcharan Singh Tohra Complex
	Guru Nanak Dev Engineering College
	Gill Park
	Ludhiana - 141006
	India

Study `message.m`, which is, at present, a copy of `102Address.m` file and
the output of the program.  You will find that we have used `puts()`
function for each line.  It will be nice, if we can use only one `puts()`. 
Try following:
	
	|> cp ../src/application/Bank/103AddressOnePuts.m ../src/application/message.m
	|> make
	|> ./main

Now, in file `message.m`, there is only one `puts()` function. But you will
find strange character in the message, which is `\n`. `\n` is equivalent of
`Enter` or `Return` key of the keyboard. It will insert new line.

In the above `message.m` we used one `puts()` and all the message typed
without the use of `Enter` key. This makes to read it difficult. It goes
outside the screen with. This problem can be resolved by typing `\` before
hitting `Enter` at the desired location. Normally, we don't wish to type
text beyond 72th column. So type `\` and press `Enter` somewhere near column
number from 765 to 72. Study following case:

	|> cp ../src/application/Bank/104AddressOnePutsContentMultiLine.m ../src/application/message.m
	|> make
	|> ./main

Now, study file ../src/application/Bank/105AddressOnePutsContentMultiLineBetter.m

This file is named as "Better". Why? Do you agree or not? Discuss in
"General Forum" at [Guru@GNE](http://guru.gndec.ac.in)

Sometimes we need to do things a number of times. Like to improve our
writing, we may be asked to write a particular line 10 times. If we do
something wrong, teacher may direct us to write something, 10 times, as a
part of punishment. In that case, what you will do? Will you write puts() 10
times, or copy paste, line to be repeated, 10 time. Ok, you may afford to
copy for 10 times, what you will do, if you are asked to repeat it for 100
times.

For such tasks, computer languages offer, looping facility. One of such
facility, in C, is call `for`. Study next file:

	|> cp ../src/application/Bank/106Punishment.m ../src/application/message.m
	|> make
	|> ./main

What you found new in this file?

	for ( int i = 1; i <= 10; i++ )

The above line make next line:

	puts(" I will switch off lights, fans and AC when leaving room");

to execute 10 times. Great!

It instruct computer to execute `puts()` till value of `i` is less than `10`
or is equal to `10`.  `i` will have starting value of `1`, i.e.  initial
value if `i` is 1, and will be incremented by `1` each time `puts()` is
executed.  `int` in above line, does not stand for **initial**, but ot
stands for **Integer**.  As we need to count lines we wrote, and count
number can't be real / fractional number, and it has to be **Integer**, so
we made `i` to be **Integer** with the use of keyword `int`.

Lat us say, teacher instruct you to make use of multiple `puts()`, like:

	puts("I will switch off lights");
	puts("I will switch off fans");
	puts("and i will also switch off AC");
	puts(" when leaving room");

With further instruction, that each set of these four lines, MUST have two
blank lines between them.

Can you achieve it?

Try, and discuss in Technical Forum of guru.gndec.ac.in

[Index](../README.md) | [Next](YetToCome.md)

