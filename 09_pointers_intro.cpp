// Title: Pointers intro
// Date: 2024-09-02
// Author: Krystof Hes
/*Description:
Pointers usage
*/
#include <iostream>

using namespace std;

int main()
{
    // Creation of a pointer
    int number{42};
    int *p_number{&number}; // pointer to an integer
    // alternative syntax with int* p_number{} possible - positioin of * does not matter
    cout << "Number: " << number << endl;
    cout << "Pointer: " << p_number << endl; // will print out the address that p_number points to
    int *p_number2{&number};
    // double *p_number2{&number}; // double pointer can't point to integer - compile error

    // Dereferencing a pointer - using the value rather than address
    cout << "Pointer value: " << *p_number << endl; // reading value stored under the address stored in the pointer

    // Char pointers
    const char *text{"Hello there!"}; // pointer to a an array of const chars
    // strings like these can't be changed and therefore the pointer must also be const
    cout << text << endl;
    cout << *text << endl; // dereferenced pointer is just the first char of the array
    char message1[]{"I send an SOS in a bottle"};
    cout << message1[2] << endl; // prints a single character

    // Null pointers
    // Avoid writing to or reading null pointers - strange things happen as memory does not belong to program
    int *p_number3{nullptr};
    cout << "Null pointer to some random address: " << *p_number3 << endl; // will not print, address does not belong to the program
}