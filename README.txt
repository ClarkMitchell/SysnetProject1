Sysnet Project 1

Authors: Clark Mitchell
         Zachary Grant

Class: Systems and Networks I

Apple was kind enough to symlink llvm to my "gcc"
and so the gcc-4.8 and up has issues that render it useless.

if it's worth anything here is a video of it working (somewhat)

https://asciinema.org/a/3nr421xkmb1pky7shzin3jry9


issues (regardless of compiler):

	- cat doesnt display correctly.
	- redirection is tested for but not implemented.
	- background processes hang and have to be killed manually.
	- Debug option is not implemented.

if you have the llvm compiler clang then it might be worth trying to run,
which can be down as follows:

	make
	./myshell
	make clean

to exit the shell type "exit" or hit ctrl - C
