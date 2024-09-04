// Title: Std strings introduction
// Date: 2024-09-03
// Author: Krystof Hes
/* Description
    - some basic usage of std::strings library
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string example{"This is an example of std::string"};
    cout << example << endl;
    string example2(6, 'a'); // initialise with repeated character
    cout << example2 << endl;
    string example3("This will be cut", 4); // this string will be cut and only first N chars stored
    cout << example3 << endl;
    example3 = "String was changed at runtime and it grew significantly"; // changing string at runtime is possible and \
     memory is returned as opposed to arrays
    cout << example3 << endl;
    return 0;
}