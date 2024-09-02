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
    // array initialisation
    int numbers_nosize[]{1, 2, 3, 4, 5}; // no size declaration is possible
    int numbers[3]{0, 1, 2};             // notice that no = is needed, this is the PREFERRED VARIANT
    int numbers_partly[5] = {0, 1};      // rest of the array entries is 0 automatically

    // Number of elements of an array
    cout << "Number of elements:" << size(numbers) << endl; // std:size(arr) returns number of elemets of an array
    cout << "Size of array: " << sizeof(numbers) << "\n"
         << endl; // in bytes

    // _________ For loops ______________________________________________________
    // size_t is used for indices or to store size of variables in bytes
    // range depending on the system, typically 8 bits
    size_t test;
    cout << "Byte-size of size_t is: " << sizeof(test) << endl;
    // for (size_t i{0}; i < size(numbers); i++)
    cout << "For loops: " << endl;
    for (size_t i{0}; i < size(numbers); i++)
    {
        cout << numbers[i] << endl;
    }
    cout << "" << endl;
    // This is an equivalent, less preffered initialisation (not type-safe)
    for (size_t i = 0; i < size(numbers); i++)
    {
        cout << numbers[i] << endl;
    }
    cout << "" << endl;

    // Automatic size and range-based loop (indices are then lost)
    cout << "Automatic loop execution:" << endl;
    int numbers_automatic[]{48, 56, 35};
    for (auto value : numbers_automatic) // iterations based on range
    {
        cout << value << endl;
    }
    // Example with cummulative sum
    cout << "Example with cummulative sum:" << endl;
    int cumsum = 0;
    int scores[]{1, 2, 3, 4};
    for (int element : scores)
    {
        cumsum += element;
    }
    cout << "Score sum: " << cumsum << endl;

    // Example with a constant
    cout << "Example with a constant:" << endl;
    const size_t N_ITERATIONS{3};
    for (size_t i{}; i < N_ITERATIONS; ++i) // the 0 in i{} can also be ommitted - is added automatically
    {
        cout << "Running..." << endl;
    }

    // __________________ Chars _______________________________________________________________
    cout << "Characters:" << endl;
    char message1[5]{'T', 'e', 's', 't', '\0'}; // explicit declaration of null characted that always has to come at the end of a char array
    char message2[5]{'T', 'e', 's', 't'};       // implicit zero character, char array has length +1, \0 is added automatically
    char message3[]{'T', 'e', 's', 't'};        // the null character is not added here
    cout << message1 << endl;                   // If the array has a termnation character, it is calles C-string
                                                // Printing the array is possible with chars, unlike other types of arrays
    cout << message2 << endl;                   //
    cout << message3 << endl;                   // Without the null character it may print some garbage

    // __________________ String literals _______________________________________________________________
    // better way of typing strings
    char message4[]{"This is really much better string handling!"};
    cout << message4 << endl;
    return 0;
}