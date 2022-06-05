# Introduction

## C Keywords and Identifiers

#### **Character set**

A character set is a set of alphabets, letters and some special characters that are valid in C language.

#### **Alphabets**

```c
Uppercase: A B C ................................... X Y Z
Lowercase: a b c ...................................... x y z
```

C accepts both lowercase and uppercase alphabets as variables and functions.

#### **Digits**

```c
0 1 2 3 4 5 6 7 8 9
```

#### **Special Characters**

```c
,	<	>	.	_
(	)	;	$	:
%	[	]	#	?
'	&	{	}	"
^	!	*	/	|
-	\	~	+
```

#### **White space characters**

Blank space, newline, horizontal tab, carriage return and form feed.

## C keywords

Keywords are predefined, reserved words used in programming that have special meanings to the compiler. Keywords are part of the syntax and they cannot be used as an identifier

example:

```c
int money;
```

Here, `int` is a keyword that indicates `money` is a variable of type `int` (integer).

As C is a case sensitive language, all keywords must be written in lowercase. Below is a list of all keywords allowed in ANSI C.

```c
auto
double
int
struct
break
else
long
switch
case
enum
register
typedef
char
extern
return
union
continue
for
signed
void
do
if
static
while
default
goto
sizeof
volative
const
float
short
unsigned
```

#### C Identifiers

Identifiers refers to name given to entities such as variables, function, structures, etc.

Identifiers must be unique. They are created to give a unique name to an entity to identify it during the execution of the program.

example:

```c
int money;
double accountBalance;
```

Here, `money` and `accountBalance` are identifiers.

Also, Identifier names must be different from keywords. We cannot use `int` as an identifier because `int` is a keyword.

**Rules for naming identifiers**

1. A valid identifier can have letters (both uppercase and lowercase letters), digits and underscores.

2. The first letter of an identifier should be either a letter or an underscore.

3. You cannot use keywords like int, while etc. as identifiers.

4. There is no rule on how long an identifier can be. However, you may run into problems in some compilers if the identifier is longer than 31 characters.

---

## Variables, Constants and Literals

#### **Variables**

A variable is a container to hold data.

To indicate the storage area, each variable should be given a unique name (identifier), Variable names are just the symbolic representation of a memory location.

example:

```c
int playScore = 95;
```

Here, `playScore` is variable of `int` type. The variable is assignment an integer value `95`.

The value can be changed, hence the name variable.

```c
char ch = 'a';
ch = 1;
```

**Rules for naming a variable**

1. A variable name can only have letters (both uppercase and lowercase letters), digits and underscore.

2. The first letter of a variable should be either a letter or an underscore.

3. There is no rule on how long a variable name (identifier) can be. However, you may run into problems in some compilers if the variable name is longer than 31 characters.

> **Note:** You should always try to give meaningful names to variables. example: `firstName` is a better variable name than `fn`.

C is a strongly typed language. This means that the variable type cannot be changed once it is declared. example:

```c
int number = 5;  // integer variable
number = 5.5;    // error (floating)
double number;   // error
```

Here, the type of `number` variable is `int`. You cannot assign a floating-point (decimal) value `5.5` to this variable. Also, you cannot redefine the data type of the variable to `double`. By the way, to store the decimal values in C, you need to declare its type to either `double` or `float`.

#### **Literals**

Literals are data used for representing fixed values. They can be used directly in the code.

example: `1`, `2.5`, `'c'` etc.

Here, `1`, `2.5` and `'c'` are literals. Why? You cannot assign different values to these terms.

1. **Integers**

An integer is a numeric literal(associated with numbers) without any fractional or exponential part. There are three types of integer literals in C programming:

- decimal (base 10)
- octal (base 8)
- hexadecimal (base 16)

```c
Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc
Hexadecimal: 0x7f, 0x2a, 0x521 etc
```

2. **Floating-point Literals**

A floating-point literal is a numeric literal that has either a fractional form or an exponent form.

```c
-2.0
0.0000234
-0.22E-5
```

> **Note:** `E-5 = 10 ^ -5`

3. **Characters**

A character literal is created by enclosing a single character inside single quotation mark.

example: `'a'`, `'m'`, `'p'` etc.

4. **Escape Sequences**

Sometimes it is necessary to use characters that cannoy be typed or has special meaning in C programming.

example: newline(enter), tab, question mark, etc.

```
\b	Backspace
\f	Form feed
\n	Newline
\r	Return
\t	Horizontal tab
\v	Vertical tab
\\	Backslash
\'	Single quotation mark
\"	Double quotation mark
\?	Question mark
\0	Null character
```

5. **String Literals**

A string literal is a sequence of characters enclosed in double-quote marks.

example:

```
"good"                     // string constant
""                         // null string constant
"      "                   // string constant of six white space
"x"                        // string constant having a single character.
"Earth is round\n"         // prints string with a newline
```

#### **Constants**

If we want to define a variable whose value cannot be changed, we can use the `const` keyword. This will create a constant.

example:

```c
const double PI = 3.14;
```

`PI` is a symbolic constant, its value cannot be changed.

```c
const double PI = 3.14;
PI = 2.9;   // error
```

---

## Data Types

In C, data types are declarations for variables. This determines the type and size of data associated with variable.

example:

```c
int testVar;
```

Here, `testVar` is a variable of `int` (integer) type. The size of `int` is 4 bytes.

#### **Basic Types**

| Type                   | Size (bytes)                  | Format Specifier |
| ---------------------- | ----------------------------- | ---------------- |
| int                    | at least 2, usually 4         | %d, %i           |
| char                   | 1                             | %c               |
| float                  | 4                             | %f               |
| double                 | 8                             | %lf              |
| short int              | 2 usually                     | %hd              |
| unsigned int           | at least 2, usually 4         | %u               |
| long int               | at least 4, usually 8         | %ld, %li         |
| long long int          | at least 8                    | %lld, %lli       |
| unsigned long int      | at least 4                    | %lu              |
| unsigned long long int | at least 8                    | %llu             |
| signed char            | 1                             | %c               |
| unsigned char          | 1                             | %c               |
| long double            | at least 10, usually 12 or 16 | %Lf              |

#### **int**

Integers are whole numbers that can have both zero, positive and negative values but no decimal values.

example: `0`, `-5`, `10`

we use `int` for declaring an integer variable.

```c
int someVar;
```

We can declare multiple variables at once in C.

example:

```c
int someVar, anotherVar;
```

The size of `int` is usually 4 bytes (32bits). And it can take `w^32` distinct states from `-2147483648` to `2147483647`.

#### **float and double**

`float` and `double` are used to hold real numbers.

```c
float someVar;
double someVarAgain;
```

In C, floating-point numbers can also be represented in exponential.

example:

```c
float normalizationFactor = 22.442e2;
```

> Difference between `float` and `double`?
> The size of `float` is 4 type. And the size of `double` is 8 bytes.

#### **char**

Keyword `chat` is used for declaring character type variables.

example:

```c
char word = 'n';
```

The size of the character variable is 1 byte.

#### **void**

`void` is an incomplete type. It means "nothing" or "no type". You can think of void as **absent**.

example:

if a function is not returning anything, its return type should be `void`.

> **Note:** We cannot create variables of `void` type.

#### **short and long**

If you need to use a large number, you can use a type specifier `long`.

```c
long a;
long long b;
long double c;
```

Here variables `a` and `b` can store integer values. And, `c` can store a floating-point number.

If you are sure, only a small integer (`[-32,767, +32,767]` range) will be used, you can use `short`.

```c
short d;
```

We can always check the size of a variable using the `sizeof()` operator.

```c
#include <stdio.h>

int main()
{
  short a;
  long b;
  long long c;
  long double d;

  printf("size of short = %ld bytes\n", sizeof(a));
  printf("size of long = %ld bytes\n", sizeof(b));
  printf("size of long long = %ld bytes\n", sizeof(c));
  printf("size of long double = %ld bytes\n", sizeof(d));

  /*
  warning:
  format ‘%d’ expects argument of type ‘int’,
  but argument 2 has type ‘long unsigned int’
  */

  return 0;
}
```

#### signed and unsigned

In C, `signed` and `unsinged` are type modifiers. We can alter the data storage of a data type by using them:

- `signed` - allows for storage of both positive and negative numbers.
- `unsigned` - allows for storage of only positive numbers.

example:

```c
#include <stdio.h>

int main()
{
  // valid codes
  unsigned int x = 35;
  int y = -35; // signed int
  int z = 36;  // signed int

  // invalid code: unsigned int cannot hold negative integers
  unsigned int num = -35;

  printf("valid:\npositive unsigned int: %d\n", x);
  printf("negative int: %d\n", y);
  printf("positive int: %d\n", z);
  printf("\ninvalid:\nnegative unsigned int: %d\n", num);
  return 0;
}
```

Here, the variables `x` and `num` can hold only zero and positive values because we have used the `unsigned` modifier.

Considering the size of `int` is 4 bytes, variable `y` can hold values from `-2^31` to `2^31-1`, whereas variable `x` can hold values from `0` to `2^32-1`.

---

## Derived Data Types

Data types that are derived from fundamental data types are derived types.

example: arrays, pointers, function types, structures, etc.
