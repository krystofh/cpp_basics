// Title: Pointers using dynamic memory allocation
// Date: 2024-09-02
// Author: Krystof Hes
/* Description:
   Pointers usage with dynamic memory (heap)
*/
#include <iostream>

using namespace std;

int main()
{
    // Creation of a null pointer
    int *p_number{nullptr};
    p_number = new int; // allocate new memory on the heap until the variable is deleted by the code
    *p_number = 142;    // save value in the memory
    cout << "Dynamically allocated memory on the heap: " << *p_number << endl;
    // Return the memory to OS
    delete p_number;
    // if the code tries to use the memory after deletion, troubles come
    p_number = nullptr; // therefore good practice to reset the pointer
    // *p_number = nullptr; // assuring it will really point to nowhere after deletion of allocated memory

    // Direct initialisation
    int *p_number2{new int{666}};
    cout << "2nd pointer: " << p_number2 << ": " << *p_number2 << endl;

    int *p_number3{p_number2}; // initialise pointer with another pointer
    cout << "3rd pointer: " << p_number3 << ": " << *p_number3 << endl;

    // Watchout - avoid deleting the pointer twice or using a deleted pointer at all!
    // If the 3rd pointer points to the same address as 2nd, it will lead to a problem
    delete p_number2;
    p_number2 = nullptr;
    // cout << "2nd pointer again: " << *p_number2 << endl; // do not do this! Interrupts program execution
    cout << "3rd pointer again: " << p_number3 << ": " << *p_number3 << endl;

    // Safe usage of pointers with type checking
    if (p_number2 != nullptr) // check that master pointer is pointing to a valid memory
    {
        cout << "3rd pointer again: " << p_number3 << ": " << *p_number3 << endl;
    }
    else
    {
        cout << "Error. Master pointer of 3rd pointer was deleted " << endl;
    }

    // Also possible - direct type check. Null pointer converts indirectly to a boolean
    if (p_number2)
    {
        cout << "2nd pointer points to a valid address" << endl;
    }
    else
    {
        cout << "The 2nd pointer was deleted" << endl;
    }

    // You can delete a null pointer without checking if the memory is allocated
    int *p_null = nullptr;
    delete p_null; // is OK

    // Catching exceptions when memory allocation fails
    // for (size_t i{}; i < 100; i++)
    // {
    //     try
    //     {
    //         int *large_array{new int[100000000]}; // allocate unreallisticly huge memory
    //     }
    //     catch (exception &e) // catch memory allocation exception
    //     {
    //         cout << "Caught a memory allocation exception:  " << e.what() << endl;
    //     }
    // }

    // // Alternative approach with std:nothrow option
    // for (size_t i{}; i < 100; ++i)
    // {

    //     int *large_array2{new (nothrow) int[1000000000000]}; // allocate unreallisticly huge memory
    //     if (large_array2 != nullptr)
    //     {
    //         cout << "Memory allocated" << endl;
    //     }
    //     else
    //     {
    //         cout << "Memory allocation failed!" << endl;
    //     }
    // }

    // Memory leak
    // Happens when we lose the pointer to the allocated memory, avoid at all times
    cout << "\nMemory leak example:" << endl;
    int *p_data{new int{142}};
    cout << "p_data: " << *p_data << endl;
    p_data = new int{500}; // memory is not deleted and we lose access due to new allocation
    cout << "Now p_data is: " << *p_data << " and original address is lost." << endl;
    // another case is when memory is not freed before the local scope terminates
    {
        int *p_data2{new int{800}};
    }
    // Access to p_data2 is not possible anymore and memory is leaked

    cout << "Programm is ending well." << endl;
    return 0;
}