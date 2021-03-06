### Basics of CPP

C++ is a compiled language. For a program to run, its source text has to be processed by a compiler, producing object files, which are combined by a linked yielding an executable program. A C++ program typically consists of many source code files also called source files.

```
source file 1 --> compiler --> object file 1
                                              --> link --> executable file.
source file 2 --> compiler --> object file 2
```

An executable program is created for a specific hardware.system combination; it is not portable only the source code is portable and can be ran on variety of operating systems.

C++ standard defines two kinds of entities:

- core language feature. example: buil-in types `char` and `int` & loops `for-statements` and `while-statements`
- standard-library components. example: containers `vector` and `map` & I/O operations `<<` and `getline()`

The standard-library components in C++ can be implemented with C++ itself and is with very minor use of machine code for things such as thread context switching. This implies that C++ is sufficiently expressive and efficient for the most demanding systems programming tasks.

C++ is a statically typed language. That is the type of every entity (object, value, name and expression) must be known to the compiler at it's point of use. The type of an object determines the set of operations applicable to it.

---

### Hello, World

```cpp
int main() {  }
```

This is a simple function in C++. This defines a function called `main`, which takes no arguments and does nothing. Curly braces express grouping in C++. Here they indicates the start and end of the funciton body.

Every C++ program most have exactly one global function named `main()`. The program starts by executing that function. The int value returned by `main()`.

```cpp
#include <iostream>

int main()
{
  std::cout << "hello, world!\n";
}
```

This is a simple "hello, world!" program in C++. The line `#include <iostream>` instructs the compiler to include the declaration of the standard stream I/O facilities as found in `iostream`. Without these declarations, the expression `std::cout << "hello, world!"` would make no sense and won't work. The operator `<<` ('put to') writes its second argument onto it's first. In this case, the string literal "hello, wrold!\n" is sritten onto the standard output stream `std::cout`. A string character followed by `\` denotes a single 'special character'. In this case `\n` is the newline character, so that the characters written are `hello, world!` followed by a newline.

The `std::` specifies that the name `cout` is to be found in the standard-library namespace. alternatively we can use `using namespace std;` this will make things a bit easier and we don't have to type `std::` anymore just simple `cout << "hello, world!"`.

---

### Types, Variables, and Airthmetic

Every name and every expression has a type that determines the operation that may be performed on it. example: declaration of variables.

```cpp
int some_variable;
```

this specifies that `some_variable` is of type `int`; that is, `some_variable` is an integer.

A declaration is a statement that introduces a name into the program. It specifies a type for the named entity:

- A type defines a set of possible value and a set of operations for an object.
- An object is some memory that holds a value of some type.
- A value is a set of bits interpreted according to a type.
- A variable is a named object.

C++ have a variety of fundamental types. example:

```cpp
bool    // boolean, possible values are true and false
char    // character, example: 'a', 'b' and '7'
int     // integer, example: 1, 2, 17 and 1024
double  // double-precision floating-point number, example: 3.14 and 1234.0
```

Each fundamental type corresponds directly to hardware facilities and has a fixed size that determines the range of values that can be stored in it. A `char` variable is of the natural size to hold a character on a given machine (8-bit byte) and the sizes of the other types are quoted in multiples of the size of a `char`. The size of the type is implementation-defines (i.e. it can vary among different machines) and can be obtained by the `sizeof` operator. example: `sizeof(char)` equals `1` and `sizeof(int)` equals `4`.

The arithmetic operators can be used for appropriate combinations of these types:

```cpp
x+y   // plus
+x    // unary plus
x-y   // minus
-x    // unary minus
x*y   // multiply
x/y   // divide
x%y   // remainder (modulus) for integers

// comparison operators

x==y  // equal
x!=y  // not equal
x<y   // less than
x>y   // greater than
x<=y  // less than or equal
x>=y  // greater than or equal
```

In assignments and in arithmetic operations, C++ performs all meaningful conversions between the basic types so that they can be mixed freely:

```cpp
void random_func() // function that doesn't return a value
{
  double d = 2.2; // initialize floating-point number
  int i = 7;      // initialize integer
  d = d + i;      // assign sum to d
  i = d * i;      // assign product to i
}
```

Note that `=` is the assignment operator and `==` tests equality.

When defining a variable, we don't actually need to state its type explicitly when it can be deduced from the initializer:

```cpp
auto b = true;    // a bool
auto ch = 'x';    // a char
auto i = 123;     // an int
auto d = 1.2;     // a double
auto z = sqrt(y); // z has the type of whatever sqrt(y) retruns
```

With `auto` we use the `=` syntax because there is no type conversion involved that might cause problems. We use `auto` when we don't have a specific reason to mention the type explicitly. "specific reasons" included:

- The definition is in a large scope where we want to make the type clearly visible to reader of our code.
- We want to be explicit about a variable's range or precision. example: `double` rather than `float`.

using `auto` we avoid redundancy and writing long type names. This is especially important in generic programming where the exact type of an object can be hard for the programmer to know and the type names can be quite long.

In addition to thie conventional arithmetic and logical operators. C++ offers more specific operations for modifying a variable:

```cpp
x+=y    // x = x+y
++x     // increment x = x+1
x-=y    // x = x-y
--x     // decrement x = x-1
x*=y    // scaling x = x*y
x/=y    // scaling x = x/y
x%=y    // x = x%y
```

---

### Constants

C++ supports two notions of immutability

- **`const`**: Meaning roughly "I promise not to change this value". This is used primarily to specific interfaces, so that data can be passed to functions without fear of it being modified. The compiler enforces the promise made by `const`.
- **`constexpr`**: meaning roughly "to be evaluated at compile time". This is used primarily to specify constants, to allow placement of data in memory where it is unlikely to be corrupted, and for performance.

example:

```cpp
const int dmv = 17;                       // dmv is a named constant
int var = 17;                             // var is not a constant
constexpr double max1 = 1.4*square(dmv);  // OK if square(17) is a constant expression
constexpr double max2 = 1.4*square(var);  // error: var is not a constant expression
const double max3 = 1.4*square(var);      // OK, may be evaluated at run time
double sum(const vector<double>&);        // sum will not modify its argument
vector<double> v {1.2, 3.4, 4.5};         // v is not a constant
const double s1 = sum(v);                 // OK: evaluated at run time
constexpr double s2 = sum(v);             // error: sum(v) not constant expression
```

For a function to be usable in a constant expression, that is, in an expression that will be evaluated by the compiler, it must be defined `constexpr`. example:

```cpp
constexpr double square(double x) { return x*x; }
```

To be `constexpr`, a function must be rather simple, just a `return` statement computing a value. A `constexpr` function can be used for non-constant arguments, but when that is done the result is not a constant expression. We allow a `constexpr` function to be called with non-contant-expression arguments in contexts that do no require constant expressions, so that we don't have to define essentially the same function twice: once for constant expressions and once for variables.

In a few places, constant expressions are required by language rules, array bonded, case labels, some templete arguments, and constants declared using `constexpr`. In other cases, compile-time evaluation is imporant for performance. Independently of performance issues, the notion of immutability (of an object with an unchangeable state) is an important design concern.

---

### Tests and Loops

C++ provides a conventional set of statements for expressing selection and looping. example: a simple function that prompts the user and returns a Boolean indicating the response.

```cpp
bool accept()
{
  cout << "do you want to proceed (y or n)?\n";   // print question for user

  char answer = 0
  cin >> answer;                                  // read answer from user

  if (answer == "y") return true;
  return false;
}
```

To match the `<<` output operator ("put to") the `>>` operator ("get from") is used for input; `cin` is the standard input stream. The type of the right-hand operator of `>>` determines what input is accepted, and its right-hand operand is the target of the input operation. The `\n` character at the end of the output string represents a newline.

above example can be improved by taking a `n` for "no" answer:

```cpp
bool accept2()
{
  cout << "do you want to proceed (y or n)?\n";   // print question for user

  char answer = 0;
  cin >> answer;                                  // read answer from user

  switch (answer)
  {
    case 'y':
      return true;
    case 'n':
      return false;
    default:
      cout << "I'll take that for a no.\n";
      return false;
  }
}
```

A `switch-statement` tests a value agains a set of constants. The case constants must be distinct and if the value tested does not match any of them the `default` is chosen. If no `default` is provided, no action is taken if the value doesn't match any case constant.

Few programs are written without loops. example: we might like to give the user a few tries to produce acceptable input:

```cpp
bool accept3()
{
  int tries = 1;
  while (tries < 4)
  {
  cout << "do you want to proceed (y or n)?\n";

  char answer = 0;
  cin >> answer;

    switch (answer)
    {
    case 'y':
      return true;
    case 'n':
      return false;
    default:
      cout << "sorry, I don't understnd that.\n";
      ++tries;
    }
  }
  cout << "I'll take that for a no.\n";
  return false;
}
```

The `while-statement` executes until its condition becomes `false`.

---

### Pointers, Arrays and Loops

AN array of elements of type `char` can be declared like this:

```cpp
chat v[6];      // array of 6 characters
```

Similarly, a pointer can be declared like this:

```cpp
chat* p;      // pointer to character
```

In declaration, `[]` means "array of" and `*` means "pointer to". All arrays have `0` as their lower bound, so `v` has six elements, `v[0]` to `v[5]`. The size of an array must be a constant expression. A pointer variable can hold the address of an object of the appropriate type.

```cpp
char* p = &v[3];      // p points the v's fourth element
char x = *p;          // *p is the objet that p points to
```

In an expresion, prefix unary `*` means "contents of" and prefix unary `&` means "address of".
Consider copying 10 elements from one array to another.

```cpp
void cpy_string()
{
  int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int v2[10]; // to become a copy of v1

  for (auto i = 0; i != 10; ++i)
  {
    v2[i] = v1[i];
    cout << v2[i] << endl;
  }
}
```

This `for-statement` can be read as "set `i` to zero; while `i` is not `10`, copy the `i`th element and increment `i`." When applied to an integer variable, the increment operator, `++`, simply adds `1`. C++ also offers a simpler `for-statement` called a range `for-statement`, for loops that transverse a sequence in the simplest way:

```cpp
void print()
{
  int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto x : v)
  {
    cout << x << endl;
  }

  for (auto x : {10, 21, 32, 45, 65, 34})
  {
    cout << x << endl;
  }
}
```

The first `range-for-statement` can be read as "for every element of `v`, from the first to the last, place a copy in `x` and print it". Note that we don't have to specify an array bound when we initialize it with a list. The range`for`statement can be used for any sequence of elements.

If we didn't want to copy the values from `v` into the variable `x`, but rahter just have `x` refer to an element, we could write:

```cpp
void increment()
{
  int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto &x : v)
  {
    ++x;
    cout << x << endl;
  }
}
```

In a declaration, the unary suffix `&` means "reference to". A reference is siminar to a pointer except that you don't need to use a prefix `*` to access the value referred to by the reference. Also, a reference cannot be made toe refer to a different object after its initialization. When used in declarations, operators (such as `&`, `*` and `[]`) are called declarator operators:

```cpp
T a[n];   // T[n]: array of n Ts
T* p;     // T*: pointer to T
T& r;     // T&: reference to T
T f(A);   // T(A): function taking an argument of type A returning a result of type T
```

We try to ensure that a pointer always points to an object, so that dereferencing it is valid. When we don't have an object to point to or if we need to represent the notion of "no object available", we give the pointer the value `nullptr` ("the null pointer"). There is only one `nullptr` shared by all pointer types:

```cpp
double* pd = nullptr;
Link<Record>* 1st = nullptr;  // pointer to a Link to a Record
int x = nullptr;              // error: nullptr is a pointer not an integer.
```

It is often wise to check that a pointer argument that is supposed to point to something, actually points to something:

```cpp
int count_x(char* p, char x)
// count the number of occurrences of x in p[]
// p is assumed to point to a zero-terminated array of char (or to nothing)
{
  if (p == nullptr) return 0;
  int count = 0;
  for (; *p != 0; ++p)
  {
    if (*p == x)
    {
      ++count;
    }
  return count;
  }
}
```

Note... how we can move a pointer to point to the next element of an array using `++` and then we can leave out the initializer in a `for-statement` if we don't need it.

The definition of `count_x()` assumes that the `char*` is a C-style string, that is that the pointer points to a zero-terminated array of `char`.

In older code, `0` or `NULL` is typically used instead of `nullptr`. However, using `nullptr` eliminates potential confition between integers (such as `0` or `NULL`) and pointers (such as `nullptr`).

---

### User-Defined Types

We call the types that can be built from the fundamental types, the `const` modifier and the declarator operators built-in types. C++'s set of built-in types and operations is rich, but deliberately low-level. They directly and efficiently reflect the capabilities of conventional computer hardware. However, they don't provide the programmer with high-level facilities to conveniently write advanced applications. Instead C++ arguments the buil-int types and operations with a sophisticated set of abstraction mechanisms out of which programmers can build such high-level facilities. The c++ abstraction mechanisms are primarily designed to let programmers design an implement their own types, with suitable representations and operations, and for programmers design and implement their own types, with suitable representations and operations, and for programmers to simple and elegantly use such types. They built out of the built-in types using C++'s abstraction mechanisms are called user-defined types. They are referred to as classes and enumerations.

---

### Structures

The first step in building a new type is often to organize the elements it needs into a data structure, a `struct`:

```cpp
struct Vector {
  int sz;         // number of elements
  double* elem;   // pointer to elements
}
```

The first version of `Vector` consists of an `int` and a `double*`.
A variable of type `Vector` can be defined like this:

```cpp
Vector v;
```

However, by itself that is not of much use because `v`'s `elem` pointer doesn't point to anything. To be useful, we must give `v` some elements to point to. example: we can construct a `Vector` like this:

```cpp
void vector_init(Vector& v, int s)
{
  v.elem = new double[s];   // allocate an array of s doubles
  v.sz = s;
}
```

That is, `v`'s `elem` member gets a pointer produced by the `new` operator and `v`'s `size` member gets the number of elements. The `&` in `Vector&` indicates that we pass `v` by non-`const` reference. that way, `vector_init()` can modify the vector passed to it.

The `new` operator allocates memory from an area called the free store (also known as dynamic memory and heap.)

A simple use of `Vector` looks like this:

```cpp
double read_and_sum(int s)
  // read s integers from cin and return their sum; s is assumed to be positive
{
  Vector v;
  vector_init(v, s);                  // allocate s elements for v
  for (int i = 0; i != s; ++i)
    cin >> v.elem[i];                 // read into elements

  double sum = 0;
  for (int i = 0; i != s; ++i)
    sum += v.elem[i];                 // take the sum of the elements

  return sum;
}
```

We use `.` (dot) to access `struct` members through a name (and through a reference) and `->` to access `struct` members through a pointer. example:

```cpp
void f(Vector v, Vector& rv, Vector* pv)
{
  int i1 = v.sz;      // access through name
  int i2 = rv.sz;     // access through reference
  int i4 = pv -> sz;  // access through pointer
}
```

---

### Classes

A class is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.

#### Accessing data members

The data members and member functions of class can be accessed using the `dot` operator with the object.

```cpp
#include <iostream>
using namespace std;

class Test
{
  // access specifier
public:
  // data members
  string testName;

  // member func()
  void memberFunc()
  {
    cout << "member name: " << testName << endl;
  }
};

int main()
{
  // declaring an object of class Test
  Test testObj;

  // accessing data member
  testObj.testName = "Nikk";

  // accessing member function
  testObj.memberFunc();

  return 0;
}
```

#### Member functions in classes

- Inside class definition
- Outside class definition

```cpp
#include <iostream>
using namespace std;

class testClass
{
public:
  string testName;
  int id;

  // printName() not defined inside class
  void printName();

  // printId() defined inside class
  void printId()
  {
    cout << "parson id: " << testName << endl;
  }
};

// defining printName() using scope resolution operator ::
void testClass::printName()
{
  cout << "parson name: " << testName << endl;
}

int main()
{
  testClass testObj;
  testObj.testName = "Nikk";
  testObj.id = 17;

  // call printName()
  testObj.printName();

  // call printId()
  testObj.printId();

  return 0;
}
```

#### Constructors

Constructors are special class members which are called by the compiler every time an object of that class is initiated. Constructors have the same name as the class and may be defined inside or outside the class definition.

- Default Constructors
- Parameterized Constructors
- Copy Constructors

```cpp
#include <iostream>
using namespace std;

class Names
{
public:
  int id;

  // default constructor
  Names()
  {
    cout << "default constructor called: " << endl;
    id = -1;
  }

  // parameterized constructor
  Names(int x)
  {
    cout << "parameterized constructor called: " << endl;
    id = x;
  }
};

int main()
{
  // testObj1 will call default constructor
  Names testObj1;
  cout << "name id is: " << testObj1.id << endl;

  // testObj2 will call default constructor
  Names testObj2(17);
  cout << "name id is: " << testObj2.id << endl;

  return 0;
}
```

A **Copy Constructor** creates a new object, which is exact copy of the existing object. The compiler provides a default Copy Constructor to all the classes.

```cpp
class-name (class-name &) {}
```

#### Destructor

Destructor is another special member function that is called by the compiler when the scope of the object ends.

```cpp
#include <iostream>
using namespace std;

class testClass
{
public:
  int id;

  // defining destructor
  ~testClass()
  {
    cout << "destructor called for id: " << id << endl;
  }
};

int main()
{
  testClass testObj1;
  testObj1.id = 17;
  int i = 0;
  while (i < 5)
  {
    testClass testObj2;
    testObj2.id = 14;
    i++;
  } // testObj2 scope ends here

  return 0;
} // testObj1 scope ends here
```

---

### Enumerations

An enumeration is a user-defined data type that consists of integral constants. To define an enumeration, keyword `enum` is used.

```cpp
enum season { spring, summer, autumn, winter };
```

here, the name of the enumeration is `season`. and `spring`, `summer` and `winter` are values of type `season`.

by default, `spring` is 0, `summer` is 1 and so on. We can change the defauly value of an enum element during declaration if we want to.

```cpp
enum season
{
  spring = 0,
  summer = 4,
  autumn = 8,
  winter = 12
};
```

#### Enumerated Type Declaration

when we create an enumerated type, only blueprint for the variable is created.

create variables of enum type

```cpp
enum boolean { false, true };

// inside function
enum boolean check;
```

here, a variable `check` of type `enum boolean` is created.

```cpp
enum boolean
{
  false, true
} check;
```

> why enums are used in cpp?
> An enum variable takes only one value out of many possible values.

```cpp
#include <iostream>
using namespace std;

enum suit
{
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main()
{
    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes." << endl;

    return 0;
}
```

It's because the size of an integer is 4 bytes. This makes enum a good choice to work with flags.

#### using enum for flags

```cpp
enum designFlags
{
  ITALICS = 1,
  BOLD = 2,
  UNDERLINE = 4
} button;
```

you are designing a button for Windows application. You can set flags `ITALICS`, `BOLD` and `UNDERLINE` to work with text.

There is a reason why all the integral constants are power of 2 in above pseudo code.

```
// In binary

ITALICS = 00000001
BOLD = 00000010
UNDERLINE = 00000100
```

```cpp
#include <iostream>
using namespace std;

enum designFlags
{
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main()
{
    int myDesign = BOLD | UNDERLINE;

    //    00000001 | 00000100
    //    00000101

    cout << myDesign << endl;

    return 0;
}
```

in this program we know that bold and underline is used.

we can also add flag to our requirements.

```cpp
if (myDesign & ITALICS)
{
  // code for italics
}
```

Here, we have added italics to our design, Note, only code for italics is written inside the `if statement`

---

### Modularity

A CPP program consists of many separately developed parts such as functions, user-defined types, class hierarchies, and templates. The key to managing this is to clearly defined the interaction among those parts. The first and most important step is to distinguish between the interface to a part and its implementation. At the language level. C++ represents interfaces by declarations. A declaration specifies all that's needed to use a function or a type.

```cpp
#include <iostream>
using namespace std;

int main()
{
    double sqrt(double);        // the square root function takes a double
                                // and returns a double

    class Vector
    {
    public:
        Vector(int s);
        double &operator[](int i);
        int size();

    private:
        double *elem; // elem points to an array of sz doubles
        int sz;
    };

    return 0;
};
```

They key point here is that the function bodies, the function definitions are "elsewhere".
