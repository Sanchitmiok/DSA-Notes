# **JS Introduction**

* **JavaScript Tutorial**: The current page is a JavaScript tutorial provided by CodeWithHarry.
* **Overview of JavaScript**: The tutorial explains that JavaScript is a lightweight, object-oriented programming language used for adding interactivity and dynamic effects to web pages.
* **Comparison to HTML and CSS**: JavaScript is likened to electricity in a house, making it interactive, while HTML provides structure and CSS adds visual appeal.
* **Programming Basics**: The tutorial defines programming as a set of instructions for a computer and explains the importance of programming languages.
* **ECMAScript**: ECMAScript is mentioned as the standard on which JavaScript is based, ensuring consistency in JavaScript documentation.
* **JavaScript Versions**: The tutorial mentions the evolution of JavaScript, from ECMAScript 1 (1997) to ECMAScript 2022 (2022).
* **JavaScript Applications**: JavaScript is used for frontend and backend development, with popular frameworks such as React, Angular, and Vue for frontend development, and Express and Node for backend development.
* **Learning Objectives**: The tutorial aims to provide an in-depth understanding of JavaScript.


# **Notes on JavaScript Basics**



### Introduction to JavaScript

* JavaScript is a programming language used in web development.
* It is a client-side language, executed by the user's web browser.
* JavaScript is used in combination with HTML and CSS to create interactive web pages.

### Execution of JavaScript

* JavaScript can be executed in a web browser using the JS console.
* JavaScript can be executed using a runtime like Node.js.
* JavaScript can be executed by inserting it inside the `<script>` tag of an HTML document.

### What is JavaScript?

* JavaScript is a programming language that is commonly used in web development.
* It can be used to create dynamic, interactive web pages.
* JavaScript is often used to create effects such as drop-down menus, image sliders, and pop-up windows.

### Getting Started with JavaScript

* To start using JavaScript, you'll need a text editor and a web browser.
* Popular text editors include Sublime Text, Atom, and Visual Studio Code.
* To write JavaScript code, create a new file with a `.js` extension and type your code into the file.
* Save the file and open it in your web browser to see the results.

### JavaScript Execution

* **No installation required**: JavaScript is present everywhere in browsers, phones, etc.
* **Executing JavaScript**:
  + Open the JS console in your web browser.
  + Use a runtime like Node.js.
  + Insert JavaScript code inside the `<script>` tag of an HTML document.

### JavaScript Basics

* **Variables**:
  + What are Variables?
  + Variable Naming Rules
  + Primitives and Objects
  + Operators and Expressions
  + `var` vs `let` vs `const`
* **Conditional Statements**:
  + If else conditionals
  + If else ladder
  + Switch case
  + Ternary Operator
* **Loops**:
  + For Loops
  + While Loop
* **Functions**
* **Objects**:
  + Strings
  + Arrays and Array Methods
  + Loops with Arrays
  + Map, Filter and Reduce
  + Date
  + Math
  + Number
  + Boolean
  + DOM & BOM
  + OOPs
    - Class
    - Objects
    - Constructor
    - Static Method
    - Encapsulation
    - Inheritance
    - Polymorphism
    - Abstraction


# **Node.js Installation**

To install Node.js, follow these steps:

1. **Download the installer**: Go to the official Node.js website and click the "Download" button to download the latest version of the Node.js installer.
2. **Run the installer**: Double-click the downloaded installer file to start the installation process. Follow the prompts to complete the installation.
3. **Verify the installation**: Open a terminal or command prompt and type `node -v` to verify that Node.js has been installed successfully.

Alternatively, you can also run JavaScript code using Node.js by installing Visual Studio Code (VS Code) and following these additional steps:

1. **Install VS Code**: Download and install VS Code from the official website.
2. **Create a new JavaScript file**: Open VS Code and create a new file with a `.js` extension.
3. **Write your JavaScript code**: Type your JavaScript code into the file and save it.
4. **Run the JavaScript file**: Open the Command Palette and type "Run JavaScript" to run your JavaScript file in the terminal.

You can also run JavaScript code directly in the terminal by using the `node` command, followed by the name of the file. For example: `node myfile.js`

# **Understanding JavaScript Variables**

In JavaScript, variables are used to store data. There are three ways to declare variables: `var`, `let`, and `const`.

### Declaring Variables

*   **Var**: Declares a variable that can be reassigned later. Example: `var x = 10;`
*   **Let**: Declares a variable that can be reassigned later. Example: `let y = 20;`
*   **Const**: Declares a variable that cannot be reassigned. Example: `const z = 30;`

### Data Types

JavaScript supports several data types:

*   **Numbers**: Whole numbers or decimal numbers (e.g., 10, 3.14)
*   **Strings**: Text enclosed in quotes (e.g., "hello", 'world')
*   **Booleans**: True or false values
*   **Arrays**: Collections of values in square brackets (e.g., [1, 2, 3])
*   **Objects**: Collections of key-value pairs in curly brackets (e.g., { name: "John", age: 30 })

## **Variable Scope and Hoisting**

In JavaScript, variable scope refers to the region of the code where a variable is defined and can be accessed. There are two types of variable scope: global and local.

### Global Variables

*   **Global variables**: Are defined outside of any function or block and are accessible from anywhere in the code.
*   **Example**: `var x = 10;` is a global variable.

### Local Variables

*   **Local variables**: Are defined inside a function or block and are only accessible within that function or block.
*   **Example**: `function add(x, y) { var result = x + y; }` is a local variable.

**Hoisting**

Hoisting is a JavaScript feature that allows variables and functions to be moved to the top of their scope, regardless of where they are actually defined. This can sometimes lead to unexpected behavior if not understood.

### Variable Hoisting

*   **Var hoisting**: Variables declared with `var` are hoisted to the top of their scope, but their assignment is not.
*   **Example**: `console.log(x); var x = 10;` will output `undefined` because `x` is hoisted, but its assignment is not.
*   **Let and const hoisting**: Variables declared with `let` and `const` are not hoisted, but a `ReferenceError` will be thrown if they are used before they are defined.

### Function Hoisting

*   **Function hoisting**: Functions are hoisted to the top of their scope, but their assignment is not.
*   **Example**: `console.log(add(2, 3)); function add(x, y) { return x + y; }` will output `5` because `add` is hoisted, but its assignment is not.

## **Variable Naming Rules in JavaScript**
=====================================

According to the text, there are a few rules to follow when naming variables in JavaScript:

* **Variable names can only contain letters, digits, underscores, and dollar signs.**
* **Variable names cannot start with a digit.**
* **Variable names are case-sensitive.**

It's also a good practice to use **descriptive and meaningful names** for your variables, which makes your code easier to read and understand.

## **Primitives and Objects in JavaScript**
=====================================

According to the text, there are two main types of data in JavaScript:

* **Primitives**: These are the simplest data types in JavaScript and are immutable. They include:
	+ Numbers (e.g. 10, 3.14)
	+ Strings (e.g. "hello", 'world')
	+ Booleans (e.g. true, false)
	+ Null (a special value representing an absence of value)
	+ Undefined (a special value representing an uninitialized variable)
* **Objects**: These are more complex data types in JavaScript and are used to represent real-world objects or abstract concepts. They are mutable, meaning they can be changed after creation.

**Example of Immutable Primitives**
----------------------------------

```javascript
let x = 10;
console.log(x); // Output: 10
x = 20;
console.log(x); // Output: 20
```

In this example, the variable x is assigned a new value 20, but it doesn't change the original value 10. The original value 10 is still available in memory, but it's no longer referenced by the variable x.

This is because primitive values are immutable by design. When you assign a new value to a variable, you are creating a new copy of the value, rather than modifying the existing value.

**Example of Mutable Objects**
------------------------------

```javascript
let obj = { name: "John", age: 30 };
console.log(obj); // Output: { name: "John", age: 30 }
obj.age = 31;
console.log(obj); // Output: { name: "John", age: 31 }
```

In this example, the "age" property of the "obj" object is changed from 30 to 31. This changes the value of the object itself, rather than creating a new object.

**Key differences between Primitives and Objects**
-----------------------------------------------

* **Immutability**: Primitives are immutable, while objects are mutable.
* **Complexity**: Objects are more complex and can have key-value pairs, while primitives are simple and cannot be changed.

## **Understanding Operators and Expressions in JavaScript**

Operators in JavaScript are symbols that perform specific operations on one or more operands (values or variables). There are several types of operators, including:

* **Arithmetic operators** (e.g. `+`, `-`, `*`, `/`, `%`)
* **Comparison operators** (e.g. `>`, `<`, `>=`, `<=`, `==`, `!=`)
* **Logical operators** (e.g. `&&`, `||`, `!`)
* **Assignment operators** (e.g. `=`, `+=`, `-=`, `*=`, `/=`)
* **Conditional (ternary) operator** (e.g. `?:`)

Expressions are combinations of values, variables, and operators that produce a result. The order in which operators are applied is determined by **operator precedence**. You can use parentheses to specify the order of operations in an expression.

For example:

```javascript
let x = 10 + 5 * 3; // x is 25
let x = (10 + 5) * 3; // x is 45
```

## **Understanding var, let, and const in JavaScript**

In JavaScript, there are three ways to declare variables: **var**, **let**, and **const**. Each of these keywords has its own rules and uses, and understanding the differences between them is essential for writing effective and maintainable code.

### var

* Introduced in the early days of JavaScript
* Function-scoped, rather than block-scoped
* Can be reassigned
* Example: `var x = 10; x = 20;`

```javascript
if (x > 10) {
  var y = 20;
  console.log(y); // 20
}
console.log(y); // 20
```
### let

* Introduced in ECMAScript 6 (ES6)
* Block-scoped
* Can be reassigned
* Example:
```javascript
if (x > 10) {
  let y = 20;
  console.log(y); // 20
}
console.log(y); // ReferenceError: y is not defined
```
### const

* Introduced in ES6
* Block-scoped
* Cannot be reassigned
* Example:
```javascript
const PI = 3.14;
PI = 3.14159; // TypeError: Assignment to constant variable.
```
In summary, **var** is an old way of declaring variables that is function-scoped and can be reassigned, **let** is a newer way of declaring variables that is block-scoped and can be reassigned, and **const** is a newer way of declaring variables that is block-scoped and cannot be reassigned. It is generally recommended to use **let** and **const** instead of **var** in modern JavaScript.

### **Good Practices for var, let, and const:**

1. **Use let and const instead of var**: In modern JavaScript, it's generally recommended to use `let` and `const` instead of `var` for declaring variables. This is because `let` and `const` provide better scoping and make it easier to write maintainable code.
2. **Use const for immutable variables**: If a variable doesn't need to be changed, use `const` to declare it. This makes it clear that the variable should not be reassigned.
3. **Use let for variables that need to be reassigned**: If a variable needs to be reassigned, use `let` to declare it. This makes it clear that the variable can be changed.
4. **Avoid using var in loops**: When using loops, it's generally better to declare variables with `let` or `const` instead of `var`. This helps to avoid issues with variable hoisting and makes the code easier to understand.
5. **Use block scope**: When declaring variables, use block scope (e.g. `let` or `const`) instead of function scope (e.g. `var`). This helps to avoid issues with variable hoisting and makes the code easier to understand.
6. **Use meaningful variable names**: When declaring variables, use meaningful names that describe the purpose of the variable. This makes the code easier to understand and maintain.
7. **Avoid using global variables**: When possible, avoid using global variables. Instead, use local variables declared with `let` or `const` to make the code more modular and easier to maintain.

# Java Script Basics
## **Conditionals**

### **If-Else Conditional**

* **Syntax**: `if (condition) { ... } else { ... }`
* **How it Works**:
	+ Evaluate condition
	+ Execute code if condition is true
	+ Execute "else" code if condition is false
* **Types**:
	+ **If-Else Ladder**: multiple conditions, evaluate in order
	+ **If-Else Statement**: single condition, execute code or "else" code
* **Example**: `if (x > 10) { console.log("x is greater than 10") } else { console.log("x is less than or equal to 10") }`

### **If-Else Ladder**

* **Syntax**: `if (condition1) { ... } else if (condition2) { ... } else if (condition3) { ... } ... else { ... }`
* **How it Works**:
	+ Evaluate each "if" statement in order
	+ Execute code if condition is true, skip rest of ladder
	+ Evaluate next "if" statement if condition is false
	+ Execute "else" code if all conditions are false
* **Example**: `if (x > 15) { ... } else if (x > 10) { ... } else if (x > 5) { ... } else { ... }`

### **Switch Case Statement**

The switch case statement in JavaScript is used to execute different blocks of code based on a specific value. Here's an example:

```javascript
let x = "apple";
switch (x) {
  case "apple":
    console.log("x is an apple");
    break;
  case "banana":
    console.log("x is a banana");
    break;
  case "orange":
    console.log("x is an orange");
    break;
  default:
    console.log("x is something else");
}
```
### **Ternary Operator in JavaScript**

The ternary operator is a shorthand way to write an if-else statement in JavaScript. It takes the form of `condition ? value1 : value2`.

**Example:**
```javascript
let x = 10;
let y = 20;
let max;

max = (x > y) ? x : y;
console.log(max); // Outputs: 20
```
## **JavaScript loops**

### Standard For Loop

```javascript
// Count from 1 to 10
for (let i = 1; i <= 10; i++) {
  console.log(i);
}
```

### For-In Loop

```javascript
// Iterate over object properties
let person = {
  name: "John",
  age: 30,
  job: "developer"
};

for (let key in person) {
  console.log(key + ": " + person[key]);
}
```

### For-Of Loop

```javascript
// Iterate over array elements
let numbers = [1, 2, 3, 4, 5];

for (let number of numbers) {
  console.log(number);
}
```
### **While Loop in JavaScript**
==========================

A while loop is a control flow structure in programming that allows you to repeat a block of code while a certain condition is true.

### **Syntax**
---------

```javascript
while (condition) {
  // code to be executed
}
```

### **Example**
---------

```javascript
let i = 1;
while (i <= 10) {
  console.log(i);
  i++;
}
```

This loop will print the numbers 1 through 10 to the console.

### **Important Points**
-------------------

* The condition is checked at the beginning of each iteration.
* Include a way to update the condition within the loop to avoid infinite loops.
* While loops can be useful when you don't know exactly how many times you need to execute a block of code.

### **Example Use Case**
-------------------

```javascript
let input = "";
while (input !== "yes" && input !== "no") {
  input = prompt("Please enter 'yes' or 'no':");
}
```

This loop will keep prompting the user for input until they enter either "yes" or "no".

## **JavaScript Function Examples**

* **Function Definition**: `function square(x) { return x * x; }`
* **Function Call**: `let result = square(5);`
* **Function Parameters**: `function add(x, y) { return x + y; }`
* **Arrow Function**: `const square = (x) => { return x * x; };`
* **Function Nesting**: 
```javascript
function outerFunction(x) {
  function innerFunction() {
    console.log("Inner function executed");
  }
  innerFunction();
}
outerFunction();
```

# JavaScript Object

**Strings**

**Arrays and Array Methods**

**Loops with Arrays**

**Map, Filter and Reduce**

**Date**

**Math**

**Number**

**Boolean**

### **JavaScript Strings - Notes**  

- **What is a String?**  
  - A **string** is a sequence of characters enclosed in **single ('')**, **double ("")**, or **backticks (\`\`)**.  
  - Example:  
    ```js
    let str1 = "Hello, World!";
    let str2 = 'JavaScript Strings';
    let str3 = `Template Literal Example`;
    ```

- **String Properties**  
  - **length**: Returns the number of characters in a string.  
    ```js
    let text = "Hello";
    console.log(text.length); // Output: 5
    ```

- **String Methods**  
  - **charAt(index)**: Returns the character at the specified index.  
    ```js
    let text = "JavaScript";
    console.log(text.charAt(4)); // Output: S
    ```
  - **slice(start, end)**: Extracts a portion of a string.  
    ```js
    let text = "Hello, World!";
    console.log(text.slice(0, 5)); // Output: Hello
    ```
  - **substring(start, end)**: Similar to `slice` but doesn't accept negative indices.  
    ```js
    console.log(text.substring(0, 5)); // Output: Hello
    ```
  - **substr(start, length)**: Extracts part of a string based on length.  
    ```js
    console.log(text.substr(7, 5)); // Output: World
    ```
  - **toUpperCase() / toLowerCase()**: Converts the string to upper or lower case.  
    ```js
    console.log(text.toUpperCase()); // Output: HELLO, WORLD!
    console.log(text.toLowerCase()); // Output: hello, world!
    ```
  - **concat()**: Joins two or more strings.  
    ```js
    let str1 = "Hello";
    let str2 = "World";
    console.log(str1.concat(", ", str2, "!")); // Output: Hello, World!
    ```
  - **trim() / trimStart() / trimEnd()**: Removes whitespace.  
    ```js
    let text = "  JavaScript  ";
    console.log(text.trim()); // Output: "JavaScript"
    console.log(text.trimStart()); // Output: "JavaScript  "
    console.log(text.trimEnd()); // Output: "  JavaScript"
    ```
  - **replace(search, newValue)**: Replaces a part of the string.  
    ```js
    let text = "I love JavaScript";
    console.log(text.replace("JavaScript", "coding")); // Output: I love coding
    ```
  - **split(separator, limit)**: Splits a string into an array.  
    ```js
    let text = "apple,banana,orange";
    console.log(text.split(",")); // Output: ["apple", "banana", "orange"]
    ```
  - **includes(substring)**: Checks if a string contains a specific value.  
    ```js
    console.log("JavaScript".includes("Script")); // Output: true
    ```
  - **startsWith() / endsWith()**: Checks if a string starts or ends with a specific value.  
    ```js
    console.log("JavaScript".startsWith("Java")); // Output: true
    console.log("JavaScript".endsWith("Script")); // Output: true
    ```

- **Template Literals (Backticks ` `` `)**  
  - Allows **multiline strings** and **variable interpolation** using **${}**.  
    ```js
    let name = "Alice";
    let greeting = `Hello, ${name}!`;
    console.log(greeting); // Output: Hello, Alice!
    ```
  - Supports **expressions inside ${}**.  
    ```js
    console.log(`2 + 2 = ${2 + 2}`); // Output: 2 + 2 = 4
    ```

- **Escape Characters** (Using `\`)  
  - `\'` → Single quote  
  - `\"` → Double quote  
  - `\\` → Backslash  
  - `\n` → New line  
  - `\t` → Tab  
    ```js
    let text = "Hello\nWorld!";
    console.log(text);
    ```
    Output:  
    ```
    Hello
    World!
    ```

- **String Comparison**  
  - Uses ASCII values for comparison (`A < B`, `a > A`).  
    ```js
    console.log("apple" < "banana"); // Output: true
    console.log("Hello" === "hello"); // Output: false (case-sensitive)
    ```

### **JavaScript Arrays and Array Methods - Notes**  

- **What is an Array?**  
  - An **array** is a data structure used to store multiple values in a single variable.  
  - Arrays can hold different data types (numbers, strings, objects, etc.).  
  - Declared using **square brackets `[]`** or the `Array` constructor.  
    ```js
    let fruits = ["Apple", "Banana", "Orange"];  // Using []
    let numbers = new Array(1, 2, 3, 4);        // Using Array constructor
    ```

- **Array Properties**  
  - **length** **: Returns the number of elements in an array.  
    ```js
    let arr = [10, 20, 30, 40];
    console.log(arr.length); // Output: 4
    ```

- **Accessing Elements**  
  - Indexed from `0` (first element) to `length - 1` (last element).  
  - Negative indices (like `arr[-1]`) do not work in standard arrays.  
    ```js
    let arr = ["a", "b", "c"];
    console.log(arr[0]); // Output: "a"
    console.log(arr[arr.length - 1]); // Output: "c"
    ```

- **Modifying Arrays**  
  - **Reassigning Elements**:  
    ```js
    let arr = ["a", "b", "c"];
    arr[1] = "z";
    console.log(arr); // Output: ["a", "z", "c"]
    ```
  - **Adding Elements**:  
    ```js
    arr.push("d"); // Adds "d" to the end
    console.log(arr); // Output: ["a", "z", "c", "d"]
    ```
  - **Removing Elements**:  
    ```js
    arr.pop(); // Removes last element
    console.log(arr); // Output: ["a", "z", "c"]
    ```

- **Array Methods**  

  - **push(element)** ** → Adds element to the **end** of an array.  
    ```js
    let arr = [1, 2, 3];
    arr.push(4);
    console.log(arr); // Output: [1, 2, 3, 4]
    ```
  - **pop()** ** → Removes and returns the **last** element.  
    ```js
    let removed = arr.pop();
    console.log(removed); // Output: 4
    console.log(arr); // Output: [1, 2, 3]
    ```
  - **unshift(element)** ** → Adds element to the **beginning**.  
    ```js
    arr.unshift(0);
    console.log(arr); // Output: [0, 1, 2, 3]
    ```
  - **shift()** → Removes and returns the **first** element.  
    ```js
    let first = arr.shift();
    console.log(first); // Output: 0
    console.log(arr); // Output: [1, 2, 3]
    ```
  - **splice(start, deleteCount, item1, item2, ...)** ** → Adds or removes elements at a specific index.  
    ```js
    let arr = [1, 2, 3, 4];
    arr.splice(1, 2, "a", "b"); // Removes 2 elements starting at index 1 and inserts "a", "b"
    console.log(arr); // Output: [1, "a", "b", 4]
    ```
  - **slice(start, end)** **→ Returns a new array containing selected elements.  
    ```js
    let arr = [10, 20, 30, 40, 50];
    console.log(arr.slice(1, 4)); // Output: [20, 30, 40]
    ```
  - **concat(array1, array2, ...)** → Merges arrays.  
    ```js
    let arr1 = [1, 2];
    let arr2 = [3, 4];
    let combined = arr1.concat(arr2);
    console.log(combined); // Output: [1, 2, 3, 4]
    ```
  - **indexOf(value)** → Returns the index of the first occurrence of a value.  
    ```js
    let arr = ["a", "b", "c", "b"];
    console.log(arr.indexOf("b")); // Output: 1
    ```
  - **lastIndexOf(value)** → Returns the index of the last occurrence.  
    ```js
    console.log(arr.lastIndexOf("b")); // Output: 3
    ```
  - **includes(value)** → Checks if a value exists in an array.  
    ```js
    console.log(arr.includes("c")); // Output: true
    console.log(arr.includes("z")); // Output: false
    ```
  - **join(separator)** → Converts an array to a string.  
    ```js
    let words = ["Hello", "World"];
    console.log(words.join(" ")); // Output: "Hello World"
    ```
  - **reverse()** **→ Reverses the array order.  
    ```js
    let arr = [1, 2, 3];
    arr.reverse();
    console.log(arr); // Output: [3, 2, 1]
    ```
  - **sort()** → Sorts an array (default is lexicographical order).  
    ```js
    let numbers = [10, 5, 2, 8];
    numbers.sort();
    console.log(numbers); // Output: [10, 2, 5, 8] (not numerically correct)
    ```
    - To sort numerically:  
      ```js
      numbers.sort((a, b) => a - b);
      console.log(numbers); // Output: [2, 5, 8, 10]
      ```
  - **map(callback)** **→ Creates a new array with modified elements.  
    ```js
    let nums = [1, 2, 3];
    let doubled = nums.map(num => num * 2);
    console.log(doubled); // Output: [2, 4, 6]
    ```
  - **filter(callback)** **→ Returns a new array with elements that satisfy a condition.  
    ```js
    let numbers = [1, 2, 3, 4, 5];
    let even = numbers.filter(num => num % 2 === 0);
    console.log(even); // Output: [2, 4]
    ```
  - **reduce(callback, initialValue)** ** → Reduces an array to a single value.  
    ```js
    let numbers = [1, 2, 3, 4];
    let sum = numbers.reduce((acc, num) => acc + num, 0);
    console.log(sum); // Output: 10
    ```
  - **find(callback)** → Returns the first element that matches a condition.  
    ```js
    let numbers = [5, 12, 8, 130, 44];
    let found = numbers.find(num => num > 10);
    console.log(found); // Output: 12
    ```
  - **findIndex(callback)** → Returns the index of the first matching element.  
    ```js
    console.log(numbers.findIndex(num => num > 10)); // Output: 1
    ```
  - **every(callback)** → Checks if all elements satisfy a condition.  
    ```js
    console.log([2, 4, 6].every(num => num % 2 === 0)); // Output: true
    ```
  - **some(callback)** → Checks if at least one element satisfies a condition.  
    ```js
    console.log([1, 3, 5].some(num => num % 2 === 0)); // Output: false
    ```

- **Converting Between Arrays and Strings**  
  - **split(separator) [Imp]** → Converts a string to an array.  
    ```js
    let text = "apple,banana,orange";
    let fruits = text.split(",");
    console.log(fruits); // Output: ["apple", "banana", "orange"]
    ```

### **Loops with Arrays in JavaScript - Notes**  

- **Why Use Loops with Arrays?**  
  - Loops help iterate over arrays efficiently.  
  - Used for **accessing, modifying, filtering, or transforming** array elements.  

- **Types of Loops for Arrays**  

  1. **for Loop** (Traditional Loop)  
     - Uses an index to iterate through an array.  
     - Suitable when index manipulation is needed.  
     ```js
     let arr = ["a", "b", "c"];
     for (let i = 0; i < arr.length; i++) {
         console.log(arr[i]); 
     }
     // Output: a b c
     ```

  2. **while Loop**  
     - Runs while a condition is true.  
     ```js
     let arr = [10, 20, 30];
     let i = 0;
     while (i < arr.length) {
         console.log(arr[i]);
         i++;
     }
     // Output: 10 20 30
     ```

  3. **do...while Loop**  
     - Executes at least once before checking the condition.  
     ```js
     let arr = [5, 10, 15];
     let i = 0;
     do {
         console.log(arr[i]);
         i++;
     } while (i < arr.length);
     // Output: 5 10 15
     ```

  4. **for...of Loop** (Preferred for Arrays)  
     - Iterates over array elements directly.  
     - Simpler syntax, no need for `arr[i]`.  
     ```js
     let arr = ["x", "y", "z"];
     for (let element of arr) {
         console.log(element);
     }
     // Output: x y z
     ```

  5. **forEach() Method** (Higher-order function)  
     - Calls a function for each element.  
     - Cannot `break` or `return` from the loop.  
     ```js
     let arr = ["apple", "banana", "cherry"];
     arr.forEach((fruit, index) => {
         console.log(`${index}: ${fruit}`);
     });
     // Output:
     // 0: apple
     // 1: banana
     // 2: cherry
     ```

  6. **map() Method** (Returns a New Array)  
     - Transforms array elements without modifying the original array.  
     ```js
     let nums = [1, 2, 3];
     let squared = nums.map(num => num * num);
     console.log(squared); 
     // Output: [1, 4, 9]
     ```

  7. **filter() Method** (Returns Filtered Elements)  
     - Creates a new array with elements that satisfy a condition.  
     ```js
     let nums = [1, 2, 3, 4, 5];
     let even = nums.filter(num => num % 2 === 0);
     console.log(even); 
     // Output: [2, 4]
     ```

  8. **reduce() Method** (Accumulates Values)  
     - Reduces an array to a single value.  
     ```js
     let nums = [1, 2, 3, 4];
     let sum = nums.reduce((acc, num) => acc + num, 0);
     console.log(sum);
     // Output: 10
     ```

- **Loop Optimization Tips**  
  - Cache `arr.length` in `for` loops to improve performance.  
    ```js
    for (let i = 0, len = arr.length; i < len; i++) { ... }
    ```
  - Use **for...of** or **forEach()** for readability.  
  - Use **map(), filter(), and reduce()** for functional programming.  


### **JavaScript Date, Math, Number, and Boolean - Notes**  

---

## **1. Date Object**  

- The **Date object** is used to work with dates and times.  
- Created using `new Date()`.  
  ```js
  let currentDate = new Date();
  console.log(currentDate); // Outputs current date and time
  ```

### **Creating a Date Object**  
- **new Date()** → Current date & time.  
- **new Date(year, month, day, hours, minutes, seconds, milliseconds)**  
  ```js
  let customDate = new Date(2023, 5, 15, 10, 30, 0); 
  console.log(customDate); // Output: Thu Jun 15 2023 10:30:00
  ```
- **new Date("YYYY-MM-DD")** (ISO format recommended)  
  ```js
  let isoDate = new Date("2024-01-01");
  console.log(isoDate); // Output: Mon Jan 01 2024 00:00:00
  ```

### **Date Methods**  
- **getFullYear()** → Returns the year.  
  ```js
  console.log(new Date().getFullYear()); // Output: 2025
  ```
- **getMonth()** → Returns month (0-11).  
  ```js
  console.log(new Date().getMonth()); // Output: 2 (March)
  ```
- **getDate()** → Returns day of the month (1-31).  
  ```js
  console.log(new Date().getDate()); // Output: 27
  ```
- **getDay()** → Returns the weekday (0-6, where 0 = Sunday).  
  ```js
  console.log(new Date().getDay()); // Output: 4 (Thursday)
  ```
- **getHours(), getMinutes(), getSeconds(), getMilliseconds()** → Get time values.  
- **setFullYear(), setMonth(), setDate()** → Modify date values.  
  ```js
  let date = new Date();
  date.setFullYear(2030);
  console.log(date.getFullYear()); // Output: 2030
  ```

---

## **2. Math Object**  

- The **Math object** provides mathematical constants and functions.  
- It is **not a constructor** (no `new Math()`).  

### **Math Constants**  
- **Math.PI** → `3.141592653589793`  
- **Math.E** → `2.718281828459045`  

### **Math Methods**  
- **Math.abs(x)** → Returns the absolute value.  
  ```js
  console.log(Math.abs(-10)); // Output: 10
  ```
- **Math.ceil(x)** → Rounds up.  
  ```js
  console.log(Math.ceil(4.3)); // Output: 5
  ```
- **Math.floor(x)** → Rounds down.  
  ```js
  console.log(Math.floor(4.9)); // Output: 4
  ```
- **Math.round(x)** → Rounds to the nearest integer.  
  ```js
  console.log(Math.round(4.5)); // Output: 5
  ```
- **Math.max(x, y, ...)** → Returns the largest value.  
  ```js
  console.log(Math.max(10, 20, 5)); // Output: 20
  ```
- **Math.min(x, y, ...)** → Returns the smallest value.  
  ```js
  console.log(Math.min(10, 20, 5)); // Output: 5
  ```
- **Math.random()** → Returns a random number between `0` and `1`.  
  ```js
  console.log(Math.random()); // Output: 0.123456 (random)
  ```
  - **Generating random integer in a range:**  
    ```js
    function getRandomInt(min, max) {
        return Math.floor(Math.random() * (max - min + 1)) + min;
    }
    console.log(getRandomInt(1, 10)); // Random integer between 1 and 10
    ```
- **Math.sqrt(x)** → Square root.  
  ```js
  console.log(Math.sqrt(25)); // Output: 5
  ```
- **Math.pow(base, exponent)** → Power calculation.  
  ```js
  console.log(Math.pow(2, 3)); // Output: 8
  ```
- **Math.trunc(x)** → Removes decimal part.  
  ```js
  console.log(Math.trunc(4.9)); // Output: 4
  ```

---

## **3. Number Object**  

- The **Number object** is used for numerical values.  

### **Number Properties**  
- **Number.MAX_VALUE** → Largest possible number.  
- **Number.MIN_VALUE** → Smallest possible number.  
- **Number.POSITIVE_INFINITY** → Represents `Infinity`.  
- **Number.NEGATIVE_INFINITY** → Represents `-Infinity`.  
- **Number.NaN** → Represents "Not a Number".  

### **Number Methods**  
- **parseInt(string, radix)** → Converts a string to an integer.  
  ```js
  console.log(parseInt("42")); // Output: 42
  console.log(parseInt("101", 2)); // Output: 5 (binary to decimal)
  ```
- **parseFloat(string)** → Converts a string to a floating-point number.  
  ```js
  console.log(parseFloat("3.14")); // Output: 3.14
  ```
- **toFixed(n)** → Formats a number with `n` decimal places.  
  ```js
  let num = 3.14159;
  console.log(num.toFixed(2)); // Output: "3.14"
  ```
- **toPrecision(n)** → Formats a number to `n` total digits.  
  ```js
  console.log(num.toPrecision(3)); // Output: "3.14"
  ```
- **isNaN(value)** → Checks if a value is NaN.  
  ```js
  console.log(isNaN("hello")); // Output: true
  console.log(isNaN(123)); // Output: false
  ```
- **isFinite(value)** → Checks if a value is a finite number.  
  ```js
  console.log(isFinite(10 / 0)); // Output: false
  console.log(isFinite(100)); // Output: true
  ```

---

## **4. Boolean Object**  

- The **Boolean object** represents `true` or `false` values.  
- Can be created explicitly using `new Boolean(value)`, but **not recommended**.  
  ```js
  let bool1 = new Boolean(false);
  console.log(bool1); // Output: [Boolean: false]
  ```

### **Boolean Values in JavaScript**  
- **Falsy values** (`false`, `0`, `""`, `null`, `undefined`, `NaN`) → Evaluates to `false`.  
- **Truthy values** (any non-falsy value) → Evaluates to `true`.  

### **Boolean Methods**  
- **Boolean(value)** → Converts a value to `true` or `false`.  
  ```js
  console.log(Boolean(0)); // Output: false
  console.log(Boolean("hello")); // Output: true
  ```
- **Logical Operators with Booleans**  
  - **&& (AND)** → Returns `true` if both are `true`.  
  - **|| (OR)** → Returns `true` if at least one is `true`.  
  - **! (NOT)** → Inverts the boolean value.  
  ```js
  console.log(true && false); // Output: false
  console.log(true || false); // Output: true
  console.log(!true); // Output: false
  ```
