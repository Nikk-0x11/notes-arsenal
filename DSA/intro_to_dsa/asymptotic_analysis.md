# Asymptotic Analysis

**Topics Covered**

- Asymptotic Notation
- Big-O Notation
- Theta Notation
- Omega Notation

The efficiency of an algorithm depends on the current amount of time, storage, and other resources required to execute the algorithm. **The efficiency is measured with the help of asymptotic notation.**

An algorithm may not have the same performance for different types of inputs. With the increase in the input size, the performance will change.

The study of change in performance of the algorithm with the change in the order of the input size is defined as asymptotic analysis.

**Asymptotic Notations**

Asymptotic analysis is **the process of calculating the running time of an algorithm in mathematical units to find the program's limitations, or “run-time performance.”** The goal is to determine the best case, worst case, and average-case time required to execute a given task.

For example:- In the **bubble sort algorithm**, when the input array is already sorted, the time taken by the algorithm is linear.

When the input array is neither sorted nor in reverse order, then it takes average time. These durations are denoted using asymptotic notations:

- Big-O Notation
- Omega Notation
- Theta Notation

### **Big-O notation**

Big-O notations is a mathematical notation that described the limiting behavior of a function when the argument tends toward a particular value or infinity.

![Big-O gives the upper bound of a function](images/Asymptotic%200a212/Untitled.png)

Big-O gives the upper bound of a function

```
O(g(n)) = { f(n): there exist positive constants c and n0
            such that 0 ≤ f(n) ≤ cg(n) for all n ≥ n0 }
```

The above expression can be described as a function `f(n)` belongs to the set `0(g(n))` if there exists a positive constant `c` such that it lies between `0` and `cg(n)`, for sufficiently large `n`

Since it gives the worst-case running time of an algorithm, it is widely used to analyze an algorithm as we are always interested in the worst-case scenario.

### Omega Notation (**Ω-notation)**

Omega notation represents the lower bound of the running time of an algorithm. Thus, it provides the best case complexity of an algorithm.

![Omega gives the lower bound of a function](images/Asymptotic%200a212/Untitled%201.png)

Omega gives the lower bound of a function

```
Ω(g(n)) = { f(n): there exist positive constants c and n0 
            such that 0 ≤ cg(n) ≤ f(n) for all n ≥ n0 }
```

The above expression can be described as a function `f(n)` belongs to the set `Ω(g(n))` if there exists a positive constant `c` such that it lies above `cg(n)`, for sufficiently large `n`.

For any value of `n`, the minimum time required by the algorithm is given by Omega `Ω(g(n))`.

### Theta Notation (**Θ-notation)**

Theta notation encloses the function from above and below. Since it represents the upper and the lower bound of the running time of an algorithm, it is used for analyzing the average-case complexity of an algorithm.

![Theta bounds the function within constraints factors](images/Asymptotic%200a212/Untitled%202.png)

Theta bounds the function within constraints factors

For a function `g(n)`, `Θ(g(n))` is given by the relation:

```
Θ(g(n)) = { f(n): there exist positive constants c1, c2 and n0
            such that 0 ≤ c1g(n) ≤ f(n) ≤ c2g(n) for all n ≥ n0 }
```

The above expression can be described as a function `f(n)` belongs to the set `Θ(g(n))` if there exist positive constants `c1` and `c2` such that it can be sandwiched between `c1g(n)` and `c2g(n)`, for sufficiently large `n`.

If a function `f(n)`  lies anywhere in between `c1g(n)`  and `c2g(n)`  for all `n ≥ n0`  then `f(n)` is said to be asymptotically tight bound.