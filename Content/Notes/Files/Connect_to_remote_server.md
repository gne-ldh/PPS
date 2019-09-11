[Index](../README.md)

# Laboratory Session No. 01

You need to read these instructions very carefully, and apply in laboratory
session.

## Information you needed

For laboratory session, you will work on a remote GNU/Linux server. You must
know the server's name, your user ID, password and the port number, which
allow you to connect the server. This needed information is tabulated below:

| Item | Value |
| ---:|:--- |
| GNU/Linux Server | code.gdy.club |
| User ID | YourRollNumber |
| Password | If you don't know, contact office of Applied Science Dept. |
| Port | 22 |

## How to access remote server

Use `mosh` software. In laboratories, teacher will tell you the instruction
how to connect to remote server. Software will be already installed in
computers avaliable for your laboratory work.

If you wish to connect from your mobile, or desktop, then Visit [mosh's
Download page](https://mosh.org/#getting). Follow instructions to get the
software and to install it. You may also install it as `Chrome` browser's
extension. Visit [Chrome Store](https://chrome.google.com/webstore/detail/mosh/ooiklbnjmhbcgemelgfhaeaocllobloj)
for further information.

From Linux Desktop / Laptop, open "Command line Terminal" (also called
console), using Ctrl+Atl+t (may vary depending on Linux Distribution and due
to customisation). Using GUI, you may also launch it.

Further help may be taken from: [WikiHow](https://www.wikihow.com/Open-a-Terminal-Window-in-Ubuntu)

Once you have opened terminal, which is usually a big black rectangular
area, in which there is a small solid rectangle (of the size of a single
character), after some text like `hs@rai:~$ `, where `hs` is user on local
computer named `rai`, like:

	hs@rai:~$ 

At the position of cursor (Solid Rectangle), you may type from keyboard. 
Type following command.

	hs@rai:~$ mosh hsrai@code.gdy.club

`hs@rai:~` will be there already, and you need to type only:

	mosh <UserID>@<ServerName>

If you UserID is 19123015, and knowing that we will be working on server
code.gdy.club, then you need to type:

	mosh 1923015@code.gdy.club

First time, if anyone try to connect to a new remote server, then he will be
presented with following text:

	The authenticity of host 'code.gdy.club (<no hostip for proxy command>)' can't be established.
	ECDSA key fingerprint is SHA256:nnqmn/lV3O3BUIYUQq2kfN8auq9+d6oq1acUVc5kFWc.
	Are you sure you want to continue connecting (yes/no)?


Now you are supposed to read it **very** carefully, if you type `y` or `n`, then
you will be surprised (I say, rather **_SHOCKED_**) by getting messages like:

	Are you sure you want to continue connecting (yes/no)? n
	Please type 'yes' or 'no': y
	Please type 'yes' or 'no': yes

So you need to type three letters (characters) as instructed by the computer,
which are y e s. Single character will not work.

After this, once connection established (make sure Internet is working, and
there is not typing error/mistake), remote server will request you for
password:

	hsrai@code.gdy.club's password:<Enter your password, and press Enter: You won't se anything as you type> 
	Creating directory '/home/hsrai'.
	Linux computer-centre 4.19.0-5-amd64 #1 SMP Debian 4.19.37-5+deb10u1 (2019-07-19) x86_64
	
	Welcome to Coding Server maintained by Computer Centre of GNDEC, Ludhiana,
	Specifically for the students of 1st year for their course:
	                       =================================
	
	                        Programming for Problem Solving
	
	                       =================================
	To know how to work, read:
	
	 https://github.com/gne-ldh/PPS/blob/master/Content/Notes/README.md
	
	
	hsrai@computer-centre:~$ ls
	public_html


It will display something about itself, and may include some welcome
message. The above message is the sample, The message, you get may be different.

Now you have entered in to a remote server. That may be a computer on
network, physically placed on the same table, or may in Canada, Europe, or
USA. That may be an old machine or may be a super computer.

If you are able to do this, then pat yourself. You have reached first
destination. But interesting journey yet to come!

Continue reading [next instruction](Compiling_and_running_1st_program.md), may be after a tea break ;-) 

[Index](../README.md) | [Next](Compiling_and_running_1st_program.md)
