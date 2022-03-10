### C++ User Input
So far we know that `cout` is used to print values. Now we will use `cin` to get user input. `cin` is a predefined variable that reads data from the keyboards with the extraction operator (`>>`).

> `cout` is pronounced "see-out". Used for output, and uses the insertion operator (`<<`)
> `cin` is pronounced "see-in", Used for input, and uses the extraction operator (`>>`)

```cpp
#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x; // Displays the user input
  return 0;
}
```

```
❯ g++ user_inp1.cpp
❯ ./a.out
Type a number: 10
Your number is: 10%
```

### Project - **Simple_Calculator**

1. Take 2 numbers from user.
2. Ask for calc type (`+`, `-`, `*`, `/`).
3. Perform the calculation according to user inputs.
4. output first, second and result number.
5. Ask for exit or perform another calculation