// Title: Math functions
// Date: 2024-01-16
// Author: Krystof Hes
/*Description:
Basic mathematic functions which can be used in C++ programs. More on math: // https://learn.microsoft.com/en-us/cpp/c-runtime-library/math-constants?view=msvc-170
*/
#include <iostream>
#define _USE_MATH_DEFINES // constant M_PI is defined in the C macro
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Rounding
    double d1 = 152.651;
    cout << "floor(" << d1 << ") = " << floor(d1) << endl;
    cout << "ceil(" << d1 << ") = " << ceil(d1) << endl;

    // Abs
    float f1 = -15.42;
    cout << "abs(" << f1 << ") = " << abs(f1) << endl;

    // Exponential and log
    auto var1 = 3;
    cout << "e^" << var1 << " = " << exp(var1) << endl;
    auto var2 = 100;
    cout << "log10(" << var2 << ") = " << log10(var2) << endl;
    cout << "Value of e: " << M_E << endl;

    // Using pi
    cout << setprecision(10);                // increase precision to see more of PI
    cout << "value of pi: " << M_PI << endl; // constant M_PI is defined in the C macro

    // Goniometric functions
    cout << "cos(0) = " << cos(0) << endl;
    cout << "acos(1) = " << acos(1) << endl;
    cout << "asin(1) = PI/2 =" << asin(1) << endl;
    cout << "Pi is therefore: " << 2 * asin(1) << endl; // this approach can be used to define PI without the header file
    return 0;
}