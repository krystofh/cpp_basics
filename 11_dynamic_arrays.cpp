// Title: Dynamic arrays using heap memory
// Date: 2024-09-02
// Author: Krystof Hes
/* Description:
   Arrays usage with dynamic memory (heap)
*/
#include <iostream>

using namespace std;

int main()
{
    // Allocate memory for a dynamic array
    size_t size{10};
    int *numbers{new (nothrow) int[size]{1, 2, 3, 4, 5}}; // array stored in heap memory, not initialised elements will be 0
    for (int i = 0; i < size; ++i)
    {
        cout << i << ": " << numbers[i] << endl;
    }

    // with dynamic arrays, one can't use the range in for loop. Array is just a pointer that does not have this feature.
    // for (int index : numbers)
    // {
    //     cout << "Looping" << endl;
    // }

    // with static arrays, using the range iteration is possible
    int numbers2[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int value : numbers2)
    {
        cout << "Looping: " << value << endl;
    }

    // freeing allocated memory
    delete[] numbers;
    numbers = nullptr;
}