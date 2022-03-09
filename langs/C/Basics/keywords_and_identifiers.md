Keywords and Identifiers in C are the building blocks of any C program. Keywords are predefined, which means the C language has a list of words that are keywords, while an Identifier is user-defined, which means we can specify identifiers

#### Keywords
Every programming lanuage has some reserved words that are used internally and have some meaning for the language, these type of words are called **Reserved Keywords** or **Keywords**. In other words, the words that any programming language uses internally for some specific purpose, are not allowed to be used other than that purpose, otherwise, the language compiler will get confused. And earlier we read that everything in the C program is a **Token**. Hence we can say that the words or **Keywords are also known as tokens**.

#### Identifiers
**Identifiers** are words or texts ued to identify anything in the C language. Just like we have a name, using which everyone calls you, it can be **John**, **Sam** etc, similarly in the C language, when we define a **variable** or a **function** or a **structure** etc. We name them so that it becomes easier for us to identify thethem as and use them whenever required, These names are called **Identifiers**.  **Identifiers are also tokens**, Again because every meaningful symbol, word, etc. in the C language are C Tokens, hence Identifiers are also tokens.

##### Tokens

> Tokens are the building blocks of every C languag programs.

- Keywords -> `int`, `char`, `else`, `void` etc.
- Identifiers -> `myvar`, `var_1`, `myFunc` etc.
- Operators -> `+`, `=`, `%` etc.
- Special Symbols -> `{}`, `()` etc.
- String Literals -. `'study'`, `"C"` etc.

#### C Keywords

Now we know that keywords are reserved words that have special meaning in the C language. The meaning of C compiler is already defined that the C compiler knows what these words mean and what it has to do with them. These meanings cannot be changed. Hence, keywords cannot be used as a variable name or a function name because that would try to change the existing meaning of the keyword, which is not allowed.

> You cannot use Keywords as Identifiers. This means you cannot name your variable, function, structure or pointer, or anything else,using a keyword.

There are a total of 32 keywords in the C language.

| <!-- --> | <!-- --> | <!-- --> | <!-- --> |
| -- | -- | -- | -- |
| auto | double | int | struct |
| break | else | long | switch |
| case | enum | register | typedef |
| const | extern | return | union |
| char | float | short | usigned |
| continue | for | signed | volatile |
| default | goto | sizeof | void |
| do | if | static | while |

All of these keywords were defined in the **C89 standard** , which as the first version of C language, while some more keywords were added in the later **C99 standard**. Following keywords were added by C99:

| <!-- --> | <!-- --> | <!-- --> |
| -------- | -------- | -------- |
| `_Bool` | `_Imaginary` | restrict |
| `_Complex_` | inline |

Each keyword has its own meaning attached to it, for example, the `int` keyword is used to define an integer datatype value, `if/else` are used for defining conditional statements, and so on.

##### Important points to note
- A keyword can not be used as an Identifier.
- Keywords must be written in lower case. Apart from some C99 based keywords, all other keywords are in lowercase.
- Keywords hold special meaning for the C compiler, so respect that, otherwise you will get a compile-time error.

> The `main()` is not keyword, but you should treat it as a keyword only. Because this function.  If you name a variable as main, you may confuse the Compiler.

#### C Identifiers
In C identifiers are the names given to variables, constants, function, structures, pointers and any other user-defined data, to identify them. Because it's up to the user to define the Identifiers, hence there are some rules that one has to follow,  which are defined by the C language, to avoid unnecessary errors in the compiler. 

##### Rules for defining an Identifier
- An identifier can only have **alphanumeric characters** (a-z, A-Z, 0-9) and **underscore**(`__`).
- The first character of an identifier can only contain alphabet (a-z, A-Z) or **underscore** (`__`).
- Identifiers are case-sensitive in the C language. For example, **name** and **Name** will be treated as two different identifiers.
- Keywords are not allowed to be used as Identifiers.
- No special characters, such as semicolon, period, whitespaces, slash, or comma are permitted to be used in or as an Identifier.

### Using Identifiers and Keywords

When we declate a variable or any function in any C program, to use it we much provide a name to it, that name is the used throughout the program.

```c
int myVar= "Hewwo?";
```

Here `myVar` is the name or identifier for the variable which stores the value "**Hewwo?**" in it and `int` is the keyword and all of them are tokens.

```c
int neko;
double catnip;
```

##### Valid Identifiers
```c
myvar, myvar1, myvar_1;
```

##### Invalid Identifiers
```c
$myvar;
x!y;
```

### Using keywords as Identifiers
Here is what happenes when we use keywords as identifiers.
```c
#include <stdio.h>

int main() {
  // using void as name of variable (identifier)
  int void = 0;
  return 0;
}
```

```
keywords_as_identifiers.c: In function ‘main’:
keywords_as_identifiers.c:5:7: error: two or more data types in declaration specifiers
    5 |   int void = 0;
      |       ^~~~
keywords_as_identifiers.c:5:12: error: expected identifier or ‘(’ before ‘=’ token
    5 |   int void = 0;
      |            ^
```
Here the C compiler thought that we have mistakenly used two datatypes together and will give an error. Because `void` is also a datatype in C language.

##### Main difference between Identifier and Variable?
The identifier is just the name given to the variable, while a variable represents a memory field where some data is stored based on its data type. It's just like what is the difference between you and your name. Your name is just a word that people call you with,while you are a human being.