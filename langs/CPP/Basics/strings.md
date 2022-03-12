### C++ Strings

A `string` variable contains a collection of characters surrounded by double quotes.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string testVar = "Stringssss";
  cout << testVar;
	return 0;
}
```

```
❯ g++ strings1.cpp
❯ ./a.out
Stringssss% 
```

### Strings Concatenation

The `+` operator can be used between strings to add them together to make a new string. This is called **concatenation**.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string firstName = "one";
  string lastName = "two";
  string fullName = firstName + " " + lastName;
  cout << fullName;
  return 0;
}
```

```
❯ g++ strings_conc.cpp
❯ ./a.out
one two%  
```

### Append

A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the `append()` function.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main () {
  string firstName = "one ";
  string lastName = "two";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}
```

```
❯ g++ strings_conc_append.cpp
❯ ./a.out
one two% 
```

> It is up to you whether you want to use `+` or `append()`. The major difference between the two, is that the `append()` function is much faster. However, for testing and such, it might be easier to just use `+`.