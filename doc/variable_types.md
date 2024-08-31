# C++ Basics: Variable Types and Sizes

**Date**: 2024-01-16  
**Author**: Krystof Hes

## Description

This C++ program serves as a basic tutorial for beginners, providing insights into variable types and their sizes. The code demonstrates the declaration and usage of various variable types, including integers, floating-point numbers, and fixed-size integers. It also explores the sizes of these variables in bytes, highlighting the importance of understanding data representation in memory.

## Code Overview

### Variable Types and Sizes

The program declares and initializes variables of different types, such as `int`, `unsigned int`, `short int`, `short`, `double`, `auto`, `long`, `long long`, `float`, `double`, and `long double`. It then prints the sizes of these variables using the `sizeof` operator.

### Fixed-Size Integer Types

The code introduces fixed-size integer types (`int8_t`, `uint8_t`, `int16_t`, `uint16_t`) from the `<cstdint>` header. It demonstrates the necessity of casting when printing the values of these types and includes a section displaying the limits of 8, 16, and 32-bit integers.

### Overflow Demonstration

A section showcases potential issues with overflow when reassigning values to variables, especially those initialized with the `auto` keyword. It includes a cautionary example with an attempt to assign a negative value to an `unsigned int` variable.

## Usage

This program is an educational resource for beginners to understand fundamental concepts related to variable types, their sizes, and the potential pitfalls associated with certain operations. It provides practical examples and encourages users to experiment with different data types to enhance their understanding of C++ programming.
