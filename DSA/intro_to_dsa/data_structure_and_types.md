# Data Structure and Types

### What are Data Structures?

A data structure is a particular way of organizing data in a computer so that it can be used efficiently. For example, we can store a list of items having the same data type using the array data structure.

### memory locations

| 1004 | 1005 | 1006 | 1007 | 1008 | 1009 | 1010 |
| --- | --- | --- | --- | --- | --- | --- |
| ... | 2 | 1 | 5 | 3 | 4 | ... |
|  | 0 | 1 | 2 | 3 | 4 |  |

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

| Linear data structure | Non-Linear data structure |
| --- | --- |
| The data items are arranged in sequential order, one after the other. | The data items are arranged in non-sequential order. |
| All the items are present on the single layer. | The data items are present at different layers. |
| It can be transverse on a single run. That is, if we start from the first element, we can transverse all the elements sequentially in a single pass. | It requires multiple runs, That is if we start from the first element it might not be possible to transverse all the elements in a single pass. |
| The memory utilization is not efficient. | Different structures utilize memory in different efficient ways depending on the need. |
| The time complexity increase with data size. | Time complexity remains the same. |
| Example → Arrays, Stack, Queue | Example → Tree, Graph, Map |

### Why Data Structures?

Knowledge about data structures helps you understand the working of each data structure. And, based on that you can select the right data structure for your project. This simply helps you write memory and time-efficient code.