// Title: Calculator
// Date: 15.01.2024
// Author: Krystof Hes

/*Description:
Simple calculator demonstrating numeric operations and working with variables in C++
*/

#include <iostream>
#include <string>

using namespace std;

double process_operation(double num1, double num2, char operation)
{
    switch (operation)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        return num1 / num2;
        break;
    default:
        cerr << "Operation not permitted. Try using a different operator." << endl;
        break;
    }
    return 0;
}

int main()
{
    double num1, num2;
    char operation;

    cout << "Please input an expression:" << endl;
    if (!(cin >> num1))
    {
        cerr << "Error! Invalid input. Expected a numeric value.";
        return 1; // return error code
    }
    if (!(cin >> operation))
    {
        cerr << "Error! Invalid input. Expected a char.";
        return 1; // return error code
    }
    if (!(cin >> num2))
    {
        cerr << "Error! Invalid input. Expected a numeric value.";
        return 1; // return error code
    }
    double result = process_operation(num1, num2, operation);
    cout << " = " << result << endl;
    clog << "Program will terminate now. Thank you!" << endl; // example of a log message
    return 0;
}