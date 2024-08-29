



# **Notes on Standard Template Library (STL) in C++**

## **1. Introduction to STL**

### **1.1 What is STL?**
- The Standard Template Library (STL) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like arrays, lists, stacks, queues, etc.
- STL is a collection of:
  - **Containers**: Data structures to store objects.
  - **Iterators**: Objects that allow traversal through the elements of a container.
  - **Algorithms**: Functions to perform various operations like searching, sorting, counting, etc.

### **1.2 Why Use STL?**
- **Reusability**: Common data structures and algorithms are provided in a reusable manner.
- **Efficiency**: Well-optimized for performance.
- **Code Reduction**: Reduces code complexity by using pre-defined functions and classes.

---

## **2. STL Components**

### **2.1 Containers**

Containers are objects that store data. STL provides various types of containers, which are broadly classified into:

#### **2.1.1 Sequence Containers**
- **Definition**: Maintain the order of insertion of elements.
- **Examples**:
  - **vector**: Dynamic array (resizable array).
  - **deque**: Double-ended queue.
  - **list**: Doubly linked list.
  - **array**: Static array with a fixed size.

#### **2.1.2 Associative Containers**
- **Definition**: Store elements in a sorted manner using keys. Provide fast retrieval based on keys.
- **Examples**:
  - **set**: Stores unique elements in a sorted order.
  - **map**: Stores key-value pairs, where keys are unique and stored in a sorted order.
  - **multiset**: Similar to `set`, but allows duplicate elements.
  - **multimap**: Similar to `map`, but allows duplicate keys.

#### **2.1.3 Unordered Containers**
- **Definition**: Store elements without any specific order, based on a hash function.
- **Examples**:
  - **unordered_set**: Similar to `set`, but unordered.
  - **unordered_map**: Similar to `map`, but unordered.
  - **unordered_multiset**: Similar to `multiset`, but unordered.
  - **unordered_multimap**: Similar to `multimap`, but unordered.

#### **2.1.4 Container Adapters**
- **Definition**: Provide a different interface for sequential containers.
- **Examples**:
  - **stack**: LIFO structure (Last In, First Out).
  - **queue**: FIFO structure (First In, First Out).
  - **priority_queue**: Stores elements such that the largest element is always at the front.

### **2.2 Iterators**

- **Definition**: Objects that point to elements within a container, allowing traversal through the elements.
- **Types of Iterators**:
  - **Input Iterators**: Read elements sequentially.
  - **Output Iterators**: Write elements sequentially.
  - **Forward Iterators**: Traverse in a single direction.
  - **Bidirectional Iterators**: Traverse in both directions.
  - **Random Access Iterators**: Directly access any element in constant time.

- **Common Functions**:
  - `begin()`, `end()`: Start and end of a container.
  - `rbegin()`, `rend()`: Reverse iterators.
  - `advance()`: Move an iterator forward by a given number of steps.
  - `next()`, `prev()`: Access the next or previous element.

### **2.3 Algorithms**

- **Definition**: Functions that perform operations on containers using iterators.
- **Categories**:
  - **Non-Modifying Algorithms**:
    - `for_each`, `count`, `find`, `accumulate`, `min`, `max`, etc.
  - **Modifying Algorithms**:
    - `copy`, `fill`, `transform`, `replace`, `remove`, etc.
  - **Sorting and Searching Algorithms**:
    - `sort`, `partial_sort`, `nth_element`, `binary_search`, etc.
  - **Set Operations**:
    - `set_union`, `set_intersection`, `set_difference`, etc.

---

## **3. Sequence Containers in Detail**

### **3.1 Vector**
- **Definition**: A dynamic array that can grow or shrink in size.
- **Advantages**: Provides fast access to elements, and efficient insertions and deletions at the end.
- **Common Operations**:
  - `push_back()`: Add element at the end.
  - `pop_back()`: Remove element from the end.
  - `size()`: Get the number of elements.
  - `capacity()`: Get the capacity of the vector.
  - `resize()`: Change the size of the vector.
  - `emplace_back()`: Construct an element in-place at the end.

### **3.2 Deque**
- **Definition**: Double-ended queue allowing insertion and deletion at both ends.
- **Common Operations**:
  - `push_front()`, `push_back()`: Insert elements at the front or back.
  - `pop_front()`, `pop_back()`: Remove elements from the front or back.

### **3.3 List**
- **Definition**: A doubly linked list allowing efficient insertions and deletions anywhere in the list.
- **Common Operations**:
  - `push_front()`, `push_back()`: Insert elements at the front or back.
  - `pop_front()`, `pop_back()`: Remove elements from the front or back.
  - `insert()`: Insert elements at a specific position.
  - `erase()`: Remove elements from a specific position.

### **3.4 Array**
- **Definition**: A fixed-size array, similar to a C-style array but with STL features.
- **Common Operations**:
  - `at()`: Access elements with bounds checking.
  - `size()`: Get the number of elements.

---

## **4. Associative Containers in Detail**

### **4.1 Set and Multiset**
- **Set**:
  - Stores unique elements in a sorted order.
  - Operations: `insert()`, `erase()`, `find()`, `count()`.
- **Multiset**:
  - Similar to `set` but allows duplicate elements.

### **4.2 Map and Multimap**
- **Map**:
  - Stores key-value pairs with unique keys in a sorted order.
  - Operations: `insert()`, `erase()`, `find()`, `count()`, `operator[]` (for accessing values).
- **Multimap**:
  - Similar to `map` but allows duplicate keys.

---

## **5. Unordered Containers in Detail**

### **5.1 Unordered Set and Unordered Multiset**
- **Unordered Set**:
  - Stores unique elements without any specific order, based on hash functions.
  - Operations: `insert()`, `erase()`, `find()`, `count()`.
- **Unordered Multiset**:
  - Similar to `unordered_set` but allows duplicate elements.

### **5.2 Unordered Map and Unordered Multimap**
- **Unordered Map**:
  - Stores key-value pairs without any specific order, based on hash functions.
  - Operations: `insert()`, `erase()`, `find()`, `count()`, `operator[]`.
- **Unordered Multimap**:
  - Similar to `unordered_map` but allows duplicate keys.

---

## **6. Container Adapters in Detail**

### **6.1 Stack**
- **Definition**: A LIFO structure using `deque` as the underlying container by default.
- **Common Operations**:
  - `push()`: Add an element to the top.
  - `pop()`: Remove the top element.
  - `top()`: Access the top element.

### **6.2 Queue**
- **Definition**: A FIFO structure using `deque` as the underlying container by default.
- **Common Operations**:
  - `push()`: Add an element to the back.
  - `pop()`: Remove the front element.
  - `front()`, `back()`: Access the front or back element.

### **6.3 Priority Queue**
- **Definition**: Stores elements such that the largest element is always at the front.
- **Common Operations**:
  - `push()`: Add an element.
  - `pop()`: Remove the largest element.
  - `top()`: Access the largest element.

---

## **7. Advanced STL Techniques**

### **7.1 Pair and Tuple**
- **Pair**: Stores two heterogeneous objects as a single unit.
  - Usage: `pair<int, string> p = make_pair(1, "apple");`
- **Tuple**: Generalization of `pair`, stores more than two heterogeneous objects.
  - Usage: `tuple<int, string, float> t = make_tuple(1, "apple", 3.14);`

### **7.2 Lambda Functions with STL**
- **Definition**: Anonymous functions that can be used as inline predicates in STL algorithms.
  - Example: `sort(v.begin(), v.end(), [](int a, int b) { return a > b; });` (Sorts in descending order)

### **7.3 Custom Comparators**
- **Definition**: User-defined

 functions or function objects to alter the default behavior of STL algorithms.
  - Example: Custom comparator for sorting pairs by second element:
    ```cpp
    bool cmp(pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    }
    ```

### **7.4 STL with User-Defined Types**
- **Using STL Containers with Classes**:
  - Overload operators like `<`, `==`, etc., to use user-defined types with STL containers.
  - Example: Sorting a vector of custom objects based on a member variable.

---

## **8. Best Practices and Tips**

### **8.1 Choosing the Right Container**
- **Vector vs List**: Use `vector` for random access and fewer insertions/deletions. Use `list` when frequent insertions/deletions in the middle are required.
- **Set vs Unordered Set**: Use `set` when you need sorted elements, and `unordered_set` when order doesn't matter but faster access is needed.
- **Map vs Unordered Map**: Similar to `set` vs `unordered_set`, choose `map` for ordered key-value pairs.

### **8.2 Complexity Considerations**
- Be aware of the time complexity of operations on different containers to avoid performance bottlenecks.

### **8.3 Using STL Algorithms Efficiently**
- Leverage STL algorithms like `sort`, `binary_search`, `lower_bound`, `upper_bound`, etc., for common operations.
- Prefer using STL algorithms over manually implemented loops for better readability and often better performance.

---

## **9. Example Problems Using STL**

### **9.1 Problem: Finding the Kth Largest Element**
- **Approach**:
  - Use a `priority_queue` (max-heap) to efficiently find the Kth largest element.

### **9.2 Problem: Merge K Sorted Arrays**
- **Approach**:
  - Use a `priority_queue` to merge arrays by maintaining the smallest current elements of each array.

### **9.3 Problem: Anagram Grouping**
- **Approach**:
  - Use an `unordered_map` to group strings by sorted character sequences as keys.

---

## **10. Conclusion**

- STL in C++ is a powerful toolkit that simplifies the implementation of complex algorithms and data structures. Understanding the nuances of different containers, iterators, and algorithms is essential for effective problem-solving in DSA. By mastering STL, you can write cleaner, more efficient, and more maintainable code.

---

This comprehensive guide should give you a solid foundation in STL and how to use it effectively in solving various DSA problems.