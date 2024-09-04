// Title: Function templates
// Date: 2024-09-04
// Author: Krystof Hes
/* Description
// Template
// - avoids declaration of functions that are not actually used
// - is created by the compiler by examining the arguments you call the blueprint function with, NOT ACTUAL C++ code
// - real C++ generated function is called template instance
 */

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <typename T>
const T square_me(const T &number); // declaration can be also separated from implementation

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

// template specialisation to define how exactly will this variable type be handled
template <>
const char *maximum(const char *s1, const char *s2);

int main()
{
    string s1 = "Omaha";
    string s2 = "New York";
    cout << "Ints: " << maximum(3, 7) << endl; // the compiler deduces based on arguments that int implementation shall be used
    cout << "Doubles: " << maximum(15.8, 4.2) << endl;
    cout << "Strings: " << maximum(s1, s2) << endl;

    int a{1};
    int b{2};
    double result = maximum<double>(a, 3.4); // explicit function arguments - request function implementation of type double
    // the integer is implicitly converted to double upon execution (when possible)
    cout << typeid(result).name() << endl; // checking the type is possible with typeid
    cout << "The result of explicit function call is: " << result << endl;

    cout << "============" << endl;
    int test_number{5};
    cout << "Square of " << test_number << " is: " << endl;
    auto resulting_square = square_me(test_number);
    cout << resulting_square << endl;
    cout << "test_number: " << test_number << endl;
    cout << "============" << endl;
    const char *pet1{"cat"};
    const char *pet2{"big cat"};
    cout << maximum(pet1, pet2) << endl; // this does not compare the char arrays, \
    rather the addresses of pointers unless we do template specialization
    return 0;
}

// template using argument passed as reference
template <typename T>
const T square_me(const T &number)
{
    return (number * number);
}

// template specialisation to define how exactly will this variable type be handled
template <>
const char *maximum(const char *s1, const char *s2)
{
    return (strcmp(s1, s2) > 0) ? s1 : s2;
}