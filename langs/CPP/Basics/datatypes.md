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

### Numeric Datatypes
#### int
```cpp
int myNum = 1000;
cout << myNum;
```

#### float
```cpp
float myNum = 5.57;
cout << myNum;
```

#### double
```cpp
double myNum = 19.99;
cout << myNum;
```

> `float` vs `double`
> 
> The **precision** of a floating point value indicates how many digits the value can have after the decimal point. The precision of `float` is only six or seven decimal digits, while `double` variables have a precision of about 15 digits. Therefore it is safer to use `double` for most calculations.

### Boolean Datatypes

A boolean data type is declared with the `bool` keyword and can only take the values `true` or `false`. When the value is returned, `true` = `1` and `false` = `0`.

```cpp
bool isCodingFun = true;  
bool isFishTasty = false;  
cout << isCodingFun; // Outputs 1 (true)  
cout << isFishTasty; // Outputs 0 (false)
```

### Character Types

The `char` datatype is used to store a single datatype.

```cpp
char myGrade = 'B';  
cout << myGrade;
```
We can also use ASCII values to display certain characters.

```cpp
char a = 65, b = 66, c = 67;  
cout << a;  
cout << b;  
cout << c;
```

### String Datatypes

The `string` type is used to store a sequence of characters (text). This is not a built-in type, but it behaves like one in its most basic usage. The values must be closed in side double quotes.

To use strings, we must include an additional header file to our program.

```cpp
// Include the string library  
#include <string>  
  
// Create a string variable  
string greeting = "Hello";  
  
// Output string value  
cout << greeting;
```

```cpp
string greeting = "Hello";  
cout << greeting;
```