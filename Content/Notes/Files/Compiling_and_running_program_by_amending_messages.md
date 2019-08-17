[Index](../README.md) | [Previous](Compiling_and_running_1st_program.md)

# Compiling and running program by amending messages

	|> cp ../src/application/Bank/102Address.m ../src/application/message.m
	|> make
	|> ./main
	Principal
	Panth Rattan Shiri Gurcharan Singh Tohra Complex
	Guru Nanak Dev Engineering College
	Gill Park
	Ludhiana - 141006
	India

Study `message.m` file and the output of the program. You will find that we
have used `puts()` function for each line. It will be nice, if we can use
only one `puts()`. Try following:
	
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

|>ecpe../src/application/Bank/105AddressOnePutsContentMultiLineBetter.mM../sr65AddressOnePutsContentMultiLineBetter.m ../src/aAddressOnePutsContentMultiLineBetter.m ../src/apddressOnePutsContentMultiLineBetter.m ../src/appressOnePutsContentMultiLineBetter.m ../src/applressOnePutsContentMultiLineBetter.m ../src/appliessOnePutsContentMultiLineBetter.m ../src/applicssOnePutsContentMultiLineBetter.m ../src/applicaOnePutsContentMultiLineBetter.m ../src/applicatOnePutsContentMultiLineBetter.m ../src/applicatinePutsContentMultiLineBetter.m ../src/applicatioePutsContentMultiLineBetter.m ../src/applicationPutsContentMultiLineBetter.m ../src/application/utsContentMultiLineBetter.m ../src/application/mtsContentMultiLineBetter.m ../src/application/mesContentMultiLineBetter.m ../src/application/mesContentMultiLineBetter.m ../src/application/messontentMultiLineBetter.m ../src/application/messantentMultiLineBetter.m ../src/application/messagtentMultiLineBetter.m ../src/application/messageentMultiLineBetter.m ../src/application/message.ntMultiLineBetter.m ../src/application/message.m tMultiLineBetter.m ../src/application/message.m MultiLineBetter.m ../src/application/message.m
^C
s.../src/application/Bank/k/ge.m
101LetUsC.m			     104AddressOnePutsContentMultiLine.m~
102Address.m			     105AddressOnePutsContentMultiLineBetter.m
103AddressOnePuts.m		     105AddressOnePutsContentMultiLineBetter.m~
103AddressOnePuts.m~		     message.m
104AddressOnePutsContentMultiLine.m
106Punishment.mmmmmmmmmmmmmmmmmmmmmmmmmmm





















    IW	 ../src/application/Bank/106Punishment.m (matlab)      Row 1	Col 1




















 Joe's Own Editor 4.6 (utf-8) ** Type Ctrl-K Q to exit or Ctrl-K H for help **
^[w File
[
2 IW   ../src/application/Bank/106Punishment.m (matlab)
0 IW   ../src/application/Bank/106Punishment.m (matlab)
0 IW   ../src/application/Bank/106Punishment.m (matlab)
    I	 ../src/application/Bank/106Punishment.m (matlab)
for(int i=1;i<=10;i++)
puts("I will switch off lights, fans. AC when leaving room");^[Modified)(m4



[



2 I    ../src/application/Bank/106Punishment.m (Modified)(



0 I    ../src/application/Bank/106Punishment.m (Modified)



1 I    ../src/application/Bank/106Punishment.m (Modified



    IW	 ../src/application/Bank/106Punishment.m (Modified)(m
for


3


266

^[

[

   123
^[
[
   21

^[

[

   1
^[
[
   2
^[
[
   3
^[
[
   4
5
 (int i=1;i<=10;i++)^[
[
   2^[

[

   6^[

[

   7^[

[

   8^[

[

   9^[

[

   10

^[

[

   1

^[

[



^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   20

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   30

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   40

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   50

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   60

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[



^[

[



^[

[



31


4



f2o3r4 5



for (6)7^[[   6^[[



   5^[



[



   6 7i8n9t10)1i2)3=4)516;7)8^[[   3 ^[[   28

^[

[

   1
^[
[
   7
^[
[
   6
^[
[
   5
^[
[
   4
^[
[
   3
^[
[
   2
^[
[
   1
^[
[
   0
^[
[
   9
^[
[
   8
^[
[
   7
^[
[
   6
^[
[
   5
^[
[
   6
7
 int i=1;i<=10;i++)^[
[
   8
^[
[
   9
^[
[
   10
^[
[
   1
^[
[
   2
3
 =1;i<=10;i++)^[
[
   4
5
 1;i<=10;i++)^[
[
   6
^[
[
   7
8
 i<=10;i++)^[
[
   9
20
 <=10;i++)^[
[
   1
^[
[
   2
3
 10;i++)^[
[
   4
^[
[
   5
^[
[
   6
7
 ^[+)
[
   8
^[
[
   9
^[
[
   30
1
 ^[
[
   2
^[
[
   21

^[

[

   2

^[

[

   3

^[

[

   4^[

[

   5^[

[

   6^[

[

   7^[

[

3 IW   ../src/application/Bank/106Punishment.m (Modified)(    IW   ../src/application/Bank/106Punishment.m (Modified)(m

I will switch off lights, fans. AC when leaving room");^[

[

3 IW   ../src/application/Bank/106Punishment.m (Modified)(    IW   ../src/application/Bank/106Punishment.m (Modified)(mI will switch off lights, fans. AC when leaving room");^[

[

3 IW   ../src/application/Bank/106Punishment.m (Modified)(    IW   ../src/application/Bank/106Punishment.m (Modified)(mI will switch off lights, fans. AC when leaving room");^[

[

   8^[

[

   9^[

[

   10

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   20

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   30

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   40

^[

[

   1

^[

[

   2

^[

[

   1

^[

[

   0

^[

[

   39

8

 AC when leaving room");9

, AC when leaving room");8

 AC when leaving room");9

 AC when leaving room");40

a AC when leaving room");1

n AC when leaving room");2

d AC when leaving room");3

 AC when leaving room");2

AC when leaving room");^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   50

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   60

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   31


^[


[


   4



^[



[



   2^[



[



   3^[



[



   4^[



[



   5^[



[



   6^[[



for7([int i^=[1; )^[[	10^[[	1^[[   3
^K



File ../src/application/Bank/106Punishment.m saved
|> pwd
/home/savleen_takkar/public_html/Code/PPS/Week01/build
|> make
[100%] Built target main
|> ./main
Principal
Panth Rattan Shiri Gurcharan Singh Tohra Complex
Guru Nanak Dev Engineering College
Gill Park
Ludhiana - 141006
India
|>ecpe../src/application/Bank/105AddressOnePutsContentMultiLineBetter.mt../src/ap65AddressOnePutsContentMultiLineBetter.m ../src/aAddressOnePutsContentMultiLineBetter.m ../src/apddressOnePutsContentMultiLineBetter.m ../src/appressOnePutsContentMultiLineBetter.m ../src/applressOnePutsContentMultiLineBetter.m ../src/appliessOnePutsContentMultiLineBetter.m ../src/applicssOnePutsContentMultiLineBetter.m ../src/applicaOnePutsContentMultiLineBetter.m ../src/applicatOnePutsContentMultiLineBetter.m ../src/applicatinePutsContentMultiLineBetter.m ../src/applicatioePutsContentMultiLineBetter.m ../src/applicationPutsContentMultiLineBetter.m ../src/application/utsContentMultiLineBetter.m ../src/application/mtsContentMultiLineBetter.m ../src/application/mesContentMultiLineBetter.m ../src/application/mesContentMultiLineBetter.m ../src/application/messontentMultiLineBetter.m ../src/application/messantentMultiLineBetter.m ../src/application/messagtentMultiLineBetter.m ../src/application/messageentMultiLineBetter.m ../src/application/message.ntMultiLineBetter.m ../src/application/message.m tMultiLineBetter.m ../src/application/message.m MultiLineBetter.m ../src/application/message.m
unishment.m
|> make
Scanning dependencies of target main
[ 50%] Building C object CMakeFiles/main.dir/src/main.o
[100%] Linking C executable main
[100%] Built target main
|> ./
CMakeFiles/ main
|> ./main
 I will switch off lights, fans and AC when leaving room
 I will switch off lights, fans and AC when leaving room
 I will switch off lights, fans and AC when leaving room
 I will switch off lights, fans and AC when leaving room
 I will switch off lights, fans and AC when leaving room
 I will switch off lights, fans and AC when leaving room
 I will switch off lights, fans and AC when leaving room
 I will switch off lights, fans and AC when leaving room
 I will switch off lights, fans and AC when leaving room
 I will switch off lights, fans and AC when leaving room
s':rls-../src/application/Bank/pplication/Bank/106Punishment.m ../src/application/message.m
|>
101LetUsC.m			     104AddressOnePutsContentMultiLine.m~
102Address.m			     105AddressOnePutsContentMultiLineBetter.m
103AddressOnePuts.m		     105AddressOnePutsContentMultiLineBetter.m~
103AddressOnePuts.m~		     106Punishment.m
104AddressOnePutsContentMultiLine.m  message.m
ailedereverse-i-search^CPPu/c/application/Bank/
|>7MultiplicationTable5.m./src/application/Bank/106Punishment.m





















    IW	 ../src/application/Bank/107MultiplicationTable5.m (m  Row 1	Col 1




















 Joe's Own Editor 4.6 (utf-8) ** Type Ctrl-K Q to exit or Ctrl-K H for help **
^[w File
[
2 IW   ../src/application/Bank/107MultiplicationTable5.m (
0 IW   ../src/application/Bank/107MultiplicationTable5.m
0 IW   ../src/application/Bank/107MultiplicationTable5.m
    I	 ../src/application/Bank/107MultiplicationTable5.m (
for(int i=1;i<=10;i++)
printf(" %d + %d * %d\n",5,i,5*i);^[M4



[



2 I    ../src/application/Bank/107MultiplicationTable5.m (



0 I    ../src/application/Bank/107MultiplicationTable5.m



1 I    ../src/application/Bank/107MultiplicationTable5.m



    IW	 ../src/application/Bank/107MultiplicationTable5.m (M
for
%d + %d * %d\n",5,i,5*i);

^[



[



   3


^[


[


   2

^[

[

   1
^[
[

^[
[

^[
[

^[
[

^[
[

^[
[

^[
[
   2
^[
[
   3
^[
[
   4
5
 (int i=1;i<=10;i++)^[
[
   6
7
 int i=1;i<=10;i++)^[
[
   8
^[
[
   9
^[
[
   10
^[
[
   1
^[
[
   2
^[
[
   3
^[
[
   2
3
 =1;i<=10;i++)^[
[
   4
5
 1;i<=10;i++)^[
[
   6
^[
[
   7
8
 i<=10;i++)^[
[
   9
20
 <=10;i++)^[
[
   1
^[
[
   2
3
 10;i++)^[
[
   4
^[
[
   5
^[
[
   6
7
 ^[+)
[
   8
^[
[
   9
^[
[
   30
1
 ^[
[
   2
^[
[
   21

^[

[

   2

^[

[

   3

^[

[

   4^[

[

   5^[

[

   6^[

[

   7^[

[

   8^[

[

   9^[

[

   8^[

[

   7^[

[

   6^[

[

   5^[

[

   4^[

[

   3

^[

[

   2

^[

[

   1

^[

[

   132
^[
[
   1
^[
[
   0
^[
[
   29
^[
[
   8
^[
[
   7
^[
[
   6
^[
[
   5
^[
[
   4
^[
[
   3
^[
[
   2
^[
[
   1
^[
[
   0
^[
[
   19
^[
[
   8
^[
[
   9
^[
[
   20
^[
[
   1
^[
[
   2
^[
[
   3
^[
[
   4
^[
[
   5
^[
[
   6
^[
[
   7
^[
[
   8
^[
[
   9
^[
[
   30
^[
[
   1
^[
[
   2
^[
[
   21

^[

[

   2

^[

[

   3

^[

[

   4^[

[

   5^[

[

   6^[

[

   7^[

[

   8^[

[

   9^[

[

   10

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   20

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   30

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   31


^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[


   2

^[

[

   2

^[

[

   3

^[

[

   4^[

[

   5^[

[

   6^[

[

   7^[

[

   8^[

[

   9^[

[

   10

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   20

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

7

 5,i,5*i);^[

[

   8

9

 ,i,5*i);^[

[

   30

^[

[

   1

2

 ,5*i);^[

[

   3

4

 5*i);^[

[

   3

^[

[

   2

^[

[

   1

^[

[

   0

^[

[

   29

^[

[

   8

^[

[

3 IW   ../src/application/Bank/107MultiplicationTable5.m (

    IW	 ../src/application/Bank/107MultiplicationTable5.m (M

,i , 5*i);^[

[

   9

30

 i , 5*i);^[

[

   1

^[

[

3 IW   ../src/application/Bank/107MultiplicationTable5.m (

    IW	 ../src/application/Bank/107MultiplicationTable5.m (M

, 5*i);^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   31


^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





^[


[





238

^K


File ../src/application/Bank/107MultiplicationTable5.m saved
|>:cpp../src/application/Bank/106Punishment.mm../src/application/message.m': cp ../src/application/Bank/106Punishment.m ../src/applic
1@7
cp: cannot stat '../src/application/Bank/107': No such file or directory
everse-i-search)m': cp ../src/application/Bank/107 ../src/application/message.a': ./main
|>:makee
[100%] Built target main
|> cpk../src/application/Bank/107MultiplicationTable5.ms../src/application/message.m

|> make
Scanning dependencies of target main
[ 50%] Building C object CMakeFiles/main.dir/src/main.o
[100%] Linking C executable main
./m[100%] Built target main
ai|> ./main
 5 + 1 * 5
 5 + 2 * 10
 5 + 3 * 15
 5 + 4 * 20
 5 + 5 * 25
 5 + 6 * 30
 5 + 7 * 35
 5 + 8 * 40
 5 + 9 * 45
 5 + 10 * 50
|>erse-i-search)j': joe ../src/application/Bank/107MultiplicationTable5.m





















    IW	 ../src/application/Bank/107MultiplicationTable5.m (m  Row 2	Col 1

printf(" %d + %d * %d\n", 5, i, 5*i);



















fJoe'siOwniEditori4.6 (utf-8) ** Type Ctrl-K Q to exit or Ctrl-K H for help **

^[

[

^[ 2

[

   3

^[

[

   4^[

[

   5^[

[

   6^[

[

   7^[

[

   8^[

[

   9^[

[

   10

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   4

^[

[

   3

^[

[

3 IW   ../src/application/Bank/107MultiplicationTable5.m (

    IW	 ../src/application/Bank/107MultiplicationTable5.m (M

 %d * %d\n", 5, i, 5*i);x4

x %d * %d\n", 5, i, 5*i);^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

3 IW   ../src/application/Bank/107MultiplicationTable5.m (

    IW	 ../src/application/Bank/107MultiplicationTable5.m (M

 %d\n", 5, i, 5*i);=9

= %d\n", 5, i, 5*i);^K


File ../src/application/Bank/107MultiplicationTable5.m saved
|>:cpp../src/application/Bank/107MultiplicationTable5.mm../src/application/message.mmcp ../src/application/Bank/107MultiplicationTable5.m ../

|> make
Scanning dependencies of target main
[ 50%] Building C object CMakeFiles/main.dir/src/main.o
./ma	[100%] Linking C executable main

[100%] Built target main
|> ./main
 5 x 1 = 5
 5 x 2 = 10
 5 x 3 = 15
 5 x 4 = 20
 5 x 5 = 25
 5 x 6 = 30
 5 x 7 = 35
 5 x 8 = 40
 5 x 9 = 45
 5 x 10 = 50
|>8MultiLine.mionTable5.m./src/application/Bank/107MultiplicationTable5.m





















    IW	 ../src/application/Bank/108MultiplicationTableMultiL  Row 1	Col 1




















 Joe's Own Editor 4.6 (utf-8) ** Type Ctrl-K Q to exit or Ctrl-K H for help **
^[w File
[
2 IW   ../src/application/Bank/108MultiplicationTableMulti
0 IW   ../src/application/Bank/108MultiplicationTableMult
0 IW   ../src/application/Bank/108MultiplicationTableMul
    I	 ../src/application/Bank/108MultiplicationTableMultiL
for(int i=0;i<=10;i++)
{
printf("%d x %d = %d ",i,5,i*5);
printf("\n");
1^I6IW ..../src/application/Bank/108MultiplicationTableMultiL
for




[[ 4



^[



[



   3


^[


[


   2

^[

[

   1
^[
[

^[
[

^[
[

^[
[

^[
[
   2
^[
[
   3
^[
[
   4
5
 (int i=0;i<=10;i++)^[
[
   6
7
 int i=0;i<=10;i++)^[
[
   8
^[
[
   9
^[
[
   10
^[
[
   1
^[
[
   2
^[
[
   3
^[
[
   4
^[
[
   5
6
 i<=10;i++)^[
[
   7
8
 <=10;i++)^[
[
   9
^[
[
   20
1
 10;i++)^[
[
   2
^[
[
   3
^[
[
   4
5
 ^[+)
[
   6
^[
[
   7
^[
[
   8
9
 ^[
[
   30
^[
[
   21

^[

[

   2

^[

[

   31


^[


[


   9^[[   10^[


[


   1^[


[


   2^[


[


   3^[[


   4^[[   5^[[	 6^[[	7^[[   8^[[   9^[[   20^[[   1^[[   2^[[   3^[[   4^[[	 5^[[	6^[[   7^[[   8^[[   9^[[   30^[[   1^[[   2^[[   3^[[	 4^[[	3^[[   23 i,5,i*5);^[[	 4^[[	56 5,i*5);^[[	7^[[   89 i*5);^[[   40^[[   1^[[   2^[[   3^[[   4^[[	 41



^[



[



[[ 4^[[61 10^[[   1^[[	 2^[[	3^[[   4^[[   5^[[   6^[[   7^[[   8^[[   9^[[	 20^[[	 1^[[	2^[[   51



^[



[



   3


^[


[


   9^[[   10^[


[


   1^[


[


   2^[


[


   3^[[


   4^[[   5^[[	 6^[[	7^[[   8^[[   9^[[   20^[[   1^[[   2^[[   3^[[   4^[[	 5^[[	6^[[   7^[[   8^[[   9^[[3 IW	../src/application/Bank/108MultiplicationTableMulti    IW   ../src/application/Bank/108MultiplicationTableMultiL", i, 5, i*5);^K
File ../src/application/Bank/108MultiplicationTableMultiLine.m saved
|>:cpp../src/application/Bank/107MultiplicationTable5.mm../src/appli87MultiplicationTable5.m ../src/application/messaMultiplicationTable5.m ../src/application/messagultiplicationTable5.m ../src/application/messageltiplicationTable5.m ../src/application/message.tiplicationTable5.m ../src/application/message.m iplicationTable5.m ../src/application/message.m plicationTable5.m ../src/application/message.m
MultiplicationTableMultiLine.m ../src/application/message.m

everse-i-search)m': cp ../src/application/Bank/108MultiplicationTableMultiLine.m ../src/applicatia':m./main.m
|>:makee
Scanning dependencies of target main
[ 50%] Building C object CMakeFiles/main.dir/src/main.o
./[100%] Linking C executable main
ma	[100%] Built target main
|> ./main
0 x 5 = 0
1 x 5 = 5
2 x 5 = 10
3 x 5 = 15
4 x 5 = 20
5 x 5 = 25
6 x 5 = 30
7 x 5 = 35
8 x 5 = 40
9 x 5 = 45
10 x 5 = 50
|>ejoe-../src/application/Bank/108MultiplicationTableMultiLine.mnTableMultiLino': joe ../src/application/Bank/108MultiplicationTableMultiLine': joe ../src/application/Bank/108MultiplicationTableMultiLine.m






















    IW	 ../src/application/Bank/108MultiplicationTableMultiL  Row 3	Col 1


	printf("%d x %d = %d", i, 5, i*5);
	printf("\n");
}
















for ( int i=0; i <= 10; i++ )
^[oe's Own Editor 4.6 (utf-8) ** Type Ctrl-K Q to exit or Ctrl-K H for help **


[


^[[9  10^[


[


   1^[


[


   2^[


[


   3^[[


   4^[[   5^[[	 6^[[	7^[[   8^[[   9^[[   20^[[   1^[[   2^[[   3^[[   4^[[	 5^[[	6^[[   7^[[   8^[[   9^[[   30^[[   1^[[   2^[[3 IW   ../src/application/Bank/108MultiplicationTableMulti    IW   ../src/application/Bank/108MultiplicationTableMultiL, 5, i*5);35, 5, i*5);^[[   4^[[	 5^[[	65, i*5);6i, i*5);^K
File ../src/application/Bank/108MultiplicationTableMultiLine.m saved
p':rcp-i-search)c':ijoeB../src/application/Bank/108MultiplicationTableMultiLine.m
|>.cpr../src/application/Bank/108MultiplicationTableMultiLine.mo../src/applicatio

|> make
Scanning dependencies of target main
,.[ 50%] Building C object CMakeFiles/main.dir/src/main.o
ma[100%] Linking C executable main
[100%] Built target main
i|> ./main
5 x 0 = 0
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
|>ejoe-../src/application/Bank/108MultiplicationTableMultiLine.mnTableMultiLino': joe ../src/application/Bank/108MultiplicationTableMultiLine': joe ../src/application/Bank/108MultiplicationTableMultiLine.m
7MultiplicationTable5.mmmmmmmm





















    IW	 ../src/application/Bank/107MultiplicationTable5.m (m  Row 2	Col 1

printf(" %d x %d = %d\n", 5, i, 5*i);



















fJoe'siOwniEditori4.6 (utf-8) ** Type Ctrl-K Q to exit or Ctrl-K H for help **

^[

[

^[ 2

[

   3

^[

[

   4^[

[

   5^[

[

   6^[

[

   7^[

[

   8^[

[

   9^[

[

   10

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   20

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

3 IW   ../src/application/Bank/107MultiplicationTable5.m (

    IW	 ../src/application/Bank/107MultiplicationTable5.m (M

, i, 5*i);i8

i, i, 5*i);^[

[

   9

^[

[

   30

^[

[

3 IW   ../src/application/Bank/107MultiplicationTable5.m (

    IW	 ../src/application/Bank/107MultiplicationTable5.m (M

, 5*i);51

5, 5*i);^K


File ../src/application/Bank/107MultiplicationTable5.m saved
|>:cpp../src/application/Bank/108MultiplicationTableMultiLine.mm../src/applicatioon/message.m

|> make
Scanning dependencies of target main
[ 50%] Building C object CMakeFiles/main.dir/src/main.o
[100%] Linking C executable main
[100%] Built target main
./|> ./main
5 x 0 = 0
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
|>erse-i-search)j': joe ../src/application/Bank/107MultiplicationTable5.m





















    IW	 ../src/application/Bank/107MultiplicationTable5.m (m  Row 2	Col 1

printf(" %d x %d = %d\n", i, 5, 5*i);



















fJoe'siOwniEditori4.6 (utf-8) ** Type Ctrl-K Q to exit or Ctrl-K H for help **


File ../src/application/Bank/107MultiplicationTable5.m not changed so no update needed
|>:cpp../src/application/Bank/108MultiplicationTableMultiLine.mm../src/applicat78MultiplicationTableMultiLine.m ../src/applicatiMultiplicationTableMultiLine.m ../src/applicatioultiplicationTableMultiLine.m ../src/applicationltiplicationTableMultiLine.m ../src/application/tiplicationTableMultiLine.m ../src/application/miplicationTableMultiLine.m ../src/application/meplicationTableMultiLine.m ../src/application/meslicationTableMultiLine.m ../src/application/messicationTableMultiLine.m ../src/application/messacationTableMultiLine.m ../src/application/messagationTableMultiLine.m ../src/application/messagetionTableMultiLine.m ../src/application/message.ionTableMultiLine.m ../src/application/message.m onTableMultiLine.m ../src/application/message.m nTableMultiLine.m ../src/application/message.m
MultiplicationTable5.m ../src/application/message.m

|> make
Scanning dependencies of target main
[ 50%] Building C object CMakeFiles/main.dir/src/main.o
./ma	[100%] Linking C executable main
[100%] Built target main
|> ./main
 1 x 5 = 5
 2 x 5 = 10
 3 x 5 = 15
 4 x 5 = 20
 5 x 5 = 25
 6 x 5 = 30
 7 x 5 = 35
 8 x 5 = 40
 9 x 5 = 45
 10 x 5 = 50
|>erse-i-search)j': joe ../src/application/Bank/107MultiplicationTable5.m





















    IW	 ../src/application/Bank/107MultiplicationTable5.m (m  Row 2	Col 1

printf(" %d x %d = %d\n", i, 5, 5*i);



















fJoe'siOwniEditori4.6 (utf-8) ** Type Ctrl-K Q to exit or Ctrl-K H for help **

^[

[

   1
^[
[

^[
[
   2

^[

[

   2

^[

[

   3

^[

[

   4^[

[

   5^[

[

   6^[

[

   7^[

[

   8^[

[

   9^[

[

   10

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

^[

[

   9

^[

[

   20

^[

[

   1

^[

[

   2

^[

[

   3

^[

[

   4

^[

[

   5

^[

[

   6

^[

[

   7

^[

[

   8

M7

, 5, 5*i);58

5, 5, 5*i);^[

[

   9

^[

[

   30

^[

[

3 IW   ../src/application/Bank/107MultiplicationTable5.m (

    IW	 ../src/application/Bank/107MultiplicationTable5.m (M

, 5*i);i1

i, 5*i);^K


File ../src/application/Bank/107MultiplicationTable5.m saved
|>:cpp../src/application/Bank/107MultiplicationTable5.mm../src/application/message.mmcp ../src/application/Bank/107MultiplicationTable5.m ../

|> make
Scanning dependencies of target main
[ 50%] Building C object CMakeFiles/main.dir/src/main.o
./ma[100%] Linking C executable main
i
[100%] Built target main
|> ./main
 5 x 1 = 5
 5 x 2 = 10
 5 x 3 = 15
 5 x 4 = 20
 5 x 5 = 25
 5 x 6 = 30
 5 x 7 = 35
 5 x 8 = 40
 5 x 9 = 45
 5 x 10 = 50
|> |> pwd
/home/savleen_takkar/public_html/Code/PPS/Week01/build
|> exit

Script done on 2019-08-15 08:54:26+05:30 [COMMAND_EXIT_CODE="0"]


## Have account on GitHub

1. Create login / signup at http://github.com
1. Afetr login on github.com, visit: 



[Index](../README.md) | [Next](.md)
