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

---

## Loops

In programming, a loop is used to repeat a block of code until the specified condition is met.

There are three types of loops in C

- for loop
- while loop
- do...while loop

#### for loop

`for` loop syntax:

```c
for (initializationStatement; testExpression; updateStatement)
{
  // statements inside the body of a loop
}
```

**working of for loop**

- The initialization statement is executed only once.
- Then, the test expression is evaluated. If the test expression is evaluated to false, the `for` loop is terminated.
- However, if the test expression is evaluated to true, statements inside the body of the `for` loop are executed, and the update expression is updated.
- Again the test expression is evaluated.

This process goes on until the test expression is false. When the test expression is false, the loop terminates.

**example**

```c
#include <stdio.h>

int main()
{
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d\n", i);
  }
  return 0;
}
```

#### while loop

syntax for `while` loop

```c
while (testExpression)
{
  // the body of the loop
}
```

**working of while loop**

- The `while` loop evaluates the `testExpression` inside the parentheses `()`.
- If `testExpression` is true, statements inside the body of `while` loop are executed. Then, `testExpression` is evaluated again.
- The process goes on until `testExpression` is evaluated to false.
- If `testExpression` is false, the loop terminates.

```c
#include <stdio.h>

int main()
{
  int i = 1;

  while (i <= 5)
  {
    printf("%d\n", i);
    ++i;
  }
  return 0;
}
```

#### do...while loop

The `do...while` loop is similar to the `while` loop with one important difference. The body of `do...while` loop is executed at least once. Only then, the test expression is evaluated.

The syntax of the `do...while` loop is

```c
do
{
  // the body of the loop
}
while (testExpression);
```

**working of do...while loop**

- The body of `do...while` loop is executed once. Only then, then `testExpression` is evaluated.
- If `testExpression` is true, the body of the loop is executed again and `testExpression` is evaluated once more.
- This process goes on until `testExpression` becomes false.
- If `testExpression` is false the loop ends.

```c
#include <stdio.h>

int main()
{
  double number, sum = 0;

  do
  {
    printf("enter a number: ");
    scanf("%lf", &number);
    sum += number;
  } while (number != 0.0);

  printf("sum = %.2lf", sum);

  return 0;
}
```

---

## break and continue

#### break

The break statement ends the loop immediately when it is encountered. Its syntax is:

```c
break;
```

The break statement is almost always used with if...else statement inside the loop.

**example**

```c
#include <stdio.h>

int main()
{
  int i;
  double number, sum = 0.0;

  for (i = 1; i <= 10; ++i)
  {
    printf("Enter n%d: ", i);
    scanf("%lf", &number);

    // if the user enters a negative number, break the loop
    if (number < 0.0)
    {
      break;
    }

    sum += number;
  }

  printf("Sum = %.2lf", sum);

  return 0;
}
```

#### continue

The `continue` statement skips the current iteration of the loop and continues with the next iteration, it's syntax is:

```c
continue;
```

The `continue` statement is almost always used with the `if...else` statement

**example**

```c
#include <stdio.h>
int main()
{
  int i;
  double number, sum = 0.0;

  for (i = 1; i <= 10; ++i)
  {
    printf("Enter a n%d: ", i);
    scanf("%lf", &number);

    if (number < 0.0)
    {
      continue;
    }

    sum += number;
  }

  printf("Sum = %.2lf", sum);

  return 0;
}
```

---

## switch statement

The switch statement allows us to execute one code block among many alternatives.

We can do the same think with the `if...else...if` ladder. However the syntax of the `switch` statement is much easier to read and write.

```c
switch (expression)
{
  case const1:
  // statement
    break;

  case const2:
  // statement
    break;

  case const3:
  // statement
    break;
  .
  .
  .
  default:
    // default statements
}
```

**note**

- If we don't use the `break` statement, all statements after the matching label are also executed.
- The `default` clause inside the `switch` statement is optional.

**example**

```c
// simple calculator
#include <stdio.h>

int main()
{
  char operation;
  double n1, n2;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operation);
  printf("Enter two operands: ");
  scanf("%lf %lf", &n1, &n2);

  switch (operation)
  {
  case '+':
    printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
    break;

  case '-':
    printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
    break;

  case '*':
    printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
    break;

  case '/':
    printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
    break;

  // operator doesn't match any case constant +, -, *, /
  default:
    printf("Error! operator is not correct");
  }

  return 0;
}
```

---

## goto statement

The `goto` statement allows us to transfer control of the program to the specified `label`

```
goto label;
... ... ...
... ... ...
label:
statement;
```

The `label` is an identifier. When the `goto` statement is encountered, the control of the program jumps to `label:` and starts executing the code.

```c
#include <stdio.h>

int main()
{
  const int maxInput = 100;
  int i;
  double number, average, sum = 0.0;

  for (i = 1; i <= maxInput; ++i)
  {
    printf("%d. Enter a number: ", i);
    scanf("%lf", &number);

    // goto jump if the user enters a negative number
    if (number < 0.0)
    {
      goto jump;
    }
    sum += number;
  }

jump:
  average = sum / (i - 1);
  printf("sum = %.2f\n", sum);
  printf("average = %.2f\n", average);

  return 0;
}
```
