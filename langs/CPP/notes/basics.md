### Basics of CPP [May, 17, 2022]

C++ is a compiled language. For a program to run, its source text has to be processed by a compiler, producing object files, which are combined by a linked yielding an executable program. A C++ program typically consists of many source code files also called source files.

```
source file 1 --> compiler --> object file 1
                                              --> link --> executable file.
source file 2 --> compiler --> object file 2
```

An executable program is created for a specific hardware.system combination; it is not portable only the source code is portable and can be ran on variety of operating systems.

C++ standard defines two kinds of entities:
- core language feature. example: buil-in types `char` and `int` & loops `for-statements` and `while-statements`
- standard-library components. example: containers `vector` and `map` & I/O operations `<<` and `getline()`

The standard-library components in C++ can be implemented with C++ itself and is with very minor use of machine code for things such as thread context switching. This implies that C++ is sufficiently expressive and efficient for the most demanding systems programming tasks.

C++ is a statically typed language. That is the type of every entity (object, value, name and expression) must be known to the compiler at it's point of use. The type of an object determines the set of operations applicable to it.

--- 
### Hello, World!

```cpp
int main() {  }
```

This is a simple function in C++. This defines a function called `main`, which takes no arguments and does nothing. Curly braces express grouping in C++. Here they indicates the start and end of the funciton body.

Every C++ program most have exactly one global function named `main()`. The program starts by executing that function. The int value returned by `main()`.

```cpp
#include <iostream>

int main()
{
  std::cout << "hello, world!\n";
}
```

This is a simple "hello, world!" program in C++. The line `#include <iostream>` instructs the compiler to include the declaration of the standard stream I/O facilities as found in `iostream`. Without these declarations, the expression `std::cout << "hello, world!"` would make no sense and won't work. The operator `<<` ('put to') writes its second argument onto it's first. In this case, the string literal "hello, wrold!\n" is sritten onto the standard output stream `std::cout`. A string character followed by `\` denotes a single 'special character'. In this case `\n` is the newline character, so that the characters written are `hello, world!` followed by a newline.

The `std::` specifies that the name `cout` is to be found in the standard-library namespace. alternatively we can use `using namespace std;` this will make things a bit easier and we don't have to type `std::` anymore just simple `cout << "hello, world!"`.

---
### Types, Variables, and Airthmetic

