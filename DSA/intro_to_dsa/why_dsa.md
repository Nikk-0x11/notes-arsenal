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
| --- | --- |
| 1 | 1 |
| 10 | 100 |
| 100 | 10000 |
| 1000 | 1000000 |
| 1000000 | 1000000000000 |

In the end, you are advised to pick a more efficient sorting algorithm such as **merge sort** and modify your code to handle the scale.

But, these scalability issues can also arise from a memory standpoint where we might have to trade off time for optimizing space.

In that context, an algorithm like **quicksort** might be a better choice since it’s an in-place sorting algorithm in that it doesn’t need extra space in memory to sort, unlike **merge sort.**

The point is, that **data structures and algorithms play a crucial part in handling the scalability of a software system**. Perhaps, that is the reason why companies always ask about DSA problems in an interview.

> “***We need to learn data structures and algorithms since it enhances our ability to solve problems much more efficiently and helps us think through a scenario methodically.***” — By someone who regrets not practicing enough DSA back in college
> 

### **Memory is expensive**

Memory is not always available in abundance. While dealing with code/system which requires you to store or produce a lot of data, it is critical for your algorithm to save the usage of memory wherever possible. For example: While storing data about people, you can save memory by storing only their date of birth, not their age. You can always calculate it on the fly using their date of birth and current date.

### Algorithm’s Efficiency Examples

****Example 1: Age Group Problem****

Problems like finding the people of a certain age group can easily be solved with a little modified version of the binary search algorithm (assuming that the data is sorted).

The naive algorithm which goes through all the persons one by one, and checks if it falls in the given age group is linearly scalable. Whereas, binary search claims itself to be a logarithmically scalable algorithm. This means that if the size of the problem is squared, the time is taken to solve it is only doubled.

Suppose it takes 1 second to find all the people at a certain age for a group of 1000. Then for a group of 1 million people.

- the binary search algorithm will take only 2 seconds to solve the problem
- the naive algorithm might take 1 million seconds, which is around 12 days

The same binary search algorithm is used to find the square root of a number.

****Example 2: Rubik's Cube Problem****

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