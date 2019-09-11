[Index](../README.md) | [Previous](Connect_to_remote_server.md)

# Compiling and running 1st Computer Program

In this session, you are going to compile and execute (run) a simple C
computer program. We will provide you code, so you need not to type the
code. All necessary instructions are provided here, to obtain the code,
compile it and then run the code.

When you login a remote server, after some message, you will be prompted to
enter your command through key-board.

"Solid Rectangle" is the position, where your typed character will appear.

Before that "Solid Rectangle", called cursor, server provide you handy
information, which contain your UserID and ServerName.

It may be:

	19123015@computer-centre:~$ 

or

	hsrai@Code:~$

where before `@` is your UserID and after `@` is the name of Server where
you logged-in.

Before we do some real work, we will activate another nice tool. First time,
you login, issue following command:

	tmux

Now you work. Say after doing a lot work, you wish to logout and terminate
connection to the remote server. Then you need to detach your session, by:

	^b d

That mean, press `Ctrl`, hold it and press `b`, release both, and then press
`d`.

Then you can type `exit` or `Ctrl`+`d` to logout and disconnect from remote
server.

Next day, you wish to continue your work. Connect and login, using:

	mosh UserID@code.gdy.club

Now you need to type:

	tmux attach

and you will see you will get where you left your session. That is the
advantage of [tmux](https://github.com/tmux/tmux/wiki).

Unless server is rebooted (restarted, which happen rarely), you can get your
session back by `tmux attach`.

Even if you get interrupted, because of bad Internet, you can get your
session back by `tmux attach` (after connecting and login to same remote
server from any other computer, laptop, mobile or from the same device). 

On computers, information is stored in files and files are stored in folder
(also called directory). A folder may contain files and / or folders.

You may order (or request, if you are a civilised) to present you a list
(shortened as `ls`) of files and directories in the current folder.  To
do so, we issue following command (you need to type only `ls` and then hit
`Enter`).

	hsrai@CC:~$ ls
	public_html

You are in a relative very thinly populated area.  There is just one
directory (folder) with name public_html.  You may create folder in the
current folder or in folder `public_html`, to manage your files, which you
will create yourself or download from the Internet.

To move from current directory to `public_html`, issue following command
(order or request) to the computer:

	hsrai@CC:~$ cd public_html

Because you want to change directory, so you need to issue short-cut of
"Change Directory" as `cd` (we know that you love short-cuts).  After `cd`
you need give name of the directory, where you wish to move.

In `public_html`, issue following commands:

	hsrai@CC:~/public_html$ mkdir Code
	hsrai@CC:~/public_html$ ls
	hsrai@CC:~/public_html$ cd Code
	hsrai@CC:~/public_html/Code$ git clone https://github.com/gne-ldh/PPS.git

If you forked above repository in your github account (19123015, say) then above
link ([URL](https://en.wikipedia.org/wiki/URL)) may be `https://github.com/19123015/PPS.git`

On issuing `git clone` command as above, you will see some text (as shown
below, actual text might be different. Don't try to understand it, just read
it and move ahead) is appearing on screen:

	Cloning into 'PPS'...
	remote: Enumerating objects: 71, done.
	remote: Counting objects: 100% (71/71), done.
	remote: Compressing objects: 100% (66/66), done.
	remote:nTotale71s(delta 31),7reused 14 (delta 3), pack-reused 0
	Unpacking objects: 100% (71/71), done.

See content of directory with the use of list command, i.e. `ls`, and then
move to new created directory, named `PPS`, with the help of `cd` command.

	hsrai@CC:~/public_html/Code$ ls
	PPS
	hsrai@CC:~/public_html/Code$ cd PPS/
	hsrai@CC:~/public_html/Code/PPS$ ls
	hsrai@CC:~/public_html/Code/PPS$ pwd
	hsrai@CC:~/public_html/Code/PPS

The text you see, something like `hsrai@CC:~public_html/Code/PPS$` is called
Prompt String (`PS`), and there are more than one such string, so we have
`PS1`, `PS2` and `PS3`. Let us change this `PS1` and have a short and clean
`PS1`. To do this use following command:

	hsrai@CC:~/public_html/Code/PPS$ PS1="|> "

It will result in PS1 as `|> `, and now we issue `ls` command, it will look
like:

	|> ls
	About  Content	LICENSE  README.md

There are two directories, and two files. The complete organisation of files
and folders (Directories) may be visualised, by using `tree` command:


	|> tree
	.
	├── About
	│   ├── About.md
	│   ├── Books.md
	│   ├── LabSyllabus.md
	│   ├── Outcome.md
	│   └── Syllabus.md
	├── Content
	│   ├── Extra
	│   │   └── L01
	│   │       ├── Application
	│   │       │   └── L01.c
	│   │       ├── main.c
	│   │       ├── Makefile
	│   │       └── README.md
	│   ├── Notes
	│   │   ├── Files
	│   │   │   ├── Compiling_and_running_1st_program.md
	│   │   │   ├── Connect_to_remote_server.md
	│   │   │   ├── hsr.txt
	│   │   │   └── Tree.txt
	│   │   ├── README.md
	│   └── Programms
	│  	└── Week01
	│  	    ├── build
	│  	    │   └── README.md
	│  	    ├── CMakeLists.txt
	│  	    ├── include
	│  	    │   └── week01.h
	│  	    ├── README.md
	│  	    └── src
	│  		├── application
	│  		│   ├── Bank
	│  		│   │   ├── 101LetUsC.m
	│  		│   │   ├── 102Address.m
	│  		│   │   ├── 103AddressOnePuts.m
	│  		│   │   ├── 104AddressOnePutsContentMultiLine.m
	│  		│   │   ├── 105AddressOnePutsContentMultiLineBetter.m
	│  		│   │   ├── 106Punishment.m
	│  		│   │   ├── 107MultiplicationTable5.m
	│  		│   │   ├── 108MultiplicationTableMultiLine.m
	│  		│   │   └── message.m
	│  		│   └── message.m
	│  		└── main.c
	├── LICENSE
	├── README.md
	└── typeScript2.txt
	
	14 directories, 34 files

Let us move to source code of C programming files.

	|> cd Content/Programs/Week01/src/application/
	|> cat message.m
	puts("Let us C");|>

Here `message.m` is file, containing a part of C code. The code in this file
is responsible to display message `Let us C` on screen. Let us try the
procedure to convert this in to machine language (with the process called
compilation). We will keep files generated by compilation process in a
separate directory. (not to keep with source code files) So move to `build`
directory, which will contain compilation files.

	|> cd ../../build/
	|> cmake ..

Please do pay attention to `.` i.e. dot, `/` i.e. slash and **spaces**.

`cmake` will do a lot of hard work for you, and display what it is doing.

`..` is called Parent Folder, `cd ..` mean go to parent folder. Just read
the text being generated casually and move ahead. It may take some seconds,
which may be of the order of seconds.

	-- The C compiler identification is GNU 8.3.0
	-- The CXX compiler identification is GNU 8.3.0
	-- Check for working C compiler: /usr/bin/cc
	-- Check for working C compiler: /usr/bin/cc -- works
	-- Detecting C compiler ABI info
	-- Detecting C compiler ABI info - done
	-- Detecting C compile features
	-- Detecting C compile features - done
	-- Check for working CXX compiler: /usr/bin/c++
	-- Check for working CXX compiler: /usr/bin/c++ -- works
	-- Detecting CXX compiler ABI info
	-- Detecting CXX compiler ABI info - done
	-- Detecting CXX compile features
	-- Detecting CXX compile features - done
	-- Configuring done
	-- Generating done
	-- Build files have been written to: build
	
The next step is to issue `make` command:
	
	|> make
	Scanning dependencies of target main
	[ 50%] Building C object CMakeFiles/main.dir/src/main.o
	src/main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
	 main()
	 ^~~~
	[100%] Linking C executable main
	[100%] Built target main


It showed warning, but still, the compilation was successful. To execute the
code, do as follow:

	|> ./main

Pay attention to `dot` and `slash`. It will produce output as:

	Welcome to budding Engineers! to GNE College, Ludhiana

With this you are able to compile and run (execute) your 1st computer
program.

You may wish to play with this, by changing the message. Use editor of your
choice. It may be vim, nano (pico), joe, Emacs or any other as per your
liking. We use `nano` in the following example. Change message, exit editor
and save file, while exiting. 

	nano ../src/application/message.m
	
After this, you need to compile it and run again to see the change in
action. Do as follow:

	|> make
	|> ./main

The first command is to compile and second is to execute the code.

Good going till now. Take break, re-read above, if required. Change message
again, compile and execute the code.

Have fun!

[Index](../README.md) | [Next](Compiling_and_running_program_by_amending_messages.md)
