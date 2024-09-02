// Title: Strings manipulation
// Date: 2024-09-02
// Author: Krystof Hes
/* Description
     - manipulation of strings using cctype fucntions
     - https://en.cppreference.com/w/cpp/header/cctype
*/

#include <iostream>

using namespace std;

int main()
{

    char message[] = {"This is a very important message that I am showing tout le monde."};

    int blanks{};
    for (size_t i{0}; i < size(message); i++)
    {
        if (isblank(message[i]))
        {
            ++blanks;
        }
    }
    cout << "Found " << blanks << " blanks." << endl; // last blank is the null termination character
    return 0;
}