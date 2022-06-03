# What is an Algorithm?

The word **Algorithm** means “a process or set of rules to be followed in calculations or other problem-solving operations”. Therefore Algorithm refers to a set of rules/instructions that step-by-step define how a work is to be executed in order to get the expected results. For example:

An algorithm to add two numbers:

1. Take two number inputs.
2. Add numbers using the + operator.
3. Display the result.

### Qualities of Good Algorithms

- Input and output should be defined precisely.
- Each step in the algorithm should be clear and unambiguous.
- Algorithms should be the most effective among many different ways to solve a problem.
- An algorithm shouldn't include computer code. Instead, the algorithm should be written in such a way that it can be used in different programming languages.

### Algorithm 1: Add two numbers entered by the user

```
Step 1: Start
Step 2: Declare variables num1, num2, and sum.
Step 3: Read values num1 and num2.
Step 4: Add num1 and num2 and assign the result to the sum.
        sum←num1+num2
Step 5: Display the sum
Step 6: Stop
```

### Algorithm 2: Find the largest number among three numbers

```
Step 1: Start
Step 2: Declare variables a,b and c.
Step 3: Read variables a,b and c.
Step 4: If a > b
           If a > c
              Display a is the largest number.
           Else
              Display c is the largest number.
        Else
           If b > c
              Display b is the largest number.
           Else
              Display c is the greatest number.
Step 5: Stop
```

### Algorithm 3: Find root of the quadratic equation $ax^2 + bx + c = 0$

```
Step 1: Start
Step 2: Declare variables a, b, c, D, x1, x2, rp and ip;
Step 3: Calculate discriminant
         D ← b2-4ac
Step 4: If D ≥ 0
              r1 ← (-b+√D)/2a
              r2 ← (-b-√D)/2a
              Display r1 and r2 as roots.
        Else
              Calculate real part and imaginary part
              rp ← -b/2a
              ip ← √(-D)/2a
              Display rp+j(ip) and rp-j(ip) as roots
Step 5: Stop
```

### Algorithm 4: Find the factorial of a number.

```
Step 1: Start
Step 2: Declare variables n, factorial and i.
Step 3: Initialize variables
          factorial ← 1
          i ← 1
Step 4: Read value of n
Step 5: Repeat the steps until i = n
     5.1: factorial ← factorial*i
     5.2: i ← i+1
Step 6: Display factorial
Step 7: Stop
```

### Algorithm 5: Check Whether a number is prime or not.

```
Step 1: Start
Step 2: Declare variables n, i, flag.
Step 3: Initialize variables
        flag ← 1
        i ← 2
Step 4: Read n from the user.
Step 5: Repeat the steps until i=(n/2)
     5.1 If the remainder of n÷i equals 0
            flag ← 0
            Go to step 6
     5.2 i ← i+1
Step 6: If flag = 0
           Display n is not prime
        else
           Display n is prime
Step 7: Stop
```

### Algorithm 6: Find the Fibonacci series till the term is less than 1000

```
Step 1: Start
Step 2: Declare variables first_term,second_term and temp.
Step 3: Initialize variables first_term ← 0 second_term ← 1
Step 4: Display first_term and second_term
Step 5: Repeat the steps until second_term ≤ 1000
     5.1: temp ← second_term
     5.2: second_term ← second_term + first_term
     5.3: first_term ← temp
     5.4: Display second_term
Step 6: Stop
```

---

# Data Structure and Types

### What are Data Structures?

A data structure is a particular way of organizing data in a computer so that it can be used efficiently. For example, we can store a list of items having the same data type using the array data structure.

### memory locations

| 1004 | 1005 | 1006 | 1007 | 1008 | 1009 | 1010 |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| ...  | 2    | 1    | 5    | 3    | 4    | ...  |
|      | 0    | 1    | 2    | 3    | 4    |      |

<aside>
💡 Data Structure and data types are slightly different. A data structure is the collection of data types arranged in a specific order.

</aside>

### Types of Data Structure

Data structures are divided into two categories.

- Linear data structure
- Non-linear data structure

### Linear data structures

A linear data structure has data elements connected to each other so that elements are arranged in a sequential manner and each element is connected to the element in the front and behind it. This way, the structure can be transverse in a single run.

**Popular linear data structures are:**

1. **Array Data Structure**

   In an array, elements in memory are arranged in continuous memory. All the elements of an array are of the same type. And, the type of elements that can be stored in the form of arrays is determined by the programming language.

   An array with each element represented by an index.

![An array with each element represented by an index](images/Data%20Struc%20fb780/Untitled.png)

An array with each element represented by an index

1. **Stack Data Structure**

   In stack stat structure, elements are stored in the LIFO principle. That is, the last element stored in a stack will be removed first. It works like a pile of plates where the last plate kept on the pile will be removed first.

![In a stack, operations can be performed only from one end (top here)](images/Data%20Struc%20fb780/Untitled%201.png)

In a stack, operations can be performed only from one end (top here)

1. **Queue Data Structure**

   Unlike stack, the queue data structure works in the FIFO principle where the first element stored in the queue will be removed first. It works just like a queue of people at the ticket counter where the first person in the queue will get the ticket first.

![In a queue, addition and removal are performed from separate ends.](images/Data%20Struc%20fb780/Untitled%202.png)

In a queue, addition and removal are performed from separate ends.

1. **Linked List Data Structure**

   In a linked list data structure, data elements are connected through a series of nodes. And, each node contains the data items and addresses to the next node.

![A linked list](images/Data%20Struc%20fb780/Untitled%203.png)

A linked list

### Non-Linear data structures

Data structures where data elements are not arranged sequentially to linearly are called non-linear data structures. In a non-linear data structure, a single level is not involved. Therefore, we can’t traverse all the elements in a single run only. Non-linear data structures are not easy to implement in comparison to the linear data structure. It utilizes computer memory efficiently in comparison to a linear data structure.

1. **Graph data structure**

   In the graph data structure, each node is called a vertex and each vertex is connected to other vertices through edges.

   ![Untitled](images/Data%20Struc%20fb780/Untitled%204.png)

   **Popular graph-based data structures**

   - Spanning tree and Minimum spanning tree
   - Strongly connected components
   - Adjacency matrix
   - Adjacency list

2. **Tree data structure**

   Similar to a graph, a tree is also a collection of vertices and edges. However, in tree data structures, there can only be one edge between two vertices.

   ![Untitled](images/Data%20Struc%20fb780/Untitled%205.png)

   **Popular tree-based data structure**

   - Binary tree
   - Binary search tree
   - AVL tree
   - B - Tree
   - B + Tree
   - Red-Black tree

| Linear data structure                                                                                                                                | Non-Linear data structure                                                                                                                       |
| ---------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------- |
| The data items are arranged in sequential order, one after the other.                                                                                | The data items are arranged in non-sequential order.                                                                                            |
| All the items are present on the single layer.                                                                                                       | The data items are present at different layers.                                                                                                 |
| It can be transverse on a single run. That is, if we start from the first element, we can transverse all the elements sequentially in a single pass. | It requires multiple runs, That is if we start from the first element it might not be possible to transverse all the elements in a single pass. |
| The memory utilization is not efficient.                                                                                                             | Different structures utilize memory in different efficient ways depending on the need.                                                          |
| The time complexity increase with data size.                                                                                                         | Time complexity remains the same.                                                                                                               |
| Example → Arrays, Stack, Queue                                                                                                                       | Example → Tree, Graph, Map                                                                                                                      |

### Why Data Structures?

Knowledge about data structures helps you understand the working of each data structure. And, based on that you can select the right data structure for your project. This simply helps you write memory and time-efficient code.

---

# Why DSA?

### What are Algorithms?

Informally, an algorithm is nothing but a mention of steps to solve a problem. They are essentially a solution. For example, an algorithm to solve the problem of factorials might look something like this:

```
Initialize fact = 1
For every value v in range 1 to n:
    Multiply the fact by v
fact contains the factorial of n
```

Here, the algorithm is written in English. If it was written in a programming language, we would call it to **code** instead. Here is a code for finding the factorial number in C++.

```cpp
int factorial(int n) {
    int out = 1;
    for (int i = 1; i <= n; i++) {
        out = out * i;
    }
    return out;
}
```

Programming is all about data structures and algorithms. Data structures are used to hold data while algorithms are used to solve the problem using that data. Data structures and algorithms (DSA) go through solutions to the standard problem in detail and give you an insight into how efficient it is to use each one of them. It also teaches you the science of evaluating the efficiency of an algorithm. This enables you to choose the best of various choices.

### Data Structures and Algorithms to make code scalable

### Scalability

**Scalability** is scale plus ability, which means the quality of an algorithm;/system to handle the problem of a larger size.

Let’s take a scenario - your manager asks you to rank customers according to their purchase history, and the higher the purchase, the better the rank should be.

The record of their purchase is present on a **CSV** file.

After giving some thought, you come up with a feasible solution vis-a-vis sorting the record according to purchase in descending order.

Since sorting goes well with contiguous memory, you first load the data into a suitable data structure like an array and then store related data items in a sequential address space.

For example: let’s say you pick **insertion sort** and apply the algorithm to the array. and **Voila! it works**

Next thing you know, your team rolls out a new feature that rewards customers based on their ranking which in turn creates positive reinforcement and the sales go through the roof. However, on a blissful Saturday night, your code breaks, and the production is down!

Even though you had solved the problem, it turns out that the **insertion sort** is pretty costly and makes your program run slower and slower as the size of the customer record becomes larger and larger.

More formally, **insertion sort** scales quadratically with respect to the data set

| Number of customer records | Approx time taken by insertion sort |
| -------------------------- | ----------------------------------- |
| 1                          | 1                                   |
| 10                         | 100                                 |
| 100                        | 10000                               |
| 1000                       | 1000000                             |
| 1000000                    | 1000000000000                       |

In the end, you are advised to pick a more efficient sorting algorithm such as **merge sort** and modify your code to handle the scale.

But, these scalability issues can also arise from a memory standpoint where we might have to trade off time for optimizing space.

In that context, an algorithm like **quicksort** might be a better choice since it’s an in-place sorting algorithm in that it doesn’t need extra space in memory to sort, unlike **merge sort.**

The point is, that **data structures and algorithms play a crucial part in handling the scalability of a software system**. Perhaps, that is the reason why companies always ask about DSA problems in an interview.

> “**_We need to learn data structures and algorithms since it enhances our ability to solve problems much more efficiently and helps us think through a scenario methodically._**” — By someone who regrets not practicing enough DSA back in college

### **Memory is expensive**

Memory is not always available in abundance. While dealing with code/system which requires you to store or produce a lot of data, it is critical for your algorithm to save the usage of memory wherever possible. For example: While storing data about people, you can save memory by storing only their date of birth, not their age. You can always calculate it on the fly using their date of birth and current date.

### Algorithm’s Efficiency Examples

\***\*Example 1: Age Group Problem\*\***

Problems like finding the people of a certain age group can easily be solved with a little modified version of the binary search algorithm (assuming that the data is sorted).

The naive algorithm which goes through all the persons one by one, and checks if it falls in the given age group is linearly scalable. Whereas, binary search claims itself to be a logarithmically scalable algorithm. This means that if the size of the problem is squared, the time is taken to solve it is only doubled.

Suppose it takes 1 second to find all the people at a certain age for a group of 1000. Then for a group of 1 million people.

- the binary search algorithm will take only 2 seconds to solve the problem
- the naive algorithm might take 1 million seconds, which is around 12 days

The same binary search algorithm is used to find the square root of a number.

\***\*Example 2: Rubik's Cube Problem\*\***

Imagine you are writing a program to find the solution to a Rubik's cube.

This cute-looking puzzle has annoyingly 43,252,003,274,489,856,000 positions, and these are just positions! Imagine the number of paths one can take to reach the wrong positions.

Fortunately, the way to solve this problem can be represented by the graph data structure. There is a graph algorithm known as **Dijkstra’s algorithm** which allows you to solve this problem in linear time. It means that it allows you to reach the solved position in a minimum number of states.

**Example 3: DNA Problem**

**DNA** is a molecule that carries genetic information. They are made up of smaller units which are represented by Roman characters **A, C, T,** and **G**.

Imagine yourself working in the field of **bioinformatics**. You are assigned the work of finding out the occurrence of a particular pattern in a DNA strand.

It is a famous problem in computer science academia. And, the simplest algorithm takes the time proportional to

```
(number of characters in DNA strand) * (number of characters in the pattern)
```

A typical DNA strand has millions of such units. For that, there is another algorithm called the **KMP algorithm** that can get this done in time which is proportional to

```
(number of characters in DNA strand) + (number of characters in the pattern)
```

The `*` operator replaced by `+` makes a lot of change

Considering that the pattern was 100 characters, your algorithm is not 100 times faster. IF your pattern was 1000 characters, the KMP algorithm would be almost 100 times faster. That is, if you were able to find the occurrence of a pattern in 1 second, it will now take you just 1 ms. We can also put this in another way. Instead of matching 1 strand, you can match 1000 strands of similar length at the same time.

And there are infinite such stories...

Generally, software development involves learning new technologies on a daily basis. You get to learn most of these technologies while using them in one of your projects. However, it is not the case with algorithms.

If you don’t know algorithms well, you won’t be able to identify if you can optimize the code you are writing right now. You are expected to know them in advance and apply them wherever possible and critical.

We specifically talked about the scalability of algorithms. A software system consists of many such algorithms. Optimizing any one of them leads to a better system.

However, it’s important to note that this is not the only way to make a system scalable. For example, a technique known as distributed computing allows independent parts of a program to run on multiple machines together making it even more scalable.

---

# Asymptotic Analysis

**Data Structure**

→ In order to use data efficiently we have to store it efficiently. Efficiency of a data structure is always measured in terms of **SPACE** and \*\*TIME.

→ An Ideal data structure could be the one that takes the least possible time for all its operations and consumes the least memory space.

→ Our main focus will be on the time complexity and not the space complexity.

**Q. On what basis, we could compare the time complexity of the data structures.**

→ On the basis of operations performed on them.

**Q. How to find the time complexity.**

- Examine exact running time.

  - Pick some machine and turn the timer on. Run the operation for different inputs on the data structures you want to compare on by one and see how much time a particular operation will take based on the data structures.
  - It is possible for a data structure that for some input size, first data structure give the best performance and for the other the second data structure performs better.

  **Examining the exact running time is not the best solution to calculate the time complexity.**

  **Point Notes**

  → Measuring the actual running time is not practical at all.
  → The running time generally depends on the input size.
  → The size of input is a `n` then `f(n)` is the function of `n` denotes the time complexity.
  → `f(n)` represents the number of instructions executed for the input value of `n`.

### finding `f(n)`

We can compare two data structures for a particular operation by comparing their `f(n)` values.

We are interested in finding the growth rate of `f(n)` with respect to `n` because it might be possible that for smaller input size, one data structure may seem better than the other but for larger input size it may not.

The concept is applicable in comparing the two algorithms as well.

### Big O Notation

Big O Notation is used to measure the performance of any algorithm by providing the order of growth of the function or how a function grows.

It gives the upper bound on a function by which we can make sure that the function will never grow faster than this upper bound.

We want the approximate runtime of he operations performed on data structure.

We are no interested in the exact time.

Big O Notation will help us to achieve the same.

- It gives us the exact runtime. It gives us the order of growth of the function. The least upper bound of function so that we know that function will never grow faster than the upper bound.

**Formal definition of Big O Notation**

If `f(n)` and `g(n)` are the two function, then

$f(n) = O(g(n))$

This simply means that `f(n)` does not grow faster than `g(n)`

If there exists constants `c` and ${n}_{0}$, such that:

$f(n) = c.g(n)$ for all $n \ge {n}_{0}$
