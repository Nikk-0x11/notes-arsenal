### C++ Loops

Loops can execute a block of code as long as a specified condition is reached. Loops are handy because they save time, reduce errors, and they make code more readable.

### While Loop

`while` loops loops through a block of code as long as a specified condition is `true`

```cpp
while (condition) {
	// code block to be executed
}
```

```cpp
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    cout << i << "\n";
    i++;
  }
  return 0;
}
```

```
❯ g++ while.cpp
❯ ./a.out
0
1
2
3
4
5
6
7
8
9
```

### do/while loop

`do/while` loop is a variant of the `while` loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

```cpp
do {
	// code block to be executed
}
while (condition);
```

```cpp
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 10);
  return 0;
}
```

```
❯ g++ do_while.cpp
❯ ./a.out
0
1
2
3
4
5
6
7
8
9
```

> Do not forget to increase the variable used in the condition, otherwise the loop will never end!


### for loop

when you know exectly how many times you want to loop through a block of code, use the `for` loop instead of a `while` loop

```cpp
for (statement 1; statement 2; statement 3) {
	// code block to be executed
}
```

Example ( print numbers smaller than 5 )
```cpp
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 5; i++) {
    cout << i << "\n";
  }
  return 0;
}
```

```
❯ g++ for_loop.cpp
❯ ./a.out
0
1
2
3
4
```

Anoter example of for loop ( print even numbers upto 10 )
```cpp
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
  }
  return 0;
}
```

```
❯ g++ even_for_loop.cpp
❯ ./a.out
0
2
4
6
8
10
```