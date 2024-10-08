
# Arrays Playground

**Date:** 2024-02-09  
**Author:** Krystof Hes  

## Description
This document demonstrates array initialization, basic operations, and loops in C++.


## Array Initialization

```cpp
int numbers[3]{0, 1, 2};  // No '=' needed, PREFERRED VARIANT
int numbers_partly[5] = {0, 1};  // Unspecified elements are initialized to 0
```

## Array Size

- **Number of elements in an array:**

  ```cpp
  size(numbers);  // std::size(arr) returns number of elements in the array
  ```

- **Size of the array in bytes:**

  ```cpp
  sizeof(numbers);
  ```

## For Loops

- **Using `size_t` for loop indices:**

  ```cpp
  for (size_t i{0}; i < size(numbers); i++) {
      cout << numbers[i] << endl;
  }
  ```

- **Alternative loop initialization (not type-safe):**

  ```cpp
  for (size_t i = 0; i < size(numbers); i++) {
      cout << numbers[i] << endl;
  }
  ```

## Range-Based For Loops

- **Automatic size and range-based loop (indices are lost):**

  ```cpp
  for (auto value : numbers_automatic) {
      cout << value << endl;
  }
  ```

### Example: Cumulative Sum

- **Calculate cumulative sum using a range-based loop:**

  ```cpp
  int cumsum = 0;
  int scores[]{1, 2, 3, 4};
  for (int element : scores) {
      cumsum += element;
  }
  cout << "Score sum: " << cumsum << endl;
  ```

## Constants in Loops

- **Using a constant to control loop iterations:**

  ```cpp
  const size_t N_ITERATIONS{3};
  for (size_t i{}; i < N_ITERATIONS; ++i) {
      cout << "Running..." << endl;
  }
  ```

## Character Arrays

- **Explicit declaration of null-terminated char array:**

  ```cpp
  char message1[5]{'T', 'e', 's', 't', '\0'};  // Explicit null character
  ```

- **Implicit null-terminated char array:**

  ```cpp
  char message2[5]{'T', 'e', 's', 't'};  // Implicit null character
  ```