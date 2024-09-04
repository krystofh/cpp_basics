// Title: Lambda functions demo
// Date: 2024-09-04
// Author: Krystof Hes
/* Description
     - usage of lambda functions
     - capture list by value and by reference
     - using function handles
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int a{24};
    unsigned int b{32};
    const char msg[]{"welcome here text"};

    /*
    Lambda functions in C++ are powerful tools for writing concise, local functions,
    especially in scenarios involving callbacks, algorithms, and event handling.
    The capture list allows you to control how external variables are accessed within the lambda,
    with capture by value preserving the initial state, and capture by reference allowing for interaction with the latest state.
    Choose the capture method based on whether you need to modify or preserve the state of the captured variables.
    */

    // lambda function structure: [capture list](arguments){body};
    []()
    {
        cout << "Using anonymous lambda function" << endl;
    }(); // function is directly executed by adding ()

    // Capture by value and usage of return statement
    auto result = [a, b]()
    {
        // a = a + 100; // will not be possible
        return a + b;
    };
    cout << "The result is: " << result() << endl;

    // Capture by reference
    auto result2 = [&a, &b]()
    {
        a = a + 100; // will not be possible
        return a + b;
    };
    cout << "The result is: " << result2() << endl;
    cout << "a (after): " << a << endl; // we see that the value outside of the lambda f. scope was manipulated
    // Capture all variables by reference
    auto result3 = [&]()
    {
        ++a;
        ++b;
        return a + b;
    };
    cout << "The result is: " << result3() << endl;

    return 0;
}