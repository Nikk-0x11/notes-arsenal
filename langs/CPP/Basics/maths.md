### C++ Math

C++ has many functions that allows us to perform maths calculations.

#### max and min

the `max(x, y)` function is used to find the highest value of x and y.

```cpp
cout << max(1, 7);
```

Similarly, we can use `min(x,y)` function to find the lowest value of x and y.

```cpp
cout << min(1, 7);
```

### `<cmath> header`

More math functions in CPP, such as `sqrt`, `round` and `log` require `<cmath>` header file.

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << sqrt(64);
  cout << round(2.6);
  cout << log(2);
  return 0;
}
```

```
❯ g++ cmath_head.cpp
❯ ./a.out
830.693147% 
```

There are more math functions that we can lookup on google ?