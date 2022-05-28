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

---

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

---

### Class Methods

Methods are function that belongs to the class.

There are two ways to defined function that belongs to a class:

- Inside class definition
- Outside class definition

> **NOTE** We access methods just like we access attributes, by creating an object of the class and using the dot syntax.

**Inside Class Definition Example:**

```cpp
#include <iostream>
using namespace std;

class testClass
{
public:
    void testMethod()
    {
        cout << "Hello, World!" << endl;
    }
};

int main()
{
    testClass testObj;
    testObj.testMethod();
    return 0;
}
```

**Outside Class Definition Example:**

To define a function outside the class definition, we have to declare it inside the class and then define it outside of the class. This is done by specifying the name of the class, followed the scope resolution `::` operator, followed by the name of the function:

```cpp
#include <iostream>
using namespace std;

class testClass
{
public:
    void testMethod();
};

void testClass::testMethod()
{
    cout << "Hewwo, World!" << endl;
}

int main()
{
    testClass testObj;
    testObj.testMethod();
    return 0;
}
```

---

### Parameters

We can also add parameters using class and object:

```cpp
#include <iostream>
using namespace std;

class car
{
public:
    int speed(int maxSpeed);
};

int car::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{
    car testObj;
    cout << testObj.speed(200);
    return 0;
}
```

---

### Constructors

A constructor is a special method that is automatically called when an object of a class is crated. To create a constructor, we use the same name as the class, followed by the parentheses `()`.

```cpp
#include <iostream>
using namespace std;

class testClass
{
public:
    testClass()
    {
        cout << "Hewwo, World!" << endl;
    }
};

int main()
{
    testClass testObj;
    return 0;
}
```

The constructor has the same name as the class, it is always `public`, and it does not have any return value.

**Constructor Parameters**

Constructors can also take parameters just like a regular function, which can be useful for setting initial values for attributes.

```cpp
#include <iostream>
using namespace std;

class cats
{
public:
    string breed;
    string name;
    cats(string x, string y)
    {
        breed = x;
        name = y;
    }
};

int main()
{
    cats testObj1("catto 1", "neko");
    cats testObj2("catto 2", "neko neko");

    cout << testObj1.breed << " " << testObj1.name << " " << endl;
    cout << testObj2.breed << " " << testObj2.name << " " << endl;
    return 0;
}
```

Just like function, constructors can also be defined outside the class. First, declare the constructor inside the class, then define it outside of the class by specifying the name of the class, followed by the scope resolution `::` operator, followed by the name of the constructor.

```cpp
#include <iostream>
using namespace std;

class cats
{
public:
    string breed;
    string name;
    cats(string x, string y);
};

cats::cats(string x, string y)
{
    breed = x;
    name = y;
}

int main()
{
    cats testObj1("neko 1", "mew mew");
    cats testObj2("neko 2", "pew pew");

    cout << testObj1.breed << " " << testObj1.name << endl;
    cout << testObj2.breed << " " << testObj2.name << endl;
    return 0;
}
```

---

### Access Specifiers

We know about the `public` keyword that appears in all of our classes. The `public` keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed. But if we want to keep members private and hidden from the outside world. we can use two more specifiers `private` and `protected`.

All the three access specifiers in CPP are:

- `public` - members are accessible from outside the class.
- `private` - members cannot be accessed or viewed from outside the class
- `protected` - members cannot be accessed from the outside the class, however, they can be accessed in inherited classes.

to demonstrate `public` and `private` members:

```cpp
#include <iostream>
using namespace std;

class testClass
{
public:
    int x;

private:
    int y;
};

int main()
{
    testClass testObj;
    testObj.x = 25;
    testObj.y = 50;
    return 0;
}
```

```sh
acc_spe_pub_pri.cpp: In function ‘int main()’:
acc_spe_pub_pri.cpp:17:13: error: ‘int testClass::y’ is private within this context
   17 |     testObj.y = 50;
      |             ^
acc_spe_pub_pri.cpp:10:9: note: declared private here
   10 |     int y;
      |         ^
```

---

### Encapsulation

The meaning of **Encapsulation** is to make sure that "sensitive" data is hidden from users. To achieve this we must declare class variables/attributes as `private` cannot be accessed from outside the class. If wwe want others to read or modify the value of a private member, we can provide public `get` and `set` methods.

```cpp
#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee testObj;
    testObj.setSalary(500000);
    cout << testObj.getSalary();
    return 0;
}
```

The `salary` attribute is `private` which have restricted access.
The public `setSalary()` method takes a parameter `s` and assigns it to the `salary` attribute.
The public `getSalary()` method returns the value of the private `salary` attribute.
Inside `main()` we create an object of the `Employee` class. Now we can use the `setSalary()` method to set the value of the private attribute to `5000000`. Then we call the `getSalary()` method on the object to return the value.

**Reasons to use encapsulation**

- It is considered good practice to declare our class attributes as private as often as we can. Encapsulation ensures better control of our data, because one part of the code can be changed without affecting other parts.
- Increased security of data

---

### Inheritance