// Title: References
// Date: 2024-09-02
// Author: Krystof Hes
/* Description
    - references to variables and comparison to pointers
 */

#include <iostream>

using namespace std;

int main()
{
    int number1{142};
    cout << &number1 << ": " << number1 << endl;

    // Create a reference to the variable. Then the variable can be read and manipulated by this name
    int &reference{number1};
    cout << &reference << ": " << reference << endl; // as we see it even has the same address as the original variable

    // changing the reference changes the original value
    reference = 9999;
    cout << "After change:" << endl;
    cout << &reference << ": " << reference << endl;
    cout << &number1 << ": " << number1 << endl; // the original variable was changed as well

    // reference can't reference something else after creation
    int number2{256};
    reference = number2; // in this case the variable that was originally referenced gets a new value, no new re-reference
    cout << "==========: " << endl;
    cout << "Reference after change to number2: " << endl;
    cout << "Reference: " << reference << endl;
    cout << "number1: " << number1 << endl; // we can see that the original variable was changed
    cout << "number2: " << number2 << endl;
    number2 = 512;
    cout << "Reference: " << reference << endl; // proof that the referenced variable is still number1

    // Takeaway: references are like const pointers

    // Constant references
    cout << "==========: " << endl;
    int age{32};
    const int &ref_age{age}; // const reference will not allow variable manipulation (value change), the variable itself does not have to be const
    cout << "age: " << age << "\nref_age: " << ref_age << endl;
    // ref_age++; // will throw an error
    cout << "age: " << age << "\nref_age: " << ref_age << endl;
    // same behavior is possible by using a constant pointer pointing to a constant value
    const int *const p_age{&age}; // the statement makes the value to where the pointer points constant
    int *p_age{&age};             // the statement makes the value to where the pointer points constant
    age++;                        // therefore, age does not have to be constant and still can be increased like this
    (*p_age)++;                   // however, the pointer can't manipulate the value
    // *p_age = 45;
    cout << "==========: " << endl;
    cout << "age: " << age << "\nref_age: " << ref_age << endl;
    cout << "p_age: " << *p_age << endl;

    return 0;
}