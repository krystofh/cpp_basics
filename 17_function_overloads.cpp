// Title: Function overloads
// Date: 2024-09-04
// Author: Krystof Hes
/* Description
    - example of function overloading
    - functions with same name but different argument types
*/

#include <iostream>
#include <string>

using namespace std;

int max(int a, int b);
double max(double a, double b);
string max(string s1, string s2);

int main()
{
    int max_int = max(1, 2);
    double max_double = max(3.8, 2.9);
    string s1 = "Prague";
    string s2 = "Cheb";
    string max_string = max(s1, s2);

    cout << "Max int: " << max_int << endl;
    cout << "Max double: " << max_double << endl;
    cout << "Max string: " << max_string << endl;
    return 0;
}

int max(int a, int b)
{
    cout << "Using int overload" << endl;
    return (a > b) ? a : b;
}

double max(double a, double b)
{
    cout << "Using double overload" << endl;
    return (a > b) ? a : b;
}

string max(string s1, string s2)
{
    cout << "Using string overload" << endl;
    return (s1.size() > s2.size()) ? s1 : s2;
}