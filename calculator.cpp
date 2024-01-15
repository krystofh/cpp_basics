// Title: Calculator
// Date: 15.01.2023
// Author: Krystof Hes

/*Description:
Simple calculator demonstrating numeric operations and working with variables in C++
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    double num1;
    cout << "Please input a number" << endl;
    if (!(cin >> num1))
    {
        cerr << "Error! Invalid input. Expected a numeric value.";
        return 1; // return error code
    }
    cout << "You entered: " << num1;
}