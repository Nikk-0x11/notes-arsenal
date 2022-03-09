A Datatype defines the type of data that is being used. Whenever we define a variable or use any data in the C language program, we have to specify the type of the data, so that the compiler knows what type of data to expect.

> For example, you may want to use a number like 1, 2, 100, or a decimal point number like 99.95, 10.5, or a text, like "Hewwo", all these values are handled differently by the C language compiler, hence, we use datatypes to define the type of data used in any program.

#### C Datatypes
Datatypes define type of data, which means the type o value it stores.

| Type | Example |
| -- | -- |
|	Basic | character, integer, floating-point, double |
| Derived | Array, structure, union, etc. |
| Enumeration | enums |
| Bool type | true or false | 
| void | Empty value |

**Datatype**
- Basic -> `char`, `int`, `float`, & `double`
- Derived -> `array`, `structure`, etc.
- Enumeration -> `enum`
- Bool type -> true or false
- void

#### C Primary Datatypes

The C language has 5 basic (primary and primitive) datatypes:
1. **Character** -> ASCII character set or generally a single alphabet like 'a', 'B', etc.
2. **Integer** -> Used to store whole numbers like 1, 2, 100, 1000, etc.
3. **Floating-point** -> Decimal point or real numbers value like 99.9, 10.5, etc.
4. **Double** -> Very large nuymeric values which are not allowed in Integer or Floating point type.
5. **Void** -> This means no value. This data type is mostly used when we define functioms.

| Datatype | Keyword |
| -- | -- |
| Character | `char` |
| Integer | `int` |
| Floatin-point | `float` |
| Double | `double` |
| Void | `void` |

**Datatype:-**
- `char` -> 'a', 'I', "A", etc.
- `int` -> `10`, `7007`, `1099`, etc.
- `float` -> `150.50`, `10.9`, etc.
- `double` -> `150.505050`
- `void` ->

Each datatype has a size defined in **bits/bytes** and has a **range** for the values that these data types can hold.

#### Size of different Datatypes

The size for different datatypes depends on the compiler and processor types, in short, it depends on the Computer on which you are running the C language and the version of the C compiler that you have installed.

##### char is 1 byte
The `char` datatype is **1byte** in size or **8bits**. This is mostly the same and is not affected by the processor or the compiler used.

##### int can be 2bytes/4bytes
There is a very easy way to remember the size for `int` datatype. The size of `int` datatype is usually equal to the word length of the execution environment of the program. In simpler words, for a **16-bit environment**, `int` is **16-bits** or **2-bytes** amd for a **32-bit environment**,`int` is **32-bits** or **4-bytes**.

##### float is 4 bytes
The `float` datatype is 3 bytes or 32 bits in size. It is single-precision data type that is used to hold decimal values. It is used for storing large values.

> `float` is a faster data type as compared to `double`, because `double` datatype works with very large values, hence it is slow.

##### double is 8 bytes
The `double` datatype is 8 bytes or 64 bits in size. It can store values that are double the size of what a float datatype can store, hence it is called `double`. In the 64 bits, **1 bit** is for **sign** representation, **11 bits** for the **exponent**, and the rest **52 bits** are used for the **mantissa**. The `double` data type can hold approximately **15 to 17 digits**, before the decimal and after the decimal.

##### void is 0 bytes
The `void` datatype means nothing, hence it doesn't have a size.

### C Datatype modifiers
In the C language, there are 4 datatype modifiers, that are used along with the basic datatypes to categorize them further and to make the primary datatype more specific.

- **signed**
- **unsigned**
- **long**
- **short**

**signed** and **unsigned** are used to represent the **signed (+ and -)** and **unsigned (only +) values** for any datatype. And **long** and **short** affects the **range of the values** for any datatype.
Example:- `signed int`, `unsigned int`, `short int`, `long int`are all valid datatypes in the C language.

When we want to print the value for any variable with any data type, we have to use a **format specifier** in the `printf()` statement.

##### What happens if the value is out of Range?
If we try to assign a value to any datatype which is more than the allowed range of value, then the C language compiler will give an error. Here is a simple code example to show this

```c
#include <stdio.h>

int main() {
   // allowed value up to 65535
   unsigned short int x = 65536;
  
   return 0;
}
```

> When a **type modifier is used without any data type**, then the `int` data type is set as the default data type. So, `unsigned` means `unsigned` `int`, `signed` means `signed` `int`, `long` means `long` `int`, and `short` means `short` `int`.

### What does `signed` and `unsigned` means ?
In simple words, the `unsigned` modifier means **all positive values**, while the `signed` modifier means **both positive and negative values**.

When the compiler gets a numeric value, it converts that value into a binary number, which means a combination of 0 and 1. For example, **32767** in binary is **01111111 11111111**, and **1** in binary is **01 (or 0001)**, **2** is **0010**, and so on.

In the case of a **signed integer**, the **highest order bit** or the first digit from left (in binary) is used as the **sign flag**. If the **sign flag is 0**, the number is **positive**, and if it is **1**, the number is **negative**.

> And because one bit is used for showing if the number is positive or negative, hence there is one less bit to represent the number itself, hence the range is less.

For **signed int**, **11111111 11111111 means -32,767** and because the first bit is a **sign flag** to mark it as a negative number, and rest represent the number. Whereas in the case of **unsigned int**, **11111111 11111111** means **65,535**.

#### C Derived Datatypes
While there are 5 primary data types, there are some derived data types too in the C language which are used to store complex data. Derived datatypes are nothing but primary datatypes but a little twisted or grouped together like an **array**, **structure**, **union** and **pointers**.