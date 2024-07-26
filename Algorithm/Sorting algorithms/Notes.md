Sorting algorithms are fundamental in computer science for arranging data in a specified order. Here are brief notes on the most common sorting algorithms:

### 1. **Bubble Sort**
- **Concept**: Repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
- **Complexity**: O(n^2)
- **Stability**: Stable
- **Use Case**: Simple to understand, good for small datasets or nearly sorted data.

### 2. **Selection Sort**
- **Concept**: Divides the input list into two parts: the sorted part at the left end and the unsorted part at the right end. It repeatedly selects the smallest (or largest) element from the unsorted part and moves it to the sorted part.
- **Complexity**: O(n^2)
- **Stability**: Not stable
- **Use Case**: Easy to implement, but inefficient for large lists.

### 3. **Insertion Sort**
- **Concept**: Builds the sorted array one item at a time, with the assumption that the first element is already sorted. It takes each subsequent element and inserts it into its correct position.
- **Complexity**: O(n^2), but O(n) for nearly sorted data
- **Stability**: Stable
- **Use Case**: Efficient for small datasets or partially sorted data.

### 4. **Merge Sort**
- **Concept**: Divides the list into halves, recursively sorts each half, and then merges the sorted halves to produce the sorted list.
- **Complexity**: O(n log n)
- **Stability**: Stable
- **Use Case**: Works well with large datasets and guarantees O(n log n) performance.

### 5. **Quick Sort**
- **Concept**: Selects a 'pivot' element from the array and partitions the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.
- **Complexity**: O(n log n) on average, O(n^2) in the worst case
- **Stability**: Not stable
- **Use Case**: Generally faster in practice for large datasets, especially with good pivot selection.

### 6. **Heap Sort**
- **Concept**: Converts the list into a heap, a special tree-based data structure, and then repeatedly extracts the maximum element from the heap and rebuilds the heap until sorted.
- **Complexity**: O(n log n)
- **Stability**: Not stable
- **Use Case**: Useful for datasets where in-place sorting is required.

### 7. **Radix Sort**
- **Concept**: Non-comparative sorting algorithm that sorts numbers by processing individual digits. It processes each digit from least significant to most significant.
- **Complexity**: O(kn) where k is the number of digits
- **Stability**: Stable
- **Use Case**: Efficient for sorting numbers or strings with fixed length.

### 8. **Bucket Sort**
- **Concept**: Divides the array into a number of buckets, distributes the elements into these buckets, and then sorts the buckets individually. The sorted buckets are then concatenated.
- **Complexity**: O(n + k), where k is the number of buckets
- **Stability**: Stable
- **Use Case**: Effective for uniformly distributed data.

### 9. **Shell Sort**
- **Concept**: Generalization of insertion sort that allows the exchange of items that are far apart. The gap between elements is gradually reduced until it becomes 1.
- **Complexity**: O(n log n) to O(n^2) depending on the gap sequence
- **Stability**: Not stable
- **Use Case**: More efficient than insertion sort for larger lists but less efficient than merge and quick sorts.

### 10. **Counting Sort**
- **Concept**: Non-comparative sorting algorithm that counts the occurrences of each distinct element and calculates the position of each element in the sorted array.
- **Complexity**: O(n + k) where k is the range of the input
- **Stability**: Stable
- **Use Case**: Suitable for small range of integers.

Each of these algorithms has its own advantages and disadvantages, and the choice of which to use depends on the specific requirements of the problem, such as the size of the dataset, the nature of the data, and whether stability is a concern.