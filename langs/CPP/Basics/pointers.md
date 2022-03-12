### Pointers

#### References

A reference variable is a "reference" to an existing variable, and it is created with the `&` operator.

```cpp
string food = "Pizza"; // food variable
string &meal = food; // reference to food
```

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n"; // Outputs Pizza
  cout << meal << "\n"; // Outputs Pizza
  return 0;
}
```

```
❯ g++ pointers_refer.cpp
❯ ./a.out
Pizza
Pizza
```

#### Memory Address

Above the `&` operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer. When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address. To access it, use the `&` operator, and the result will represent where the variable is stored

```cpp
string food = "Pizza";  
cout << &food; // outputs the memory address.
```

Eample code ( memory address )
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  cout << &food;
  return 0;
}
```

```
❯ g++ pointers_mem.cpp
❯ ./a.out
0x7ffd348647c0% 
```

#### Creating pointers

A pointer is a variable that stores the memory address as its value. A pointer variable points to a datatype like `int` or `string` of the same type, and is created with the `*` operator. The address of the variable you're working with is assigned to the pointer.

Example code of getting the memory address of a variable.
```cpp
string food = "Pizza"; // A food variable of type string  
  
cout << food; // Outputs the value of food (Pizza)  
cout << &food; // Outputs the memory address of food
```

Example code of pointer usage
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza"; // A food variable of type string
  string* ptr = &food; // A pointer variable, with the name ptr, that stores the address of food
	
	// Output the value of food (Pizza) 
  cout << food << "\n";
	// Output the memory address of food 
  cout << &food << "\n";
	// Output the memory address of food with the pointer 
  cout << ptr << "\n";

  return 0;
}
```

```
Pizza
0x7ffd71cadf30
0x7ffd71cadf30
```

There are three ways to declare a pointer variable, but the first way is preferred.

```cpp
string* mystring; // Preferred  
string *mystring;  
string * mystring;
```

#### Dereference

##### Get memory address and value
Above, we used the pointer variable to get the memory address of a variable (used together with the `&` **reference** operator). However, you can also use the pointer to get the value of the variable, by using the `*` operator (the **dereference** operator).

Sample code
```cpp
string food = "Pizza"; // Variable declaration
string* ptr = &food; // Pointer declaration

// Reference: Output the memory address of food with the pointer
cout << ptr << "\n";  
  
// Dereference: Output the value of food with the pointer (Pizza)  
cout << *ptr << "\n";
```

Example code ( get memory address and value )

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  // Reference: output the memory address of food with the pointer
  cout << ptr << "\n";
  // Dereference: output the value of the food with the pointer (Pizza)
  cout << *ptr << "\n";

  return 0;
}
```

```
❯ ./a.out
0x7fffd942b7b0
Pizza
```

#### Modifying pointer values

We can also change the pointer's value. but note tht this will also change the vlue of the original variable.

Example code ( **modify pointer values** )
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Access the memory address of food and output its value
  cout << *ptr << "\n";
  
  // Change the value of the pointer
  *ptr = "Hamburger";
  
  // Output the new value of the pointer
  cout << *ptr << "\n";
  
  // Output the new value of the food variable
  cout << food << "\n";
  return 0;
}
```

```
❯ g++ pointers_modify.cpp
❯ ./a.out
Pizza
0x7ffe42e40260
Pizza
Hamburger
Hamburger
```