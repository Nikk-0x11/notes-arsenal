```c
#include <stdio.h>

int main() {
  printf("Hello, World!");
  return 0;
}
```

```bash
$ gcc helloworld.c && ./a.out
```

```bash
Hello, World!%
```

## A closer look at the structure of the C Program

-   preprocessor
-   Header file
-   `main()` function
-   Variables in C
-   Statements & expressions in C

1.  **preprocessor**
    
    The `#include` is the first statement of any C program. It is known as a preprocessor. The task of a preprocessor is to initialize the environment of the program, i.e. to link the program with the header files required. It’s clear by the name that, this line of code is responsible for doing preprocessing, before the actual code is executed.
    
    ```c
    #include <stdio.h>
    
    int main() {
      printf("Hello, World!");
      return 0;
    }
    ```
    
    **code comes from compilation** → **preprocessing happens** → **rest of the code compilation**.
    
    So, when write `#include <stdio.h>`, it is used to inform the compiler to include the **stdio.h** header file which is the S**tandard I/O Library** into the program before executing the program. The **Standard I/O Library** lets you read input from the keyboard and then write the output to the console screen.
    
    <aside> 💡 console screen means **CMD** in windows and **Terminal** in linux/macOS.
    
    </aside>
    
    The same way we can include any number of header files.
    
    <aside> 💡 The `#include` is not the only preprocess. Whenever you see any piece of code starting with `#` symbol, that means it’s a preprocessor in the C language.
    
    </aside>
    
2.  **Header File**
    
    A Header file is a set of collection of build-it functions, which we can directly use in our program. Header files container are definitions of the functions which can be used in any C program by using preprocessor `#include` along with the name of the header file. There are some standard header files along with default C installation, like **stdio.h** header file. There are many other header files like this. As of now we can consider header files as a readymade collection of functions that comes packages with the C language and we can use them without worrying about how they work, all we have to do is include the header file in very beginning of our code/program.
    
    ```c
    **#include <stdio.h> // Header File**
    
    int main() {
      printf("Hello, World!");
      return 0;
    }
    ```
    
    To use any of the standard library functions, the appropriate header file must be included. This is done at the beginning of the C source code. For exmaple, to use the `printf()` function in a C program, which is used to display anything on the console screen, the line `#include <stdio.h>` is required, because the header file stdio.h contains the `printf()` function definition. All header files will have `.h` extension.
    
3.  **The `main()` function** The `main()` function is a function that must be there in every C program. Everything inside this function in a C program will be executed, hence the actual logic or the code is always written inside the `main()` function. As the name suggests, this is the main ( of prime importance or center of attraction ) function. In the Hello World code example, there was `int` written before the main() function, Well, that is the return type of the `main()` function enclose the body of the `main()` function.
    
4.  **The `printf()` function** The `printf()` function that is used to print(show) anything on the console as output. This function is defined in the stdio.h header file, which we have included in our C program.
    
5.  **Return Statement** A `return` statement is used to return a response to the caller function. It is generally the last statement of any C language function. We don’t have to worry about this too, we will cover this statement when we learn about function in the C language.
    
6.  **Semicolon** It is important to note that every statement in C should end with a semicolon ( ; ). If we miss adding any semicolon, the compiler will throw an error.
    

# Summary

<aside> 💡 ****Name different preprocessors in C programming Language?****

</aside>

Different preprocessors in the C language are `#include`, `#if`, `#define`, `#ifdef`, `#undef`, etc. and many more. A pre-processor is a statement that is executed before the main code of the C program is executed.

<aside> 💡 ****What do you understand by the main() function in C language?****

</aside>

The `main()` function in the C language acts as the entry point of any program or we can say that the execution of the code starts from here. The source code which is inside the `main()` function gets executed.

<aside> 💡 ****What do you understand by the main() function in C language?****

</aside>

In order to add the single line comment, we can use `//` followed by the comment and for mutiline comments, we can use `/* comment */` .

<aside> 💡 **What is stdio.h in C program?**

</aside>

The stdio standard for standard input and output and .h is the extension of the file indicating that it is a header file.

The main use of this header file is, that it helps to get the input from the user and return the output result text to the monitor. There are readymade functions in this header file that we can use in our program, for example, `printf()` and `scanf()` functions are defined in the stdio.h header file.