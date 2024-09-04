// Title: Functions
// Date: 2024-09-04
// Author: Krystof Hes
/* Description
    - passing arguments to functions by value or by reference
*/

// Compile note - include all files for example 16:
// /opt/homebrew/bin/g++-14 -fdiagnostics-color=always 16_*.cpp -o out/16_functions

#include <iostream>
#include <string>
#include "16_operations.h" // preprocessor includes the header file

using namespace std;

// Functions declarations before main(), implementation goes after
int add_numbers(int a, int b); // this practice makes the code cleaner
void b2a(int *a, int *b);
void multiply(int &number, int factor);
int increment(int number);
string concatenate(string s1, string s2);

int main()
{
    greet(); // this function comes from 16_operations.cpp file and its header where it is declared.
    int a = 3;
    int b = 4;
    cout << a << " + " << b << " = " << add_numbers(a, b) << endl;
    cout << "Adding " << b << " to " << a << ": " << endl;
    cout << "Before a: " << a << " b: " << b << endl;
    b2a(&a, &b); // pass the address to change the variable in main body instead of making a copy
    cout << "After a: " << a << " b: " << b << endl;
    cout << " ===== " << endl;
    int c = 4;
    int factor = 10;
    cout << "Multiplying by " << factor << ": " << endl;
    cout << "c: " << c << " (before)" << endl;
    multiply(c, factor);
    cout << "c: " << c << " (after)" << endl;
    cout << " ===== " << endl;
    // Returning by value (default)
    int result = increment(1);
    cout << "Outside: &" << &result << endl; // print the address of result
    // Returning by reference (caused by compiler optimisation)
    // typically done for non-native types
    cout << " ===== " << endl;
    string result_string = concatenate("Hello", " world");
    cout << "Outside: &" << &result_string << endl; // print the address of result
    // The local variable inside the function is not really available outside, but some operations in background save memory
    say_bye();
    return 0;
}

int add_numbers(int a, int b)
{
    return a + b;
}

void b2a(int *a, int *b) // arguments are pointers, variables from main are manipulated
{
    *a += *b; // add b to a, as the variables are pointers they need dereferencing with '*'
    // by dereferencing, pointer's value instead of address is changed
}

void multiply(int &number, int factor) // number is a reference - this time it can be used directly without dereferencing.
{
    number *= factor;
}

int increment(int number)
{
    int result = number + 1;
    cout << "Inside: &" << &result << endl; // print the address of result
    return result;                          // return by value
}

string concatenate(string s1, string s2)
{ // strings passed as values only
    string result = s1 + s2;
    cout << "Inside: &" << &result << endl; // print the address of result
    return result;
}
