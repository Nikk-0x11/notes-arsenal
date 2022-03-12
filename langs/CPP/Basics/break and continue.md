### break and continue

#### break statement
`break` statement is used to jump out of a `switch` statement. The `break` statement can also be used to jump out of a loop.

Example of `break` statement
```cpp
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i <= 10; i++) {
    if (i == 5) {
      break;
    }
    cout << i << "\n";
  }
  return 0;
}
```

```
❯ g++ break.cpp
❯ ./a.out
0
1
2
3
4
```

#### continue statement
`continue` statement breaks one iteration in the loop, if a specific condition occurs, and continues with the next iteration in the loop.

Example code of `continue` statement.
```cpp
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      continue;
    }
    cout << i << "\n";
  }
  return 0;
}
```

```
❯ g++ continue.cpp
❯ ./a.out
0
1
2
3
4
6
7
8
9
```

#### break in while loop

We can also use `break` and `continue` in while loop.

Example ( `break` statement in `while` loop )
```cpp
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    cout << i << "\n";
    i++;
    if (i == 4) {
      break;
    }
  }
  return 0;
}
```

```
❯ g++ break_while.cpp
❯ ./a.out
0
1
2
3
```

Example ( `continue` statement in `while` loop )
```cpp
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    if (i == 5) {
      i++;
      continue;
    }
    cout << i << "\n";
    i++;
  }
  return 0;
}
```

```
❯ g++ continue_while.cpp
❯ ./a.out
0
1
2
3
4
6
7
8
9
```