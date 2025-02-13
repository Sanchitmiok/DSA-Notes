### Sorting Algorithms: Comprehensive Notes for DSA (C++ Examples)

---

#### **1. Bubble Sort**
- **Description**: Repeatedly swaps adjacent elements if out of order until sorted.
- **Time Complexity**:
  - Best: O(n) (already sorted)
  - Average/Worst: O(n²)
- **Space Complexity**: O(1) (in-place)
- **Stable**: Yes
- **Best Practices**:
  - Use for small datasets or nearly sorted data.
  - Add a `swapped` flag to optimize for best-case scenarios.
- **Common Mistakes**:
  - Not terminating early when no swaps occur.
  - Using for large datasets (inefficient).
- **C++ Example**:
  ```cpp
  void bubbleSort(vector<int>& arr) {
      int n = arr.size();
      bool swapped;
      for (int i = 0; i < n-1; i++) {
          swapped = false;
          for (int j = 0; j < n-i-1; j++) {
              if (arr[j] > arr[j+1]) {
                  swap(arr[j], arr[j+1]);
                  swapped = true;
              }
          }
          if (!swapped) break;
      }
  }
  ```

---

#### **2. Selection Sort**
- **Description**: Selects the minimum element from the unsorted portion and swaps it with the first unsorted element.
- **Time Complexity**: O(n²) (all cases)
- **Space Complexity**: O(1) (in-place)
- **Stable**: No
- **Best Practices**:
  - Use when memory writes are costly (minimizes swaps to O(n)).
- **Common Mistakes**:
  - Assuming it is stable (swaps can disrupt order).
  - Incorrectly updating indices for the minimum element.
- **C++ Example**:
  ```cpp
  void selectionSort(vector<int>& arr) {
      int n = arr.size();
      for (int i = 0; i < n-1; i++) {
          int min_idx = i;
          for (int j = i+1; j < n; j++) {
              if (arr[j] < arr[min_idx]) min_idx = j;
          }
          swap(arr[i], arr[min_idx]);
      }
  }
  ```

---

#### **3. Insertion Sort**
- **Description**: Builds the sorted array by inserting elements one at a time into their correct positions.
- **Time Complexity**:
  - Best: O(n) (already sorted)
  - Average/Worst: O(n²)
- **Space Complexity**: O(1) (in-place)
- **Stable**: Yes
- **Best Practices**:
  - Ideal for small data or online sorting (streaming data).
- **Common Mistakes**:
  - Starting the inner loop at the wrong index.
  - Not shifting elements correctly.
- **C++ Example**:
  ```cpp
  void insertionSort(vector<int>& arr) {
      int n = arr.size();
      for (int i = 1; i < n; i++) {
          int key = arr[i], j = i-1;
          while (j >= 0 && arr[j] > key) {
              arr[j+1] = arr[j];
              j--;
          }
          arr[j+1] = key;
      }
  }
  ```

---

#### **4. Merge Sort**
- **Description**: Divide-and-conquer; splits array into halves, sorts, and merges.
- **Time Complexity**: O(n log n) (all cases)
- **Space Complexity**: O(n) (auxiliary array)
- **Stable**: Yes
- **In-place**: No
- **Best Practices**:
  - Use for linked lists (efficient merge step).
  - Prefer for stable O(n log n) sorting.
- **Common Mistakes**:
  - Incorrect merging logic (e.g., not handling equal elements properly).
  - Forgetting base cases in recursion.
- **C++ Example**:
  ```cpp
  void merge(vector<int>& arr, int l, int m, int r) {
      int n1 = m - l + 1, n2 = r - m;
      vector<int> L(n1), R(n2);
      for (int i = 0; i < n1; i++) L[i] = arr[l+i];
      for (int j = 0; j < n2; j++) R[j] = arr[m+1+j];
      
      int i = 0, j = 0, k = l;
      while (i < n1 && j < n2) {
          if (L[i] <= R[j]) arr[k++] = L[i++];
          else arr[k++] = R[j++];
      }
      while (i < n1) arr[k++] = L[i++];
      while (j < n2) arr[k++] = R[j++];
  }

  void mergeSort(vector<int>& arr, int l, int r) {
      if (l >= r) return;
      int m = l + (r-l)/2;
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);
      merge(arr, l, m, r);
  }
  ```

---

#### **5. Quick Sort**
- **Description**: Pivot element partitions the array; recursively sorts subarrays.
- **Time Complexity**:
  - Best/Average: O(n log n)
  - Worst: O(n²) (bad pivot choice)
- **Space Complexity**: O(log n) (stack space)
- **Stable**: No
- **In-place**: Yes
- **Best Practices**:
  - Use median-of-three pivot selection.
  - Switch to Insertion Sort for small subarrays.
- **Common Mistakes**:
  - Bad pivot selection (e.g., always choosing the last element).
  - Infinite recursion due to incorrect partitioning.
- **C++ Example** (Lomuto Partition):
  ```cpp
  int partition(vector<int>& arr, int low, int high) {
      int pivot = arr[high];
      int i = low - 1;
      for (int j = low; j < high; j++) {
          if (arr[j] <= pivot) {
              i++;
              swap(arr[i], arr[j]);
          }
      }
      swap(arr[i+1], arr[high]);
      return i+1;
  }

  void quickSort(vector<int>& arr, int low, int high) {
      if (low < high) {
          int pi = partition(arr, low, high);
          quickSort(arr, low, pi-1);
          quickSort(arr, pi+1, high);
      }
  }
  ```

---

#### **6. Heap Sort**
- **Description**: Builds a max-heap and repeatedly extracts the maximum element.
- **Time Complexity**: O(n log n) (all cases)
- **Space Complexity**: O(1) (in-place)
- **Stable**: No
- **Best Practices**:
  - Use when in-place O(n log n) is required.
- **Common Mistakes**:
  - Incorrect heapify logic (e.g., wrong parent-child indexing).
- **C++ Example**:
  ```cpp
  void heapify(vector<int>& arr, int n, int i) {
      int largest = i, l = 2*i+1, r = 2*i+2;
      if (l < n && arr[l] > arr[largest]) largest = l;
      if (r < n && arr[r] > arr[largest]) largest = r;
      if (largest != i) {
          swap(arr[i], arr[largest]);
          heapify(arr, n, largest);
      }
  }

  void heapSort(vector<int>& arr) {
      int n = arr.size();
      for (int i = n/2-1; i >= 0; i--) heapify(arr, n, i);
      for (int i = n-1; i > 0; i--) {
          swap(arr[0], arr[i]);
          heapify(arr, i, 0);
      }
  }
  ```

---

#### **7. Counting Sort**
- **Description**: Non-comparison sort; counts occurrences of elements.
- **Time Complexity**: O(n + k) (k = range of elements)
- **Space Complexity**: O(n + k)
- **Stable**: Yes
- **Best Practices**:
  - Use when element range (k) is small.
- **Common Mistakes**:
  - Not adjusting for negative numbers.
- **C++ Example**:
  ```cpp
  void countingSort(vector<int>& arr) {
      int max_val = *max_element(arr.begin(), arr.end());
      int min_val = *min_element(arr.begin(), arr.end());
      int range = max_val - min_val + 1;
      vector<int> count(range), output(arr.size());
      
      for (int num : arr) count[num - min_val]++;
      for (int i = 1; i < range; i++) count[i] += count[i-1];
      for (int i = arr.size()-1; i >= 0; i--) {
          output[count[arr[i]-min_val]-1] = arr[i];
          count[arr[i]-min_val]--;
      }
      arr = output;
  }
  ```

---

### **Summary Table**

| Algorithm      | Time Complexity      | Space Complexity | Stable | In-Place | Best Use Case                     |
|----------------|----------------------|------------------|--------|----------|-----------------------------------|
| Bubble Sort    | O(n²)               | O(1)            | Yes    | Yes      | Small/nearly sorted data          |
| Selection Sort | O(n²)               | O(1)            | No     | Yes      | Minimizing swaps                  |
| Insertion Sort | O(n²)               | O(1)            | Yes    | Yes      | Small/online data                 |
| Merge Sort     | O(n log n)          | O(n)            | Yes    | No       | Stable O(n log n) sorting         |
| Quick Sort     | O(n log n) / O(n²) | O(log n)        | No     | Yes      | General-purpose average-case      |
| Heap Sort      | O(n log n)          | O(1)            | No     | Yes      | In-place O(n log n)               |
| Counting Sort  | O(n + k)            | O(n + k)        | Yes    | No       | Small integer range               |

---

### **Best Practices & Common Mistakes**
- **Best Practices**:
  1. Prefer `std::sort` (Introsort) in C++ for general use.
  2. Use non-comparison sorts (e.g., Counting Sort) for restricted integer ranges.
  3. For nearly sorted data, prefer Insertion Sort.
- **Common Mistakes**:
  1. Off-by-one errors in loop boundaries.
  2. Not testing edge cases (empty array, duplicates).
  3. Assuming stability in unstable algorithms (e.g., Quick Sort).