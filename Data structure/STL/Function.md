
# Function

## lower_bound

[Notes](https://chatgpt.com/share/94ae3c02-4e14-4cb0-9eee-1fb29561e49d)

## upper_bound

[Notes](https://chatgpt.com/share/fa990e87-237e-4e2b-b09d-c56f867cb0aa)

## next_permutation

The `next_permutation` function in the C++ Standard Template Library (STL) rearranges the elements in a range into the next lexicographically greater permutation. Here’s a brief explanation:

### **`next_permutation` Overview**

1. **Purpose**: To generate the next lexicographical permutation of a sequence. If the function reaches the last permutation, it transforms the sequence into the first permutation (sorted in ascending order).

2. **Syntax**:

   ```cpp
   bool next_permutation(BidirectionalIterator first, BidirectionalIterator last);
   ```

3. **Parameters**:

   - `first`: An iterator to the beginning of the sequence.
   - `last`: An iterator to the end of the sequence.

4. **Return Value**: Returns `true` if the function could rearrange the sequence into the next permutation. Returns `false` if it has reached the last permutation and transformed the sequence into the first permutation.

### **How It Works**

1. **Identify the Pivot**: Find the largest index `i` such that `arr[i] < arr[i+1]`. If no such index exists, the sequence is the last permutation.
2. **Find Successor**: Find the largest index `j` greater than `i` such that `arr[i] < arr[j]`.
3. **Swap**: Swap the values of `arr[i]` and `arr[j]`.
4. **Reverse**: Reverse the sequence from `arr[i+1]` to the end.

### **Example**:

```cpp
#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3};

    do {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } while (std::next_permutation(vec.begin(), vec.end()));

    return 0;
}
```

### **Output**:

```
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
```

### **Use Cases**

- Useful in problems involving permutations and combinations.
- Commonly used in algorithmic challenges and competitive programming for generating permutations efficiently.

`next_permutation` is a powerful tool for handling sequences in a systematic and lexicographical manner in C++.


## Unique

`std::unique` is a function in the C++ Standard Library, part of the `<algorithm>` header, that removes consecutive duplicate elements from a range. It doesn't change the size of the container but rather shifts the unique elements to the front and returns an iterator to the end of the unique range.

Here’s a detailed explanation:

### Syntax
```cpp
template< class ForwardIt >
ForwardIt unique( ForwardIt first, ForwardIt last );
```

### Parameters
- `first`: Iterator to the beginning of the range.
- `last`: Iterator to the end of the range.

### Returns
An iterator to the new end of the range of unique elements.

### Example
Let's go through an example:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> a = {1, 2, 2, 3, 3, 3, 4, 5, 5};

    // Print the original vector
    std::cout << "Original vector: ";
    for (int n : a) std::cout << n << " ";
    std::cout << "\n";

    // Remove consecutive duplicates
    auto it = std::unique(a.begin(), a.end());

    // Print the modified vector
    std::cout << "After std::unique: ";
    for (auto i = a.begin(); i != it; ++i) std::cout << *i << " ";
    std::cout << "\n";

    return 0;
}
```

### Output
```
Original vector: 1 2 2 3 3 3 4 5 5 
After std::unique: 1 2 3 4 5 
```

### Explanation
1. **Original Vector**: `{1, 2, 2, 3, 3, 3, 4, 5, 5}`
2. **std::unique Operation**:
   - It scans the vector and removes consecutive duplicates.
   - After the operation, the vector looks like `{1, 2, 3, 4, 5, _, _, _, _}` where `_` represents undefined values beyond the new end of the range.
3. **Return Value**: The `std::unique` function returns an iterator to the end of the unique range.
4. **Modified Vector**: Using the iterator returned by `std::unique`, we can print the elements up to the new end, showing only unique elements.

### Key Points
- `std::unique` only removes consecutive duplicates. If the duplicates are not consecutive, they won't be removed.
- The size of the container doesn't change, but the logical end of the unique range is adjusted.
- To actually resize the container, you can use the `erase` method:
  
  ```cpp
  a.erase(it, a.end());
  ```

This will remove the undefined values from the container, leaving only the unique elements.