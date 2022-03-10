### C++ Datatypes
```cpp
int myNum = 5; // Integer (whole number)  
float myFloatNum = 5.99; // Floating point number  
double myDoubleNum = 9.98; // Floating point number  
char myLetter = 'D'; // Character  
bool myBoolean = true; // Boolean  
string myText = "Hello"; // String
```

### Basic Datatypes
| Datatype | Size | Description |
| -------- | ---- | ----------- |
| `boolean` | 1 byte | Stores true or false values |
| `char` | 1 byte | Stores a single character/letter/number, ASCII values. |
| `int` | 2 or 4 bytes | Stores whole numbers, witchout decimals. |
| `float` | 4 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits |
| `double` | 8 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits | 

### C++ Operators
Operators are used to perform operations on variables and values.

```cpp
int sum1 = 100 + 50; // 150 (100 + 50)  
int sum2 = sum1 + 250; // 400 (150 + 250)  
int sum3 = sum2 + sum2; // 800 (400 + 400)
```

| Operator | Name | Description | Example |
| -------- | ---- | ----------- | ------- |
| `+` | Addition | Adds together two values | `x + y` |
| `-` | Subtraction | Subtracts one value from another | `x - y` |
| `**` | Multiplication | Multiplies two values | `x * y` |
| `/` | Division | Divides one value by another | `x / y` |
| `%` | Modulus | Returns the division remainder | `x % y` |
| `++` | Increment | Increases the value of a variable by 1 | `++x` |
| `--` | Decrement | Decreases the value of a variable by 1 | `--x` |

| Operator | Example | Same As |
| -------- | ------- | ------- |
| `=` | x = 3 | x = 3 |
| `+=` | x += 3 | x = x + 3 |
| `-=` | x -= 3 | x = x - 3 |
| `*=` | x `*=` 3 | x = x `*` 3
| `/=` | x /= 3 | x = x / 3 |
| `%=` | x %= 3 | x = x % 3 |
| `&=` | x &= 3 | x = x & 3 |
| `<pipe> =` | x `<pipe> =` 3 | x = x `<pipe>` 3 |
| `^=` | x ^= 3 | x = x ^ 3 |
| `>>=` | x >>= 3 | x = x >> 3 |
| `<<=` | x <<= 3 | x = x << 3 |

`<pipe>` is |

| Operator | Name | Example |
| -- | -- | -- |
| == | Equal to | x == y |
| != | Not equal | x != y |
| > | Greater than | x > y |
| < | Less than | x < y |
| >= | Greater than or equal to | x >= y |
| <= | Less than or equal to | x <= y |

| Operator | Name | Description | Example |
| -- | -- | -- | -- |
| `&&` | Logical and | Returns true if both statements are true | `x < 5 && x < 10` |
| `<pipe><pipe>` | Logical or | Returns true if one of the statements is true | `x < 5 <pipe><pipe> x < 4` |
| `!` | Logical not | Reverse the result, returns false if the result is true | `!(x < 5 && x < 10)` |