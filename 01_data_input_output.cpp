// Title: Input output
// Date: 15.01.2024
// Author: Krystof Hes

/*Description:
Simple demonstration of input and output
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    cout << "Input your full name:" << endl;
    // cin >> name >> age; // input on single line, spaces will disturb the input
    // cout << "Name: " << name << endl
    //      << "Age: " << age << endl;

    // data with spaces
    string full_name;
    getline(cin, full_name);
    cout << "Input your age: " << endl;
    cin >> age;
    cout << "Name: " << full_name << endl
         << "Age: " << age << endl;

    return 0;
}