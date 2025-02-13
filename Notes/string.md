# Comprehensive Notes on C++ STL `string`

## 1. Introduction & Header
- Part of the Standard Template Library (STL) for handling dynamic character sequences.
- Manages memory automatically, mutable, and supports various operations.
- Include header: `<string>`
- Resides in namespace `std`.

```cpp
#include <string>
using namespace std;
```

---

## 2. Declaration & Initialization

| Method                | Example                                      | Result           |
|-----------------------|----------------------------------------------|------------------|
| Default constructor   | `string s1;`                                 | Empty string     |
| From C-string         | `string s2("Hello");`                        | "Hello"          |
| Copy constructor      | `string s3(s2);`                             | Copy of `s2`     |
| Substring             | `string s4(s2, 1, 3);`                       | "ell"            |
| Fill with characters  | `string s5(5, 'a');`                         | "aaaaa"          |
| From iterators        | `string s6(s2.begin(), s2.begin()+3);`       | "Hel"            |
| Move constructor (C++11) | `string s7(std::move(s2));`              | `s2` becomes empty |

---

## 3. Accessing Elements

- **Operator `[]`**: No bounds checking.  
  ```cpp
  char c = s[1]; // Access 2nd character
  ```
- **`at()`**: Bounds-checked; throws `out_of_range`.  
  ```cpp
  char c = s.at(1);
  ```
- **`front()`/`back()`**: Access first/last character.  
  ```cpp
  s.front() = 'H'; 
  s.back() = '!';
  ```

---

## 4. Iterators

| Iterator Type         | Example                      |
|-----------------------|------------------------------|
| `begin()`/`end()`     | `for(auto it = s.begin(); it != s.end(); ++it)` |
| `rbegin()`/`rend()`   | Reverse iteration            |
| `cbegin()`/`cend()`   | Const iterators (C++11)      |

---

## 5. Modifying Operations

- **Append**:  
  ```cpp
  s.append(" world");  // s += " world"
  ```
- **Insert**:  
  ```cpp
  s.insert(5, " inserted"); // Insert at index 5
  ```
- **Erase**:  
  ```cpp
  s.erase(5, 3);       // Remove 3 chars starting at index 5
  s.erase(s.begin());   // Remove first character
  ```
- **Replace**:  
  ```cpp
  s.replace(6, 5, "there"); // Replace 5 chars at index 6 with "there"
  ```
- **Clear**:  
  ```cpp
  s.clear();            // s becomes ""
  ```
- **Assign**:  
  ```cpp
  s.assign(5, 'x');     // s = "xxxxx"
  ```
- **Substring Extraction**:  
  ```cpp
  string sub = s.substr(2, 5); // 5 chars starting at index 2
  ```

---

## 6. Concatenation

- Use `+` operator (returns new string):  
  ```cpp
  string s = "Hello" + string(" World");
  ```
- `append()` or `+=`:  
  ```cpp
  s1 += "!"; // Modifies s1
  ```

---

## 7. Capacity

| Method               | Description                                  |
|----------------------|----------------------------------------------|
| `s.size()` / `s.length()` | Number of characters                 |
| `s.capacity()`       | Current allocated storage capacity          |
| `s.empty()`          | Returns `true` if empty                      |
| `s.resize(10, 'x')`  | Resize to 10 chars, fill new with 'x'        |
| `s.reserve(100)`     | Preallocate memory for 100 chars             |
| `s.shrink_to_fit()`  | Reduce capacity to fit size (C++11)          |

---

## 8. String Operations

- **Compare**:  
  ```cpp
  if (s1.compare(s2) == 0) // 0: equal, >0: s1 > s2, <0: s1 < s2
  ```
- **Find**:  
  ```cpp
  size_t pos = s.find("world"); // Returns index or `string::npos`
  ```
- **Reverse Find (`rfind`)**: Searches backward.  
- **Find First/Last Of**:  
  ```cpp
  pos = s.find_first_of("aeiou"); // First vowel
  pos = s.find_last_not_of("0123456789"); // Last non-digit
  ```

---

## 9. Conversions

- **C-string**:  
  ```cpp
  const char* cstr = s.c_str(); // Null-terminated
  ```
- **Numeric Conversions**:  
  ```cpp
  int num = stoi("42");         // Throws if invalid
  double d = stod("3.14");
  ```
- **To String**:  
  ```cpp
  string s = to_string(42) + " is the answer";
  ```

---

## 10. Non-Member Functions

- **Stream I/O**:  
  ```cpp
  cout << s;
  getline(cin, s); // Read entire line (discards newline)
  ```
- **Relational Operators**:  
  ```cpp
  if (s1 == s2) { ... }
  ```
- **Swap**:  
  ```cpp
  swap(s1, s2); // Efficiently swaps contents
  ```

---

## 11. Exceptions

- `at()`: Throws `out_of_range` on invalid index.
- `stoi`, `stod`, etc.: Throw `invalid_argument` or `out_of_range`.

```cpp
try {
  s.at(100); // Throws if size <= 100
} catch (const out_of_range& e) {
  cerr << "Error: " << e.what();
}
```

---

## Example Usage

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Hello";
  s += " World";             // "Hello World"
  s.replace(6, 5, "there");  // "Hello there"
  cout << s.substr(6, 5);    // Outputs "there"
  s.insert(5, " awesome");   // "Hello awesome there"
  return 0;
}
```