# Operating Systems

Program is a file stored in the computer; process is that file performing certain action.
Two main ypes of programs:
<br>  a) applications (or apps): programs designed for specific use.
<br>  b) operating system software: series of software components used to control hardware.

Managing hardware is dealt by the kernel of an Operating System. Initially, dealing with hardware was all that an Operating System used to do; however with the introction of multiprocesses, Operating Systems also manage system resources program by program now, and also provide a user-interface.

Opetating system loads into computer memory when computer's turned on. Next, it loads the programs that display the interface. From within the interface, the user can execute commands to tell the operating system and other applications to perform specific task. The operating system then uses the computer hardware to performm the task required by the applications.

Operating system that have the ability to manage multiple tasks at the same time, and allow multuple users to access the system simultaneosly are reffered as **multiuser** and **multitasking** operating systems.

A **Server** is a computer with an operating system that is configured to allow other computers to connect to it from accross a network.

## Shells, Terminals, and the Kernel
Operating system is merely a collection of software that allows the user to use the computer hardware in a meaningful way. Every operating system has a core management component, the kernel, which loads all other components and serves to ventrally controll the activities of the computer. In Linux, it is simply a file called `vmlinuz`, that is located on the hard disk and loaded when computer is turned on.

**Terminal** acts as a channel through which a user interacts with their computer, i.e. the kernel.The user-interface on a terminal is called the **Shell** which accepts direct input from the user and passes it to the kernel for processessing. The **BASH shell** (short for Bourne Again SHell) is the default shell on most Linux machines, which is an improved version of the Bourne shell from AT&T.

By default, the terminal presents a command-line shell (BASH shell), where commands could be entered to instruct the linux kernel with what to do; however, nowadays graphical interfaces are more preferred, which could be build on top of the BASH shell. 

| Termina name | Key Combination | Login Type   |
|-|-|-|
|    tty1 (:0) | Ctrl + Alt + 1  | graphical    |
|    tty2      | Ctrl + Alt + 2  | command-line |
|    tty3      | Ctrl + Alt + 3  | command-line |
|    tty4      | Ctrl + Alt + 4  | command-line |
|    tty5      | Ctrl + Alt + 5  | command-line |
|    tty6      | Ctrl + Alt + 6  | command-line |

Table 1: Common Linux Terminals

