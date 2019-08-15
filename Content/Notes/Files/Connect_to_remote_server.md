# Laboratory Session No.: 01

These instructions, one need to read carefully, and apply in laboratory
session.

## Information you needed

For laboratory session, we will work on a remote GNU/Linux server. You must
know the server's name, your user ID, password and the port number, which
allow you to connect the server.

| Item | Value |
| ---:|:--- |
| GNU/Linux Server | code.gdy.club |
| User ID | YourRollNumber |
| Password | If you don't know, contact office of Applied Science Dept. |
| Port | 22 |

## How to access remote server

Use "mosh" software. In laboratories, teacher will tell you the instruction
how to connect to remote server. Software will be already installed in
computers avaliable for your laboratory work.

If you wish to connect from your mobile, or desktop, then Visit [mosh's
Download page](https://mosh.org/#getting). Follow instructions to get the
softare and to install it. You may also install it as "Chrome" browser's
extension. Visit [Chrome Store](https://chrome.google.com/webstore/detail/mosh/ooiklbnjmhbcgemelgfhaeaocllobloj)
for further information.

From Linux Desktop / Laptop, open "Comman line Terminar" (also called
console), using Ctrl+Atl+t (may vary depending on Linux Distribution and due
to cutmomisation). Using GUI, you may also lauch it.

Further help may be taken from: [WikiHow](https://www.wikihow.com/Open-a-Terminal-Window-in-Ubuntu)

Once you have opened terminal, which is usually a big black rectangular
area, in which there is a small solid rectangle (of the size of a single
character), after some text like "hs@rai:~$ ", where "hs" is user on local
computer named "rai", like:

	hs@rai:~$ 

At the position of cursor (Solid Rectangle), you may type from keyboard. 
Type following command.

	hs@rai:~$ ssh hsrai@code.gdy.club

"hs@rai:~" will be there already, and you need to type only:

	ssh <UserID>@<ServerName>

If you UserID is 19123015, and knowing that we will be working on server
code.gdy.club, then you need to type:

	ssh 1923015@code.gdy.club

First time, if anyone try to connect to a new remote server, then he will be
presented with following text:

	The authenticity of host 'code.gdy.club (<no hostip for proxy command>)' can't be established.
	ECDSA key fingerprint is SHA256:nnqmn/lV3O3BUIYUQq2kfN8auq9+d6oq1acUVc5kFWc.
	Are you sure you want to continue connecting (yes/no)?


Now you are supposed to read it very carefully, if yope "y" or "n", then you
will be surposed by getting messages like:

	Are you sure you want to continue connecting (yes/no)? n
	Please type 'yes' or 'no': y
	Please type 'yes' or 'no': yes

So you need to type three letters (characters), which are y e s. Sinhle
character will not work.

After this, once connection established (make sure Internet is wroking, and
there is not typing error/mistake), remote server will request you for
password:

	hsrai@code.gdy.club's password:<Enter your password, and press Enter: You won't se anything as you type> 
	Creating directory '/home/hsrai'.
	Linux computer-centre 4.19.0-5-amd64 #1 SMP Debian 4.19.37-5+deb10u1 (2019-07-19) x86_64
	
	The programs included with the Debian GNU/Linux system are free software;
	the exact distribution terms for each program are described in the
	individual files in /usr/share/doc/*/copyright.
	
	Debian GNU/Linux comes with ABSOLUTELY NO WARRANTY, to the extent
	permitted by applicable law.
	
	
	hsrai@computer-centre:~$ ls
	public_html


If will display something about itself, and may include some welcome
message. The above message is the sample, you your message may vary.

Now you have entered in to a remote server. That may be a computer on
netwrok, physically placed on the same table, or may in Canada, Europe, or
USA. That may be old machine or may be a super computer.

If you are able to do this, then pat yourself. You have reached first
destination. But journey is still there.

Continue reading next instruction, may be after a coffee break ;-) 

