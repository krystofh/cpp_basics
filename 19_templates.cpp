// Title: Function templates
// Date: 2024-09-04
// Author: Krystof Hes
/* Description
 */

#include <iostream>
#include <string>

using namespace std;

// Template for max function
// - avoids declaration of functions that are not actually used
// - created by the compiler by examining the arguments you call the blueprint function with, NOT ACTUAL C++ code
// - real C++ generated function is called template instance

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    string s1 = "Omaha";
    string s2 = "New York";
    cout << "Ints: " << maximum(3, 7) << endl;
    cout << "Doubles: " << maximum(15.8, 4.2) << endl;
    cout << "Strings: " << maximum(s1, s2) << endl;
    return 0;
}