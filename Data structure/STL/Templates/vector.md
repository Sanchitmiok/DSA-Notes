# Comprehensive Notes on `std::vector` (C++ STL)

## **Introduction**
- `std::vector` is a sequence container that encapsulates dynamic arrays.
- **Key Features**:
  - Contiguous memory allocation (elements stored next to each other).
  - Dynamic resizing (automatically grows/shrinks as elements are added/removed).
  - Random access to elements in constant time (`O(1)`).
  - Provides standard modifiers (e.g., `push_back`, `pop_back`, `insert`, `erase`).
  - Part of the Standard Template Library (STL), requiring the `<vector>` header.

---

## **Header and Declaration**
```cpp
#include <vector>
using namespace std; // Optional, but common in examples.
```

### Template Parameters:
```cpp
template <class T, class Allocator = allocator<T>> 
class vector;
```
- `T`: Type of elements stored.
- `Allocator`: Memory allocation model (default is `std::allocator`).

---

## **Initialization**
### 1. Empty Vector:
```cpp
vector<int> vec; // Empty vector of integers.
```

### 2. With Size and Initial Value:
```cpp
vector<int> vec(5);        // 5 elements (0, 0, 0, 0, 0)
vector<int> vec(5, 42);    // 5 elements (42, 42, 42, 42, 42)
```

### 3. From Another Vector:
```cpp
vector<int> vec1(3, 10);   // [10, 10, 10]
vector<int> vec2(vec1);     // Copy constructor: vec2 = [10, 10, 10]
```

### 4. Using Initializer List (C++11):
```cpp
vector<int> vec = {1, 2, 3, 4, 5};
```

### 5. From Arrays/Other Containers:
```cpp
int arr[] = {10, 20, 30};
vector<int> vec(arr, arr + 3); // [10, 20, 30]
```

---

## **Element Access**
### 1. `operator[]` (No Bounds Checking):
```cpp
vec[2] = 42; // Access third element (undefined behavior if index >= size).
```

### 2. `at()` (Bounds Checked):
```cpp
vec.at(2) = 42; // Throws std::out_of_range if invalid index.
```

### 3. `front()` and `back()`:
```cpp
int first = vec.front(); // First element.
int last = vec.back();   // Last element.
```

### 4. `data()` (Raw Pointer to Underlying Array):
```cpp
int* ptr = vec.data(); // Useful for C-style APIs.
```

---

## **Iterators**
### 1. Forward Iterators:
```cpp
for (auto it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << " ";
}
```

### 2. Reverse Iterators:
```cpp
for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
    cout << *it << " ";
}
```

### 3. Const Iterators:
```cpp
for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
    // *it is read-only.
}
```

---

## **Modifiers**
### 1. Add Elements:
```cpp
vec.push_back(10);      // Add 10 to the end.
vec.emplace_back(20);   // In-place construction (C++11, efficient for objects).
```

### 2. Remove Elements:
```cpp
vec.pop_back();         // Remove last element (undefined if empty).
vec.erase(vec.begin()); // Remove first element.
vec.clear();            // Remove all elements.
```

### 3. Insert Elements:
```cpp
// Insert 99 at position 2 (vec[2] becomes 99).
vec.insert(vec.begin() + 2, 99);
```

### 4. Resize:
```cpp
vec.resize(10);         // New size = 10; new elements are default-initialized.
vec.resize(15, 42);     // New size = 15; new elements are 42.
```

---

## **Capacity Management**
### 1. Size vs. Capacity:
```cpp
int size = vec.size();       // Number of elements.
int cap = vec.capacity();    // Total allocated memory (>= size).
```

### 2. Preallocate Memory:
```cpp
vec.reserve(100); // Allocate space for 100 elements (capacity >= 100).
```

### 3. Reduce Capacity to Fit Size:
```cpp
vec.shrink_to_fit(); // Request to reduce capacity to size (non-binding).
```

### 4. Check if Empty:
```cpp
if (vec.empty()) { /* ... */ }
```

---

## **Comparison Operators**
- Vectors can be compared lexicographically:
```cpp
vector<int> a = {1, 2, 3};
vector<int> b = {1, 2, 4};
cout << (a < b); // true (3 < 4 in third element).
```

---

## **Algorithms with Vectors**
### 1. Sorting:
```cpp
#include <algorithm>
sort(vec.begin(), vec.end());
```

### 2. Reversing:
```cpp
reverse(vec.begin(), vec.end());
```

### 3. Finding Elements:
```cpp
auto it = find(vec.begin(), vec.end(), 42);
if (it != vec.end()) { /* Found */ }
```

---

## **Time Complexity**
| Operation           | Time Complexity     |
|---------------------|---------------------|
| Random Access       | O(1)                |
| Insert/Erase at End | O(1) (amortized)    |
| Insert/Erase Middle | O(n)                |
| Resize              | O(n)                |

---

## **Use Cases & Best Practices**
- **Use When**:
  - Frequent random access is needed.
  - Elements are added/removed primarily at the end.
- **Avoid When**:
  - Frequent insertions/deletions occur in the middle (use `std::list`).
- **Best Practices**:
  - Use `reserve()` to avoid reallocations if the approximate size is known.
  - Prefer `emplace_back()` over `push_back()` for objects to avoid copies.
  - Use `shrink_to_fit()` to reduce memory after large deletions.

---

## **Example: Complete Workflow**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {5, 2, 4, 1, 3}; // Initialize

    vec.push_back(6);                  // Add element
    vec.pop_back();                    // Remove last element

    sort(vec.begin(), vec.end());      // Sort: [1, 2, 3, 4, 5]

    cout << "Elements: ";
    for (int num : vec) {              // Range-based loop (C++11)
        cout << num << " ";
    }

    return 0;
}
// Output: Elements: 1 2 3 4 5
```

---

## **Notes on Iterator Invalidation**
- Insertions/Deletions may invalidate iterators:
  - `push_back()`: Invalidates all iterators if reallocation occurs.
  - `insert()`/`erase()`: Invalidates iterators after the modification point.
- Always update iterators after modifying the vector.