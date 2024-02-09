// Title: Arrays playground
// Date: 2024-02-09
// Author: Krystof Hes
/*Description:
Testing array initialisation and operations
*/
#include <iostream>

using namespace std;

int main()
{
    int numbers[3]{0, 1, 2};        // notice that no = is needed, this is the PREFERRED VARIANT
    int numbers_partly[5] = {0, 1}; // rest is 0

    // Number of elements of an array
    cout << "Number of elements:" << size(numbers) << endl; // std:size(arr) returns number of elemets of an array
    cout << "Size of array: " << sizeof(numbers) << "\n"
         << endl; // in bytes

    // Readout
    for (size_t i = 0; i < size(numbers); i++) // size_t is used for indices or to store size of variables in bytes
    {
        cout << numbers[i] << endl;
    }
    cout << "" << endl;
    for (size_t i = 0; i < size(numbers_partly); i++)
    {
        cout << numbers_partly[i] << endl;
    }
    cout << "" << endl;

    // Automatic size and range-based loop (indices are then lost)
    int numbers_automatic[]{48, 56, 35};
    for (auto value : numbers_automatic) // iterations based on range
    {
        cout << value << endl;
    }
    // Example with cummulative sum
    int cumsum = 0;
    int scores[]{11, 156, 187, 1689};
    for (int element : scores)
    {
        cumsum += element;
    }
    cout << "Score sum: " << cumsum << endl;

    // Chars
    cout << "Characters:" << endl;
    char message1[5]{'T', 'e', 's', 't', '\0'}; // explicit declaration of null characted that always has to come at the end of a char array
    char message2[5]{'T', 'e', 's', 't'};       // implicit zero character, char array has length +1, \0 is added automatically
    char message3[]{''};
    cout << message1 << endl;
    cout << message2 << endl;

    return 0;
}