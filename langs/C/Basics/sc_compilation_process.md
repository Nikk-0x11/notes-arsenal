The C source code compilation process is a multi-step process, which involves **proprocessing**, **compiling of code**, **linking of libraries**, etc. The process of convertnig the source code written in any programming language into machine level language that is understandable by the computer is known as **Compilation**. The software that is used for this conversion is known as a **Compiler**.
In C language, through compilation the C language source code is converted into object code.

```c
#include <stdio.h>

int main() {
	printf("Hello, World!");
	return 0;
}
```
For example the **compiler** will compile this **C code** to an **Object Code**

The compiler takes the input which is the source code andp rovides the output in the form of object code. The whole process of compiltation is completed in four steps:

1. Preprocessing
2. Compiling
3. Assembling
4. Linking

The compiler checks the source code for any syntax  or structural errors and after checking if the source code is found error-free, it then generates teh object code that has an extension .obj ( for windows ) or .o ( for Linux ).

### Processes of Compilation

Compilation of programs in C works in different stages.

1. Preprocessing
2. Compiling
3. Assembling
4. Linking

### 0 - source file preprocessing
First, preprocessing of source files takes place. The preprocessor is a program that accepts the C source code file and then it performs the following tasks:

- It will remove the comments the source code.
- It will perform the Macro expansion if any Macro is used.
- It will perform the expansion of the included header files.

### 1 - preprocessor
Preprocessor is a program that processes the source program before passing them on to the compiler. At this step the pre-processors used in any C program are handled and the source code is made ready for compilation.

- Each preprocessing statement must start with `#` where `#` is called the preprocessor directive.
- Each preprocessing directive is a single-line code statement.
- The word after `#` is called the **preprocessor command**.

Some of the preprecessor directives:

1. **#include** - To include a particular header usign the name of the header file into the C language program code.
2. **#define** - This is used to defined a MACRO in the C language.
3. **#error** - This preprocessor command is used to print the error message.

Other than these three there are many other preprocessors.In simple words, preprocessor explands the source code and the source code is passed through the compiler. it gives the `.i` extension to the source code file which is initially with `.c` extension.

### 2 - compiler
The code that was expanded by the preprocessor is then passed on to the compile. Now we know that the compiler is a program that converts the high/mid-level language code to the assembly code, which is then converted into the machine code, which the machine can understand. Therefore, the preprocessed code given by the preprocessor to the compiler is then converted into assembly code by the compiler, which is then passed on to the Assembler The source file which got the `.i` extension in the pevious step gets convered into `.s` extension by the compiler.

### 3 - assembler
The assembler comverts the assembly code that it gets from the compiler into the object code. The extension of the file in this step becomes `.obj`. The Assembler is not a separate program but it is a part of the compilation process of the C code that we are compiling. When in laymen language, we say, the C code is compiled, it means the complete compilation prcess, covering all these steps, is done.

### 4 - linker
A linker is a tool that is used to link all the parts of a program together in order of execution. The code after this stage becomes **Executable Machine Code.** There might be some situation when the program refer to the functions that are defined in some other files, Or if the code for some program is too big, we can break it into two files, which will be compiled separately and then linked using the Linker. In the C language compilation process, the Linker plays a very important role. If the C program inludes a header file. and we are using some function defined in that header file, then the Linker will link the required object code for the function in the library, to the object code of your program and package them together. Similarly,if your code is too big and you break it into two files, then both the source code files will be converted into object code separately and then the Linker will link them and make the code ready for execution. This is also called Separate Compilation.

## Summary

<aside> 💡 **What is a Compiler?**

</aside>

Compiler is simple a computer program that is used to translate the source code that is in a high/mid-leve programmnig language into machine code, which can be executed and the machine ca understand what to do.

<aside> 💡 **What is a Preprocessor?**

</aside>

The preprocessor is a directive that is used to instruct the compiler to preprocess the sourcode before the start of the actual compilation. There are some parts of the C language program that can be specified using the preprocessor, which is nothing but statements to be executed at the beginning of compilation.

<aside> 💡 **What is the other name of the .c file?**

</aside>

Files with `.c` extension are also called source code files.

<aside> 💡 **What is the role of Linker?**

</aside>

The linker is used to link all the parts of the program together in order for the execution. If the C program includes a header file, and we are usign some function defines in that header file, then the Linker will link the require object code for the function in the library, to the object code of your program and package them together. Similarly, if the program code is too big and your break it into two file, then both the source code files will be conveted into object code separately and then the Linker will link them and make the code ready for execution. This is also called Separate Compilation.

<aside> 💡 **What are the steps of compilation in the C Language?**

</aside>

1. Preprocessing
2. Compiling
3. Assembler
4. Linker