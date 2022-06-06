# Flow Control

## if...else statement

#### if statement

The syntax of the `if` statement in C is

```c
if (some expression)
{
  // code
}
```

**Working of if statements**

The `if` statement evaluates the test expression inside the parenthesis `()`

- If the test expression is evaluated to true, statement inside the body of `if` are executed.
- If the test expression is evaluated to false, statements inside the body of `if` are not executed.

**true**

```c
int n = 5;

if (n < 10)
{
  // code
}

// code after if
```

**false**

```c
int n = 5;

if (n > 10)
{
  // code
}

// code after if
```

**example**

```c
#include <stdio.h>

int main()
{
  int num;

  printf("enter an integer: ");
  scanf("%d", &num);

  // true if number is less than 0
  if (num < 0)
  {
    printf("you entered %d\n", num);
  }

  printf("if statement test.\n");
  return 0;
}
```

```
➜  flow_control git:(main) gcc if.c
➜  flow_control git:(main) ./a.out
enter an integer: 10
if statement test.
➜  flow_control git:(main) ./a.out
enter an integer: -10
you entered -10
if statement test.
```

#### if...else statement

The `if` statement may have an option `else` block. THe syntax of the `if...else` statement is.

```c
if (test expression)
{
  // run code if expression is true
}
else
{
  // run code if expression if false
}
```

**example**

```c
#include <stdio.h>
int main()
{
  int number;
  printf("Enter an integer: ");
  scanf("%d", &number);

  // True if the remainder is 0
  if (number % 2 == 0)
  {
    printf("%d is an even integer.", number);
  }
  else
  {
    printf("%d is an odd integer.", number);
  }

  return 0;
}
```

#### if...else ladder

The `if...else` statement executes two different codes depending upon whether the test expression is true or false. Sometimes, a chose has to be made from more than 2 possibilities.

The if...else ladder allows us to check between multiple test expressions and execute different statements.

```c
if (test expression1)
{
   // statement(s)
}
else if(test expression2)
{
   // statement(s)
}
else if (test expression3)
{
   // statement(s)
}
.
.
else
{
   // statement(s)
}
```

**example**

```c
#include <stdio.h>
int main()
{
  int number1, number2;
  printf("Enter two integers: ");
  scanf("%d %d", &number1, &number2);

  // checks if the two integers are equal.
  if (number1 == number2)
  {
    printf("Result: %d = %d", number1, number2);
  }

  // checks if number1 is greater than number2.
  else if (number1 > number2)
  {
    printf("Result: %d > %d", number1, number2);
  }

  // checks if both test expressions are false
  else
  {
    printf("Result: %d < %d", number1, number2);
  }

  return 0;
}
```

#### Nested if...else

It is possible to include an if...else statement inside the body of another if...else statement.

```c
#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 >= number2) {
      if (number1 == number2) {
        printf("Result: %d = %d",number1,number2);
      }
      else {
        printf("Result: %d > %d", number1, number2);
      }
    }
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}
```
