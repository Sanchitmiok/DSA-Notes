# Set

[Notes](https://chatgpt.com/share/e900329d-fd85-4824-a4b9-c9937bface2d)

# All STL Link

[Link](https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers/)

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
