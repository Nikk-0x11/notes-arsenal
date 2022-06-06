Before using gdb to debug your code, remenber to compile your code with `-g (with source code symbols)` flag or `-g3 (all debug info, including macro symbols and source code symbols)`

# How GDB works?

Understanding how does gdb work can makes your life way more easier. Gdb mainly uses 'ptrace' syscall (which provides a means by which one process (the "tracer") may observe and control the execution of another process (the "tracee"), and examine and change the tracee's memory and registers) to debug process. Below shows ptrace's prototype:

```
long ptrace(enum __ptrace_request request, pid_t pid,
                  void *addr, void *data);
```

So how does gdb debug a process? There are two ways to do that:

- Create a child process
  1. gdb fork itself to generate a child process
  2. child do a PTRACE_TRACEME, follow by an `exeve`
  3. parent communicates with child by using different ptrace requests
- Attach to a process
  1. attach to a process by using PTRACE_ATTACH
  2. communicates with process by using different ptrace requests

## Help

- `man gdb` - Gdb manuel
- `gdb --help` - Gdb help (more intuitive than gdb manuesl)

- `(gdb)help` - Show list of classes of commands and how to use help command
- `(gdb)help class` - List a list of commands in that class
- `(gdb)help command` - Show full documentation of given command
- `(gdb)apropos word` - Search for commands related to given word

## Start gdb

- `gdb program` - Start gdb by giving it a progarm to perform debugging
- `(gdb)file program` - Start gdb then give it the program to perform debugging
- `gdb program core` - Debug a program from the time it crashes by using coredump file (A core file is a memory snapshot from the time of the crash)
- `gdb --pid pid` - Start gdb by giving it the process's pid to perform debugging

## Show/Set inferior-arguments

- `(gdb)show args` - Show current arguments
- `(gdb)set args arg1 arg2` - Set inferior-arguments

## Run

- `(gdb)run [arg1 arg2 ..., < file1 > file2 >> file3]` - Start debugged progarm and optionally specify inferior-arguments and redirection
- `(gdb)start [arg1 arg2 ..., < file1 > file2 >> file3]` - Run the debugged program until the beginning of the main procedure and optionally specify inferior-arguments and redirection

## Detach/Kill program

- `(gdb)detach inferior` - Detach from inferior attached process
- `(gdb)kill inferior` - Kill inferior debugged process

## Quit gdb

- `(gdb)quit` - Quit gdb

## Source code

In order to view source code, compile program with `-g` flag.

- `(gdb)list` - List source code around PC pointer
- `(gdb)list function` - List source code of given function
- `(gdb)list file:function` - List source code around given function in given file
- `(gdb)list file:linenum` - List source code around given linenum in given file

## Breakpoints

- `(gdb)info breakpoints` - Show all breakpoints
- `(gdb)break [location] [threadnum] [condition]` - Set a breakpoint on a given location in given thread if specified condition is true. Location can be function, linenum, address. With no location, uses current execution address of the selected stack frame. This is useful for breaking on return to a stack frame.
- `(gdb)delete breakpoint1 breakpoint2 ...` - Delete given breakpoints
- `(gdb)enable|disable breakpoint1 breakpoint2 ...` - Enable or disable given breakpoints

## Watchpoints

A watchpoint stops execution of your program whenever the value of expression changes

- `(gdb)info watchpoints` - Show watchpoints
- `(gdb)watch [location] expression [threadnum]` - Set a watchpoint on a given location in given thread if specified expression changes
- `(gdb)delete watchpoint1 watchpoint2 ...` - Delete given watchpoints
- `(gdb)enable|disable watchpoint1 watchpoint2 ...` - Enable or disable given watchpoints

## Display

- `(gdb)info display` - Show all displays
- `(gdb)display/fmt expression` - Print the value of expression each time the program stops
- `(gdb)enable|disable displaynum1 displaynum2 ...` - Enable or disable display with given displaynum

fmt is a repeat count followed by a format letter and a size letter.

Format letters are o(octal), x(hex), d(decimal), u(unsigned decimal), t(binary), f(float), a(address), i(instruction), c(char), s(string)
Size letters are b(byte), h(halfword), w(word), g(giant, 8 bytes)

## Steping

- `(gdb)next(n)` - Step program, proceeding through subroutine calls
- `(gdb)nexti(ni)` - Step one instruction, but proceed through subroutine calls
- `(gdb)reverse-next` - Step program backward, proceeding through subroutine calls
- `(gdb)reverse-nexti` - Step backward one instruction, but proceed through called subroutines

- `(gdb)step(s)` - Step program until it reaches a different source line
- `(gdb)stepi(si)` - Step one instruction exactly
- `(gdb)reverse-step` - Step program backward until it reaches the beginning of another source line
- `(gdb)reverse-stepi` - Step backward exactly one instruction

- `(gdb)finish` - Execute until selected stack frame returns (return value will be printed as well)
- `(gdb)reverse-finish` - Execute backward until just before selected stack frame is called

- `(gdb)return` - Make selected stack frame return to its caller (If an argument is given, it is an expression for the value to return.)

- `(gdb)continue` - Continue until it hints the next breakpoint
- `(gdb)reverse-continue` - Continue backward until it hints the previous breakpoints

## Show/Set sources

Resources can be cataloged into debugged program's resources and gdb's resources.

1. Debugged progarm's resources:
   - files
   - source
   - inferior
   - threads
   - variables
   - functions
   - frame
   - locals
   - registers
   - etc
2. GDB's resources:
   - breakpoints
   - watchpoints
   - display
   - setting
   - etc

#### Show resources

- `(gdb)print/fmt expression` - Print the value of expression using given format, expresison can be registers(starting with $), address(starting with \*), variables and functions(you can call them symbols)
- `(gdb)x/fmt address` - Print the value of given address using given format
- `(gdb)ptype TYPE` - Print definition of type TYPE.
- `(gdb)info resource` - Print the info of given resources

fmt is a repeat count followed by a format letter and a size letter.

Format letters are o(octal), x(hex), d(decimal), u(unsigned decimal), t(binary), f(float), a(address), i(instruction), c(char), s(string)
Size letters are b(byte), h(halfword), w(word), g(giant, 8 bytes)

#### Set resources

- `(gdb)set resource value` - Set resource with given value

## Stack

- `(gdb)backtrack count` - Print backtrace of all stack frames or innermost count frames, which will show you the current function call stack, with the function at the top
- `(gdb)frame` - Print current frame
- `(gdb)up` - Move up stack trace
- `(gdb)down` - Move down stack trace
- `(gdb)info locals` - Print locals variable in current frame
- `(gdb)info args` - Print function arguments

## Thread

By default, GDB use all-stop mode to debug multi-thread programs, which means when any thread in your program stops (for example, at a breakpoint or while being stepped), all other threads in the program are also stopped by GDB.

- `(gdb)info threads` - Show all threads
- `(gdb)thread thread_id` - Switch among threads
- `(gdb)thread name` - Set the current thread's name
- `(gdb)thread apply [thread-id-list | all] command` - Apply a command to a list of threads

## Multi-process

- `(gdb)info inferiors` - Show forked processes under the control of GDB
- `(gdb)inferior inferior_id` - Switch between inferiors
- `(gdb)show detach-on-fork` - Show whether detach-on-fork mode is on/off
- `(gdb)set detach-on-fork on|off` - Tells gdb whether to detach one of the processes after a fork, or retain debugger control over them both
- `(gdb)set follow-fork-mode parent|child` - Follow parent or child process when the program call fork or vfork

## Disassemble

- `(gdb)disassemble [location]`- Disassemble a specified location, location can be function(symbol), address. If location is missing, disassemble around the PC pointer.
- `(gdb)set disassembly-flavor` - Set the disassembly flavor. The valid values are "att" and "intel", and the default value is "att".

## TUI mode

All the normal gdb commands will work in TUI mode, so I don't list them here.

- `(gdb)tui enable/disable` - Enable/Disable gdb TUI interface
  gdb -tui program - Enable TUI interface using gdb parameter

#### TUI windows

In TUI mode, gdb can display several windows, they are: command, source, assembly, register

- `up/down` - scroll the window up and down(when it has focus)
- `C-n/C-p` - Next command/previous command
- `(gdb)info win` - List of all displayed windows
- `(gdb)focus win_name` - Set focus to given window
- `(gdb)layout layout_name` - Change the layout of windows.
- `(gdb)tui reg group` - Change the current tui register group to given register group. Valid groups are: general, float, system, all
- `(gdb)tui reg next/prev` - Show the next/previous register group
