Sure! Here are some important and useful in-built functions in C++ along with explanations on how and where they can be used:

### 1. `std::unique`

**Usage:** Removes consecutive duplicate elements in a range.

**Example:**
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> v = {1, 2, 2, 3, 4, 4, 5};
auto it = std::unique(v.begin(), v.end());
v.erase(it, v.end());

for (int i : v) {
    std::cout << i << " ";
}
```

### 2. `std::sort`

**Usage:** Sorts the elements in a range.

**Example:**
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> v = {5, 3, 2, 4, 1};
std::sort(v.begin(), v.end());

for (int i : v) {
    std::cout << i << " ";
}
```

### 3. `std::reverse`

**Usage:** Reverses the elements in a range.

**Example:**
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> v = {1, 2, 3, 4, 5};
std::reverse(v.begin(), v.end());

for (int i : v) {
    std::cout << i << " ";
}
```

### 4. `std::find`

**Usage:** Searches for an element in a range.

**Example:**
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> v = {1, 2, 3, 4, 5};
auto it = std::find(v.begin(), v.end(), 3);

if (it != v.end()) {
    std::cout << "Element found at index: " << std::distance(v.begin(), it);
}
```

### 5. `std::accumulate`

**Usage:** Accumulates the elements in a range.

**Example:**
```cpp
#include <numeric>
#include <vector>
#include <iostream>

std::vector<int> v = {1, 2, 3, 4, 5};
int sum = std::accumulate(v.begin(), v.end(), 0);

std::cout << "Sum: " << sum;
```

### 6. `std::copy`

**Usage:** Copies elements from one range to another.

**Example:**
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> v1 = {1, 2, 3, 4, 5};
std::vector<int> v2(v1.size());
std::copy(v1.begin(), v1.end(), v2.begin());

for (int i : v2) {
    std::cout << i << " ";
}
```

### 7. `std::fill`

**Usage:** Fills a range with a specific value.

**Example:**
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> v(5);
std::fill(v.begin(), v.end(), 10);

for (int i : v) {
    std::cout << i << " ";
}
```

### 8. `std::transform`

**Usage:** Applies a function to a range and stores the result in another range.

**Example:**
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> v1 = {1, 2, 3, 4, 5};
std::vector<int> v2(v1.size());
std::transform(v1.begin(), v1.end(), v2.begin(), [](int x) { return x * x; });

for (int i : v2) {
    std::cout << i << " ";
}
```

### 9. `std::lower_bound` and `std::upper_bound`

**Usage:** Finds the position of the first element not less than (greater than) a specific value in a sorted range.

**Example:**
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> v = {1, 2, 3, 4, 5};
auto lb = std::lower_bound(v.begin(), v.end(), 3);
auto ub = std::upper_bound(v.begin(), v.end(), 3);

std::cout << "Lower bound: " << std::distance(v.begin(), lb) << std::endl;
std::cout << "Upper bound: " << std::distance(v.begin(), ub);
```

### 10. `std::set_intersection`

**Usage:** Computes the intersection of two sorted ranges.

**Example:**
```cpp
#include <algorithm>
#include <vector>
#include <iostream>

std::vector<int> v1 = {1, 2, 3, 4, 5};
std::vector<int> v2 = {3, 4, 5, 6, 7};
std::vector<int> v_intersection;

std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(v_intersection));

for (int i : v_intersection) {
    std::cout << i << " ";
}
```
### 11. **`memset`**

- **Definition**: `memset` is a C/C++ standard library function used to fill a block of memory with a specific value.

### **Syntax**
```c
void *memset(void *dest, int c, size_t n);
```
- **Parameters**:
  - `dest`: Pointer to the memory block.
  - `c`: Value to fill (converted to `unsigned char`).
  - `n`: Number of bytes to fill.
- **Returns**: Pointer to the memory block (`dest`).

### **Use Cases**
1. **Initialize arrays/buffers**:  
   ```c
   int arr[10];
   memset(arr, 0, sizeof(arr)); // Sets all elements to 0
   ```
2. **Reset structures**:  
   ```c
   memset(&structVar, 0, sizeof(structVar));
   ```
3. **Set specific patterns in memory**:  
   ```c
   char str[] = "Hello";
   memset(str, '*', 3); // Result: "***lo"
   ```

### **Key Points**
- Efficient for contiguous memory.
- Treats `c` as an unsigned byte value.
- Commonly used for zeroing memory or setting default values.

---