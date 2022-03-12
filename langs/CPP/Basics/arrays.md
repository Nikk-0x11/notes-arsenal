### C++ Arrays

Arrays are used to store multiple values in a single variable,instead of declaring separate variables for each valuel. To declate an array, define the variable type, specify the name of the array followed by square brackets and specify the name of elements it should store.

Example
```cpp
string cats[5];
```

After that declaring a variable that will hold an array of 4 strings. Now to insert values to it, we can use an array literal - place the values in a comma - separated list, inside curly braces.

```cpp
string cats[5] = {"neko1", "neko2", "neko3", "neko4"};
```

Now to create an array of three integers you could write.

```cpp
int nekoNum[3] = {10, 20, 30};
```

#### Accessing array elements

Now that we've created the arrays, we can access the values from it by referring to the index number.

Example code ( Accessing first element of array acc. to index number. )
```cpp
#include <iostream>
using namespace std;

int main() {
  string cats[5] = {"neko1", "neko2", "neko3", "neko4"};
  cout << cats[0];
  return 0;
}
```

```
❯ g++ array_1.cpp
❯ ./a.out
neko1% 
```

#### Changing an array element

To change the value of a specific element, we can refer to the index number of the array element that we are willing to change.

```cpp
cats[0] = "nekoOwO";
```

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cats[5] ={"cat1", "cat2", "cat3", "cat4", "cat5"};
  cats[2] = "neko_here";
  cout << cats[2];
  return 0;
}
```

```
❯ g++ change_array_ele.cpp
❯ ./a.out
neko_here%
```

### Arrays and Loops

We can loop through array elements with the `for` loop.

Example
```cpp
string cats[5] = {"cat1", "cat2", "cat3", "cat4"};
	for (int i = 0; i < 4; i++) {
			cout << cars[i] << "\n";
			return 0;
		}
```

Example code ( loop thorugh an array )
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cats[5] = {"cat1", "cat2", "cat3", "cat4"};
  for (int i = 0; i < 4; i++) {
    cout << cats[i] << "\n";
  }
  return 0;
}
```

```
❯ g++ array_for_loop.cpp
❯ ./a.out
cat1
cat2
cat3
cat4
```

Example code ( loop thorugh an array )
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cats[5] = {"cat1", "cat2", "cat3", "cat4"};
  // for (int i = 0; i < 4; i++) {
  //  cout << cats[i] << "\n";
  // }
  for (int i = 0; i < 4; i++) {
    cout << i << ":-> " << cats[i] << "\n";
  }
  return 0;
}
```

```
❯ g++ array_for_loop.cpp
❯ ./a.out
0:-> cat1
1:-> cat2
2:-> cat3
3:-> cat4
```

#### Omit array size

We don't have to specify the size of the array. But if we don't then it will only be as big as the elemnets that are inserted into it.

```cpp
string cats[] = {"cat1", "cat2", "cat3", "cat4"}; // size of array will be 4
```

And if we specify the size however, the array will reserve the extra space.
```cpp
string cats[5] = {"cat1", "cat2", "cat3"}; // size of array is 5, even though it's only three elements inside it.
```
#### Omit elements on declaration

It is also possible to declate an array without specifying the elements on declaration, and add them later.

```cpp
string cats[5];
cats[0] = "cat1";
cats[1] = "cats2";
...
```

### Array size

To get the size of an array we can use the `sizeof()` operator;

Example
```cpp
int myNum[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNum);
```

Example code ( getting size of ana array )
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  int myNum[5] = {10, 20, 30, 40, 50};
  cout << sizeof(myNum);
  return 0;
}
```

```
❯ g++ array_size.cpp
❯ ./a.out
20% 
```

When we used the `sizeof()` operator we got `20` as output, when there are 5 elements in the array. It is because the `sizeof()` operator returns the size of a type in **bytes**. We know that an `int` is usually 4 bytes, So according to that if we calculate the value. `4 bytes x 5 elements = 20 bytes`.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  int myNum[5] = {10, 20, 30, 40, 50};
  // cout << sizeof(myNum);
  int getArrSize = sizeof(myNum) / sizeof(int);
  cout << getArrSize;
  return 0;
}
```

```
❯ g++ array_size.cpp
❯ ./a.out
5%
```