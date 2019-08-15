# Compiling and running 1st Computer Program

In this session, you are going to compile and execute (run) a simple C
computer program. We will provide you code, so you need not to type the
code. All necessary instructions are provided here, to obtain the code,
compile it and then run the code.

When you login a remote server, after some message, you will be prompted to
enter your command through key-board.

"Solid Rectangle" is the position, where your typed character will appear.

Before that "Solid Rectangle", server provide you hany information, which
contain your UserID and ServerName.

It may be:

	1912015@computer-centre:~$ 

or

	hsrai@Code:~$

where before "@" is your UserID and after "@" is the name of Server where
you logged-in.



hsrai@CC:~$ ls
public_html  typescript
hsrai@CC:~$ cd public_html/
hsrai@CC:~/public_html$ mkdir Code
hsrai@CC:~/public_html$ cd Code/
hsrai@CC:~/public_html/Code$ git clone https://github.com/gne-ldh/PPS.git
ls https://github.com/ranjodh-kaur/PPS.git
ls: cannot access 'https://github.com/ranjodh-kaur/PPS.git': No such file or directory
hsrai@CC:~/public_html/Code$ git clone https://github.com/gne-ldh/PPS.git
Cloning into 'PPS'...
remote: Enumerating objects: 71, done.
remote: Counting objects: 100% (71/71), done.
remote: Compressing objects: 100% (66/66), done.
remote:nTotale71s(delta 31),7reused 14 (delta 3), pack-reused 0
Unpacking objects: 100% (71/71), done.
hsrai@CC:~/public_html/Code$ ls
PPS
hsrai@CC:~/public_html/Code$ cd PPS/
hsrai@CC:~/public_html/Code/PPS$ ls
About.md  L01		  LICENSE     README.md
Books.md  LabSyllabus.md  Outcome.md  Syllabus.md
hsrai@CC:~/public_html/Code/PPS$ wget https://github.com/gne-ldh/Week01/archive/master.zip
bash: wget: command not found
hsrai@CC:~/public_html/Code/PPS$ wget https://github.com/gne-ldh/Week01/archive/master.zip
--2019-08-15 07:46:10--  https://github.com/gne-ldh/Week01/archive/master.zip
Resolving github.com (github.com)... 13.234.176.102, 64:ff9b::dea:b066
Connecting to github.com (github.com)|13.234.176.102|:443... connected.
HTTP request sent, awaiting response... 302 Found
Location: https://codeload.github.com/gne-ldh/Week01/zip/master [following]
--2019-08-15 07:46:10--  https://codeload.github.com/gne-ldh/Week01/zip/master
Resolving codeload.github.com (codeload.github.com)... 13.233.43.20, 64:ff9b::de9:2b14
Connecting to codeload.github.com (codeload.github.com)|13.233.43.20|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: unspecified [application/zip]
Saving to: ‘master.zip’

master.zip		[<<=>		     ]	 2.07K	--.-KB/s    in 0.001s

2019-08-15 07:46:11 (4.04 MB/s) - ‘master.zip’ saved [2119]

hsrai@CC:~/public_html/Code/PPS$ ls
About.md  L01		  LICENSE     Outcome.md  Syllabus.md
Books.md  LabSyllabus.md  master.zip  README.md
hsrai@CC:~/public_html/Code/PPS$ mkdir Week01
hsrai@CC:~/public_html/Code/PPS$ cd Week01/
hsrai@CC:~/public_html/Code/PPS/Week01$ unzip ../master.zip
bash: unzip: command not found
hsrai@CC:~/public_html/Code/PPS/Week01$ unzip ../master.zip
Archive:  ../master.zip
088e9364f6e30f0ed5de59d43b8e9f3ae2f5a7e1
   creating: Week01-master/
  inflating: Week01-master/CMakeLists.txt
  inflating: Week01-master/README.md
   creating: Week01-master/build/
 extracting: Week01-master/build/README.md
   creating: Week01-master/include/
 extracting: Week01-master/include/week01.h
   creating: Week01-master/src/
   creating: Week01-master/src/application/
 extracting: Week01-master/src/application/message.m
  inflating: Week01-master/src/main.c
hsrai@CC:~/public_html/Code/PPS/Week01$ cd ..
hsrai@CC:~/public_html/Code/PPS$ ls
About.md  L01		  LICENSE     Outcome.md  Syllabus.md
Books.md  LabSyllabus.md  master.zip  README.md   Week01
.avleen_takkar@computer-centre:~/public_html/Code/PPS$ mv Week01/Week01-master/.
hsrai@CC:~/public_html/Code/PPS$ hsrai@CC:~/public_html/Code/PPS$ ls
About.md  L01		  LICENSE     Outcome.md  Syllabus.md
Books.md  LabSyllabus.md  master.zip  README.md   Week01
hsrai@CC:~/public_html/Code/PPS$ mv ../Week01-master/.
hsrai@CC:~/public_html/Code/PPS$ hsrai@CC:~/public_html/Code/PPS$ ls
About.md  L01		  LICENSE     Outcome.md  Syllabus.md  Week01-master
Books.md  LabSyllabus.md  master.zip  README.md   Week01
hsrai@CC:~/public_html/Code/PPS$ rm -rf Week01
hsrai@CC:~/public_html/Code/PPS$ hsrai@CC:~/public_html/Code/PPS$ ls
About.md  L01		  LICENSE     Outcome.md  Syllabus.md
Books.md  LabSyllabus.md  master.zip  README.md   Week01-master
hsrai@CC:~/public_html/Code/PPS$ cd Week01-master/
hsrai@CC:~/public_html/Code/PPS/Week01-master$ ls
build  CMakeLists.txt  include	README.md  src
hsrai@CC:~/public_html/Code/PPS/Week01-master$ cd ..
hsrai@CC:~/public_html/Code/PPS$ mv Week01-master/Week01-master/

hsrai@CC:~/public_html/Code/PPS$ cd Week01/
hsrai@CC:~/public_html/Code/PPS/Week01$ hsrai@CC:~/public_html/Code/PPS/Week01$ ls
build  CMakeLists.txt  include	README.md  src
hsrai@CC:~/public_html/Code/PPS/Week01$ ls build/
README.md
hsrai@CC:~/public_html/Code/PPS/Week01$ tree
bash: tree: command not found
hsrai@CC:~/public_html/Code/PPS/Week01$ tree
.
├── build
│   └── README.md
├── CMakeLists.txt
├── include
│   └── week01.h
├── README.md
└── src
    ├── application
    │   └── message.m
    └── main.c

4 directories, 6 files
revleen_takkar@computer-centre:~/public_html/Code/PPS/Week01$ cat README.md | mo
# Week01
C as Problem Sovling Tool: Week01

### Compiling code

  After Cloning this repostory, In order to Compile code follow following steps
in project directory linux:

1. Compile using

	cd build
	cmake ..
	make

1. Execute using

	./main

hsrai@CC:~/public_html/Code/PPS/Week01$ cd build/
hsrai@CC:~/public_html/Code/PPS/Week01/build$ cmake ..
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
^C
hsrai@CC:~/public_html/Code/PPS/Week01/build$ ls
CMakeFiles  README.md
hsrai@CC:~/public_html/Code/PPS/Week01/build$ ecmake...

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
-- Build files have been written to: /home/savleen_takkar/public_html/Code/PPS/Week01/build

real	0m41.539s
user	0m9.685s
sys	0m3.267s
hsrai@CC:~/public_html/Code/PPS/Week01/build$ cat ../README.md
# Week01
C as Problem Sovling Tool: Week01

### Compiling code

  After Cloning this repostory, In order to Compile code follow following steps in project directory linux:

1. Compile using

	cd build
	cmake ..
	make

1. Execute using

	./main

hsrai@CC:~/public_html/Code/PPS/Week01/build$ make
Scanning dependencies of target main
[ 50%] Building C object CMakeFiles/main.dir/src/main.o
/home/savleen_takkar/public_html/Code/PPS/Week01/src/main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^~~~
[100%] Linking C executable main
[100%] Built target main
hsrai@CC:~/public_html/Code/PPS/Week01/build$ ./main
Let us C
hsrai@CC:~/public_html/Code/PPS/Week01/build$ hsrai@CC:~/public_html/Code/PPS/Week01/build$ cd ..
hsrai@CC:~/public_html/Code/PPS/Week01$ ls
build  CMakeLists.txt  include	README.md  src
hsrai@CC:~/public_html/Code/PPS/Week01$ cd -
/home/savleen_takkar/public_html/Code/PPS/Week01/build
hsrai@CC:~/public_html/Code/PPS/Week01/build$ cd ../src
hsrai@CC:~/public_html/Code/PPS/Week01/src$ ls
application  main.c
hsrai@CC:~/public_html/Code/PPS/Week01/src$ cd application/
hsrai@CC:~/public_html/Code/PPS/Week01/src/application$ ls
message.m
tamessage.mkar@computer-centre:~/public_html/Code/PPS/Week01/src/application$ ca
dirsBankt us C");hsrai@CC:~/public_html/Code/PPS/Week01/src/application$ mk
