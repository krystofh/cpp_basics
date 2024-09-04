// Title: Concepts
// Date: 2024-09-04
// Author: Krystof Hes
/* Description
    - from C++ 20, concepts are introduced
    - these are constraints on template arguments
*/

#include <iostream>
#include <string>

using namespace std;

// Concept syntax Nr.1
// checks that the arguments fulfill a certain condition (such as being an integral type here)
// alternatively with a type trait:
// template <typename T> requires is_integral_v
template <typename T>
    requires integral<T>
T add(T a, T b)
{
    return a + b;
}

template <typename T>
    requires floating_point<T>
T subtract(T a, T b)
{
    return a - b;
}

// Syntax 2
template <integral T>
T or_function(T a, T b)
{
    return a | b;
}

// Syntax 3 - using auto keyword
auto add_using_auto(integral auto a, integral auto b)
{
    return a + b;
}

// Syntax 4 - require keyword at the end
template <typename T>
T minimum(T a, T b)
    requires integral<T>
{
    return min(a, b);
}

// Defining custom concepts
// - example checking if all three incement operations can be carried out on the variable
// - if not, compile error is thrown
template <typename T>
concept incementable_type = requires(T param) {
    param++;
    ++param;
    param += 1;
};

template <incementable_type T>
T incement_number(T number)
{
    cout << "The argument can be incremented." << endl;
    return ++number;
}

// Requirements can be nested like this using requires keyword
template <typename T>
concept SimpleType = requires(T number) {
    sizeof(T) < 4;                      // checks just the syntax
    requires sizeof(T) < 4;             // checks the expression (only expressions applicable to type and not the value!)
    { number } -> convertible_to<char>; // compound requirement - check the return statement of {...}
};

SimpleType auto print_var(SimpleType auto a)
{
    cout << "a" << endl;
    return a;
}

// Note: concepts can be combined in logic expressions using && and ||

int main()
{
    cout << add(1, 2) << endl;
    string str1{"Europe"};
    string str2{"France"};
    // cout << add(str1, str2) << endl; // string is not an integral type, so this will not run

    cout << subtract(5.8, 2.4) << endl; // will compile as arguments are floating points
    // cout << subtract(5, 2) << endl;     // will not compile as args are no floating points
    cout << or_function(1, 0) << endl;
    cout << add_using_auto(1, 0) << endl;
    cout << minimum(45, 56) << endl;

    cout << "=======" << endl;
    cout << incement_number(4) << endl;
    cout << incement_number('a') << endl;
    cout << incement_number(4.5) << endl;
    cout << "=======" << endl;
    cout << "Testing compound requirement" << endl;
    print_var('c'); // char is 1 byte - condition satisfied
    short i{8};
    print_var(i); // will also compile
    // print_var(8); // normal integer will not compile

    return 0;
}