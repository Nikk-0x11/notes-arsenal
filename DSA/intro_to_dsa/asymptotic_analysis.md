# Asymptotic Analysis
**Data Structure**

→ In order to use data efficiently we have to store it efficiently. Efficiency of a data structure is always measured in terms of **SPACE** and **TIME.

→ An Ideal data structure could be the one that takes the least possible time for all its operations and consumes the least memory space.

→ Our main focus will be on the time complexity and not the space complexity.

**Q. On what basis, we could compare the time complexity of the data structures.**

→ On the basis of operations performed on them.

**Q. How to find the time complexity.**

-   Examine exact running time.
    
    -   Pick some machine and turn the timer on. Run the operation for different inputs on the data structures you want to compare on by one and see how much time a particular operation will take based on the data structures.
    -   It is possible for a data structure that for some input size, first data structure give the best performance and for the other the second data structure performs better.
    
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

-   It gives us the exact runtime. It gives us the order of growth of the function. The least upper bound of function so that we know that function will never grow faster than the upper bound.

**Formal definition of Big O Notation**

If `f(n)` and `g(n)` are the two function, then

$f(n) = O(g(n))$

This simply means that `f(n)` does not grow faster than `g(n)`


If there exists constants `c` and ${n}_{0}$, such that:

$f(n) = c.g(n)$ for all $n \ge {n}_{0}$