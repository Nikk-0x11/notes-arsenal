# Basic Input / Output

### I/O Redirection

In C & C++ we could use the function, `freopen()` to redirect an existing FILE pointer to another stream.

```cpp
FILE * freopen (const char * filename, const char * mode, FILE * stream);
```

```cpp
freopen ("test.txt", "w", stdout);
```

while this method is still supported in C++ and C++ being an object-oriented programming language gives us the ability to not only define our own streams but also redirect standard streams. Thus, a stream is an object whose behaviour is defined by a class. Thus, anything that behaves like a stream is also a stream.

Main stream objects:

- `istream`
- `ostream`
- `iostream`

All the classes, as well as file stream classes, derived from the classes: `ios` and `streambuf`. Thus, `filestream` and IO stream objects behave similarly.

All stream objects also have an associated data member of class `streambuf`. Simply put `streambuf` object is the buffer for the stream. When we read data from a stream, we don’t read it directly from the source, but instead, we read it from the buffer which is linked to the source. Similarly, output operations are first performed on the buffer, and then the buffer is flushed when needed.

C++ allows us to set the stream buffer for any stream. So the task of redirecting the stream simply reduces to changing the stream buffer associated with the stream. Thus, to redirect a stream A to B we need to do following things:

1. Get the stream buffer of A and store it somewhere.
2. Set the stream buffer of A to the stream buffer of B.
3. If needed to reset the stream buffer of A to its previous stream buffer.

We can use the function `ios::rdbuf()` to perform two operations.

1.  `stream_object.rdbuf()`: Returns pointer to the stream buffer of `stream_object`
2. `stream_object.rdbuf(streambuf * p)`: Sets the stream buffer to the object pointer by p

---

### Basic Input and Output

CPP got some libraries that provide us with many ways for performing input and output. In CPP input and output are performed in the form of a sequence of bytes or more commonly known as streams.

- **Input Stream:** If the direction of flow of bytes is from the device to the main memory then this process is called input.
- **Output Stream:** If the direction of flow of bytes is opposite, i.e. from main memory to device then this process is called output.

```cpp
#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	cout << "input value for a was " << a << endl;
	return 0;
}
```

```
➜  cpp g++ test.cpp && ./a.out
10
input value for a was 10
```

---

### Clearing the input buffer

**What is buffer?**

A temporary storage area is called a buffer. All standard input and output decides contain an input and output buffer. In standard C/C++, streams are buffered, for example in the case of standard input,  when we press the key on the keyboard, it isn’t send to out program, rather it is buffered by the operating system till the time is allotted to that program.

**How does it affect Programming?**

On various occasions, we may need to clean the unwanted buffer so as to get the next input in the desired container and not in the buffer of the previous variable. For example, in the case of C after encountering `scanf()` , if we need to input a character array or character, and in the case of C++, after encountering the `cin` statement, we require to input a character array or a string, we require to clear the input buffer or else the desired input is occupied by a buffer of the previous variable, not by the desired container. On pressing “Enter” on the output screen after the first input, as the buffer of the previous variable was the space for a new container, the program skips the following input of the container.

**C Implementation**

```c
// C Code to explain why not
// clearing the input buffer
// causes undesired outputs
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[80], ch;

	// scan input from user
	printf("enter an array string here: ");
	scanf("%s", str);

	// scan character from user
	printf("enter a character here: ");
	ch = getchar();

	//printing character array
	printf("%s\n", str);

	// this doesn't print the character
	printf("entered character was: ");
	printf("%c", ch);

	return 0;
}
```

```
➜  c gcc test.c && ./a.out
enter an array string here: testing
enter a character here: testing
entered character was:
```

**C++ Implementation**

```cpp
// C++ Code to explain why
// not clearing the input
// buffer causes undesired
// outputs

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a;
	char ch[80];

	// enter input from user
	cin >> a;

	// get input from user
	cin.getline(ch,80);

	// prints 4
	cout << a << endl;

	// printing string
	cout << ch << endl;

	return 0;
}
```

```
➜  cpp g++ test.cpp && ./a.out
17
17
```

In both these codes, the output is not printed as desired. The reason for this is an occupied buffer. The `/n` character does remains there in buffer an is read as the next input.

**How can it be resolved?**

In case of C:

1. Using `while((getchar()) ~= '\n');` adding this reads the buffer character till the end and discards them (including newline) and using it after the `scanf()` statement clears the input buffer and allows the input in the desired container.

```c
// C Code to explain why not
// clearing the input buffer
// causes undesired outputs
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[80], ch;

	// scan input from user
	printf("enter an array string here: ");
	scanf("%s", str);

	// scan character from user
	printf("enter a character here: ");
	
	// flushes the standard input (clears the input buffer)
	while ((getchar()) != '\n');
	ch = getchar();

	//printing character array
	printf("%s\n", str);

	// this doesn't print the character
	printf("entered character was: ");
	printf("%c", ch);

	return 0;
}
```

```
➜  c gcc test.c && ./a.out
enter an array string here: test
enter a character here: a
test
entered character was: a%
```

1. **Using `fflush(stdin)`** after `scanf()` statement also clears the input buffer but use of it is avoided and is termed to be `undefined` for input stream as per the C++11 standards.
    
    **In the case of C++**
    
    1. Using `cin.ignore(numeric_limits::max(), '\n');` after the `cin` statement discards everything in the input stream including the newline.
        
        ```cpp
        // C++ Code to explain how
        // "cin.ignore(numeric_limits
        // <streamsize>::max(),'\n');"
        // discards the input buffer
        #include<iostream>
        
        // for <streamsize>
        #include<ios>	
        
        // for numeric_limits
        #include<limits>
        using namespace std;
        
        int main()
        {
        	int a;
        	char str[80];
        	
        	// Enter input from user
        	// - 4 for example
        	cin >> a;
        	
        	// discards the input buffer
        	cin.ignore(numeric_limits<streamsize>::max(),'\n');
        	
        	// Get input from user -
        	// GeeksforGeeks for example
        	cin.getline(str, 80);
        	
        	// Prints 4
        	cout << a << endl;
        	
        	// Printing string : This
        	// will print string now
        	cout << str << endl;
        
        	return 0;
        }
        ```
        
        ```
        ➜  cpp g++ test.cpp && ./a.out
        4
        testing
        4
        testing
        ```
        
    2. Using `cin.sync()` after the `cin` statement discards all that is left in the buffer. Though `cin.sync()` does not work in all implementations (according to C+11 and above standards)
        
        ```cpp
        // C++ Code to explain how " cin.sync();"
        // discards the input buffer
        #include<iostream>
        #include<ios>	
        #include<limits>
        using namespace std;
        
        int main()
        {
        	int a;
        	char str[80];
        	
        	// Enter input from user
        	// - 4 for example
        	cin >> a;
        	
        	// Discards the input buffer
        	cin.sync();
        	
        	// Get input from user -
        	// GeeksforGeeks for example
        	cin.getline(str, 80);
        	
        	// Prints 4
        	cout << a << endl;
        	
        	// Printing string - this
        	// will print string now
        	cout << str << endl;
        
        	return 0;
        }
        ```
        
        ```
        ➜  cpp g++ test.cpp && ./a.out
        4
        4
        ```
        
    3. Using `cin >> ws` after `cin` statement tells the compiler to ignore buffer and also to discord all the whitespaces before the actual content of string or character array.
        
        ```cpp
        // C++ Code to explain how "cin >> ws"
        // discards the input buffer along with
        // initial white spaces of string
        
        #include<iostream>
        #include<vector>
        using namespace std;
        
        int main()
        {
        	int a;
        	string s;
        	
        	// Enter input from user -
        	// 4 for example
        	cin >> a;
        	
        	// Discards the input buffer and
        	// initial white spaces of string
        	cin >> ws;
        	
        	// Get input from user -
        	// GeeksforGeeks for example
        	getline(cin, s);
        	
        	// Prints 4 and GeeksforGeeks :
        	// will execute print a and s
        	cout << a << endl;
        	cout << s << endl;
        
        	return 0;
        }
        ```
        
        ```
        ➜  cpp g++ test.cpp && ./a.out
        4
        testing
        4
        testing
        ```