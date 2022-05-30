## Time Complexity in short

You can solve any problem using many different algorithms

But the challenge is to choose the most efficient one

Now how can we recognize it?

That's where the idea of time complexity comes into existence.

for example: find a specific number in the array of integers

To solve this problem we'll use two algorithms

- **Linear Search**
- **Binary Search**

**Linear Search** compares each array element to the searched digit.

To find 13 it performs 7 total iterations.

```
1 -> 3 -> 4 -> 7 -> 9 -> 11 -> 13
```

**Binary Search** needs 3 steps in out case to find the digit.

It performs `log2(N)` number of operations.

```
               1               3
1 -> 3 -> 4 -> 7 -> 9 -> 11 -> 13
                          2
```

- 7 == 13 (no), 7 < 13 (yes) [1]
- 11 == 13 (no), 11 < 13 (yes) [2]
- 13 == 13 (yes) [3]

So in simple words linear search performed 7 iterations. whereas binary search performed 3 iterations.

If instead of 7 elements we take 10 billion elements, then.

- **Linear Search**: 10 billion operations
- **Binary Search**: 33 iterations
