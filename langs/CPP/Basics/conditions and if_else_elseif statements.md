C++ supports the usual logical conditions from mathematics:

-   Less than: a < b
-   Less than or equal to: a <= b
-   Greater than: a > b
-   Greater than or equal to: a >= b
-   Equal to a == b
-   Not Equal to: a != b

You can use these conditions to perform different actions for different decisions.

C++ has the following conditional statements:

-   Use `if` to specify a block of code to be executed, if a specified condition is true
-   Use `else` to specify a block of code to be executed, if the same condition is false
-   Use `else if` to specify a new condition to test, if the first condition is false
-   Use `switch` to specify many alternative blocks of code to be executed


#### if statement

`if` statement can be used to specify a block of C++ code to be executed if a condition is `true`.

```cpp
if (condition) {  
  // block of code to be executed if the condition is true_  
}
```
Applied example can be :->
```cpp
int x = 20;  
int y = 18;  
if (x > y) {  
 cout << "x is greater than y";  
}
```

#### else statement

`else` statement is used to specify a block of code to be executed if the condition is false.

```cpp
if (condition) {  
  // block of code to be executed if the condition is true_  
} else {  
 // block of code to be executed if the condition is false_  
}
```

```cpp
int time = 20;  
if (time < 18) {  
 cout << "Good day.";  
} else {  
 cout << "Good evening.";  
}  
// Outputs "Good evening."
```

#### elseif statement

`else if` statement is used to specify new conditions if the first condition is `false`.

```cpp
if (condition1) {  
  // block of code to be executed if condition1 is true 
} else if (condition2) {  
 // block of code to be executed if the condition1 is false and condition2 is true.  
} else {  
 // block of code to be executed if the condition1 is false and condition2 is false
}
```

```cpp
int time = 22;  
if (time < 10) {  
 cout << "Good morning.";  
} else if (time < 20) {  
 cout << "Good day.";  
} else {  
 cout << "Good evening.";  
}  
// Outputs "Good evening."
```