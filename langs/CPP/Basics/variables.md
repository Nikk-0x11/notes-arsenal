### C++ Variables

Variables are containers for storing data values. In C++, there are different types of variables.
- `int` -> stores integers (whole numbers), without decimals, such as 123 or -123.
- `double` -> stores floating point numbers, with decimals, such as 19.99 or -19.99.
- `char` -> stores single character, such as 'a' or 'B'. Char values are surrounded by single quotes.
- `string` - stores text, such as "Hello World". String values are surrounded by double quotes.
- `bool` - stores values with two states: true or false.

### Declaring(Creating) Variables
The format for creating variable is
```
type variableName = value;
```
**Example 1**
```cpp
#include <iostream>
using namespace std;

int main() {
  int myNum = 69;
  cout << myNum;
  return 0;
}
```
```
❯ g++ int_ex1.cpp
❯ ./a.out
69%
```
**Example 2**
```cpp
#include <iostream>
using namespace std;

int main() {
  int myNum;
  myNum = 15;
  cout << myNum;
  return 0;
}
```
```
❯ g++ int_ex2.cpp
❯ ./a.out
15%   
```
**Example 3**
```cpp
#include <iostream>
using namespace std;

int main() {
  int myNum = 10;
  myNum = 10;
  cout << myNum;
  return 0;
}
```
```
❯ g++ int_ex3.cpp
❯ ./a.out
10%   
```
#### Display Variables
The `cout` object is used together with the `<<` operator to display variables. To combine both text and variables, spearate them with the `<<` operator.

```cpp
#include <iostream>
using namespace std;

int main() {
  int myAge = 17;
  cout << "I am " << myAge << " years old.";
  return 0;
}
```
```
❯ g++ display_var1.cpp
❯ ./a.out
I am 17 years old.%    
```

##### Add two vars
```cpp
#include <iostream>
using namespace std;

int main(){
  int x = 10;
  int y = 20;
  int sum = x + y;
  cout << sum;
  return 0;
}
```
```
❯ g++ add_vars.cpp
❯ ./a.out
30%             
```

##### Declaring multiple vars
```cpp
#include <iostream>
using namespace std;

int main() {
  int x = 5, y = 10, z = 15;
  cout << x + y + z;
  return 0;
}
```
```
❯ g++ dec_multiple_vars.cpp
❯ ./a.out
30%
```

### C++ Identifiers
All C++ variables must be identified with unique names. These unique names are called identifiers. Identifiers can be short names or more descriptive names. It is recommended to use descriptive names in order to create understandable and mantainable code.

Example:
```cpp
// Good Practice
int minutesPerHour = 60
	
// OK, but not easy to understand what m actually is
int m = 60;
```

The general rules for naming variables are:
- Names can container letters, digits and underscores.
- Names nust begin with a letter or an underscore.
- Names are case sensitive (`myVar` and `myvar` are different variables.)
- Names cannot contain whitespace or special characters like !, #, %, etc.
- Reserved words (like C++ keywords, such as `int`) cannot be used as names.

### Constants
When you don't want to override existing variable values, use the `const` keyword (this will declare the variable as "constant", which means **unchangeable and read-only.**)

**Example:-**
```cpp
#include <iostream>
using namespace std;

int main() {
  const int myNum = 15; // Defined myNum with const
  myNum = 10; // Should give a read-only error
  cout << myNum;
  return 0;
}
```
```
❯ g++ const.cpp
const.cpp: In function ‘int main()’:
const.cpp:6:9: error: assignment of read-only variable ‘myNum’
    6 |   myNum = 10; // Should give a read-only error
      |   ~~~~~~^~~~
```