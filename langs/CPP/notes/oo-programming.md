### Intro

OOPS - Object Oriented Programming

As the name suggests uses objects in programming, object oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. The main aim of OOP is to together the data and the functions that operate on them so that no other part of the code can access this data except that function.

Characteristics of an Object Oriented Programming Language.

- class
- object
- encapsulation
- abstraction
- polymorphism
- inheritance
- dynamic binding
- message passing

Procedural programming is about writing procedures or function that perform operations on the data, while object-oriented programming is about creating object that contain both data and functions.

advantages of oops over procedural programming:

- OOP is faster and easier to execute
- OOP provides a clear structure for the programs
- OOP helps to keep the C++ code DRY "**Don't Repeat Yourself**", and makes the code easier to maintain, modify and debug.
- OOP makes it possible to create full reusable applications with less code and shorter development time

Tip: The "**Don't Repeat Yourself**" (DRY) principle is about reducing the repetition of code. You should extract out the codes that are common for the application, and place them at a single place and reuse them instead of repeating it.

#### Classes and Objects

Classes and objects are the two main aspects of object-oriented programming.

```txt
class => fruit
objects => apple -> banana -> mango
```

```txt
class => car
objects => volvo -> audi -> toyota
```

Hence, a class is a template to for objects and an object is an instance of a class. When the individual objects are created, they inherit all the variables and functions from the class.

Everything in C++ s associated with classes and objects, along with its attributes and methods. example: in real life, a car is an **object**. THe car has **attributes**, such as weight and color and **methods**, such as drive and brake.

Attributes and methods are basically **variables** and **functions** that belongs to the class. These are often referred to as "class members".

A class is a user-defined data type that we can use in out program, and it works as an object constructor, or a "blueprint" for creating objects.

**Creating a class**

```cpp
#include <iostream>
using namespace std;

class testClass
{
public:
    int testNum;
    string testString;
};

```

- The `class` keyword is used to create a class called `testClass`.
- The `public` keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class.
- Inside the class, there is an integer variable `testNum` and a string variable `testString`. When variables are declared within a class, they are called attributes.

**Creating an object**

An object is created for a class. We can use old class `testClass` to create objects.

To create an object of `testCLass`, we have to specify the class name, followed by the object name. To access the class attributes `testNum` and `testString` we use the dot syntax on the object:

```cpp
#include <iostream>
using namespace std;

class testClass
{
public:
    int testNum;
    string testString;
};
int main()
{
    testClass testObj;

    testObj.testNum = 17;
    testObj.testString = "testing string";

    cout << testObj.testNum << endl;
    cout << testObj.testString << endl;
    return 0;
}
```

**Creating multiple objects**

multiple objects can be created with one single class

```cpp
#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{
    Car carsObj1;
    carsObj1.brand = "BMW";
    carsObj1.model = "X5";
    carsObj1.year = 2000;

    Car carsObj2;
    carsObj2.brand = "Ford";
    carsObj2.model = "Mustang";
    carsObj2.year = 1969;

    cout << carsObj1.brand << " " << carsObj1.model << " " << carsObj1.year << endl;
    cout << carsObj2.brand << " " << carsObj2.model << " " << carsObj2.year << endl;
    return 0;
}
```
