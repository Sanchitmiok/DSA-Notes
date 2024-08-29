# Priority Queue

[Link](https://chatgpt.com/share/7cd60f73-c29b-42f7-8875-92f2295fdd08)

### Notes on `priority_queue` in C++ STL

The `priority_queue` is a container adaptor in the C++ Standard Template Library (STL) that provides the functionality of a priority queue. This data structure is a type of queue where each element has a priority associated with it. Elements with higher priority are served before those with lower priority. If two elements have the same priority, they are served according to their order in the queue.

#### 1. **Basic Understanding of `priority_queue`**

- **Underlying Container**: 
  - The `priority_queue` uses a heap data structure internally, specifically a max-heap by default.
  - Elements are stored in a vector or a deque (default is a vector), which provides random access, allowing efficient implementation of the heap operations.

- **Max-Heap Property**: 
  - In a max-heap, the largest element is always at the root (or top) of the heap.
  - The `priority_queue` in C++ by default arranges its elements such that the largest element can be accessed in constant time.

- **Element Access**:
  - The `priority_queue` does not provide direct access to elements other than the top (the maximum element).
  - This is because the structure only guarantees that the top element is the maximum, and the rest are not in any specific order.

#### 2. **Declaration and Initialization**

- **Syntax**:
  ```cpp
  std::priority_queue< Type, Container, Comparator > pq;
  ```

- **Parameters**:
  - `Type`: The data type of the elements stored in the `priority_queue`.
  - `Container`: The underlying container type (usually `std::vector` or `std::deque`). The default is `std::vector`.
  - `Comparator`: The comparison function or functor used to determine the order of elements. The default is `std::less<Type>`, which creates a max-heap.

- **Example**:
  ```cpp
  std::priority_queue<int> maxPQ; // Max-heap (default)
  std::priority_queue<int, std::vector<int>, std::greater<int>> minPQ; // Min-heap
  ```

#### 3. **Operations on `priority_queue`**

- **Basic Operations**:
  - `push(const value_type& val)`: Inserts an element into the `priority_queue`.
  - `pop()`: Removes the top element (the highest priority element).
  - `top()`: Returns a reference to the top element.
  - `empty()`: Checks if the `priority_queue` is empty.
  - `size()`: Returns the number of elements in the `priority_queue`.

- **Example**:
  ```cpp
  std::priority_queue<int> pq;
  pq.push(10);
  pq.push(30);
  pq.push(20);
  pq.push(5);

  std::cout << "Top element: " << pq.top() << std::endl; // Outputs 30

  pq.pop();
  std::cout << "Top element after pop: " << pq.top() << std::endl; // Outputs 20
  ```

- **Custom Comparator**:
  - Custom comparators can be used to alter the default behavior.
  - To create a min-heap, use `std::greater<Type>` or define a custom comparator.

  ```cpp
  struct CustomCompare {
      bool operator()(const int& lhs, const int& rhs) {
          return lhs > rhs; // Inverted comparison for min-heap
      }
  };

  std::priority_queue<int, std::vector<int>, CustomCompare> customPQ;
  customPQ.push(10);
  customPQ.push(30);
  customPQ.push(20);
  ```

#### 4. **Performance Characteristics**

- **Time Complexity**:
  - `push()`: O(log n), where `n` is the number of elements in the `priority_queue`. This is because the insertion operation needs to maintain the heap property.
  - `pop()`: O(log n), as it involves removing the top element and re-heapifying the elements.
  - `top()`: O(1), constant time access to the top element.

- **Space Complexity**:
  - The space complexity is O(n), where `n` is the number of elements in the `priority_queue`, as it stores all elements in the underlying container.

#### 5. **Use Cases of `priority_queue`**

- **Dijkstra's Algorithm**: Used for finding the shortest path in a graph.
- **Huffman Coding**: Used for building an optimal prefix code.
- **Event-Driven Simulation**: Events are processed based on their priority (e.g., earliest event first).

#### 6. **Advantages and Disadvantages**

- **Advantages**:
  - Provides a simple and efficient way to manage elements by priority.
  - Offers a flexible interface with support for custom comparators.
  - Efficient operations with logarithmic complexity for insertion and removal.

- **Disadvantages**:
  - Limited direct access to elements; you can only access or remove the top element.
  - Cannot iterate through the elements in any specific order, making it less versatile for certain applications.

#### 7. **Advanced Concepts**

- **Merging Two Priority Queues**:
  - C++ `priority_queue` does not provide a direct method to merge two priority queues.
  - You can merge manually by pushing all elements of one queue into another.

  ```cpp
  std::priority_queue<int> pq1, pq2;
  // Assume pq1 and pq2 are filled with some elements
  while (!pq2.empty()) {
      pq1.push(pq2.top());
      pq2.pop();
  }
  ```

- **Using with Custom Data Types**:
  - You can use `priority_queue` with custom data types by defining a comparison function.

  ```cpp
  struct Task {
      int priority;
      std::string description;

      bool operator<(const Task& other) const {
          return priority < other.priority; // Higher priority has lower number
      }
  };

  std::priority_queue<Task> taskQueue;
  ```

#### 8. **Common Mistakes and Best Practices**

- **Avoid Confusion with Other Containers**: 
  - Remember that `priority_queue` does not support iteration over elements. If you need to access all elements, consider using a `std::vector` or `std::deque` alongside manual heap operations using `std::make_heap`, `std::push_heap`, and `std::pop_heap`.

- **Proper Use of Custom Comparators**:
  - Ensure that your custom comparator maintains the heap property correctly. A common mistake is to accidentally invert the comparison, leading to incorrect priority ordering.

#### 9. **Conclusion**

The `priority_queue` in C++ STL is a powerful and efficient tool for managing elements based on priority. Understanding its behavior, performance characteristics, and limitations is crucial for effectively using it in various applications. Whether you are working with simple types or complex custom objects, the `priority_queue` can be adapted to suit your needs with proper use of comparators and underlying containers.