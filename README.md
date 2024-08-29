# C++ playground

Basic examples in C++ language demonstrating the concepts and usage.

## Structure

- `out`: compiled files, not to be uploaded in git
- `doc`: documentation of individual files (mostly generated with ChatGPT 3.5)
- `tools`: utilities for checking the tooling (compiler, GIT, etc.)

## List of examples
| Title                                          | Description                                                                                                                                      | Includes                                                                  |
| ---------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------- |
| [hello world](helloworld.cpp)                  | First program                                                                                                                                    | minimal program template                                                  |
| [calculator](calculator.cpp)                   | Simple calculator program with user input                                                                                                        | switch-case, `cin`, strings                                               |
| [data input and output](data_input_output.cpp) | Keyboard input                                                                                                                                   | `getline()`                                                               |
| [numbers](numbers.cpp)                         | Binary operations, displaying numbers in different systems, unary operators, input as scientific notation                                        | unary operators, `<bitset>` library for displaying in BIN <br> `typeid()` |
| [formatting output](formatting_output.cpp)     | Formatting column width, precision of doubles etc.                                                                                               | use of  `<iomanip>` library for print output formatting                   |
| [variable types](variable_types.cpp)           | Declaration and usage of various variable types, exploring sizes in bytes                                                                        | `<cstdint>`, `<iomanip>`                                                  |
| [check_cpp_version](check_cpp_version.cpp)     | Check and display the C++ standard version used by the compiler                                                                                  |                                                                           |
| [math functions](math_functions.cpp)           | Basic mathematical functions including rounding, absolute value, exponential, log, and trigonometric functions                                   | `<cmath>`, `<iomanip>`                                                    |
| [control flow demo](control_flow_demo.cpp)     | Demonstration of control flow using if-else, switch, enums, loops, and ternary operators. As a bonus - example of using random numbers generator | `<random>`, `<string>`                                                    |

## Ideas for tiny projects

- `traffic light simulator`: time, visualisation, OOP, random numbers, no GUI - console output only
- `calculator` including GUI

## Resources

- https://www.youtube.com/watch?v=8jLOx1hD3_o&t=21694s
- https://www.geeksforgeeks.org/c-plus-plus/?ref=lbp
- https://www.codecademy.com/learn/c-plus-plus-for-programmers