## Introduction

### C Keywords and Identifiers

**Character set**

A character set is a set of alphabets, letters and some special characters that are valid in C language.

**Alphabets**

```c
Uppercase: A B C ................................... X Y Z
Lowercase: a b c ...................................... x y z
```

C accepts both lowercase and uppercase alphabets as variables and functions.

**Digits**

```c
0 1 2 3 4 5 6 7 8 9
```

**Special Characters**

```c
,	<	>	.	_
(	)	;	$	:
%	[	]	#	?
'	&	{	}	"
^	!	*	/	|
-	\	~	+
```

**White space characters**

Blank space, newline, horizontal tab, carriage return and form feed.

### C keywords

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

### C Identifiers

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
