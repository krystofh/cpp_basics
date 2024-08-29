// Title: Helloworld
// Date: 12.01.2024
// Author: Krystof Hes
/*Description:
Simplest program in C++
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "What`s your name?" << endl;
    string name;
    cin >> name;
    cout << "Hello " << name << "!";
    return 0;
}