// Title: Variable types
// Date: 2024-01-16
// Author: Krystof Hes
/*Description:
Demonstration of built-in variable types, their modifiers and size occupied in the memory
*/
#include <iostream>
#include <cstdint> // fized sized integers
#include <iomanip> // output formatting

using namespace std;

int main()
{
    // Size of various variable types
    int var1 = -156;
    unsigned int var2 = 156;
    short int var3 = 1024; // is equivalent to short, see below
    short var4 = 1024;
    double var5 = 15.4;
    auto var6 = -17.5; // automatic variable type
    long var7 = 15698;
    long long var8 = 515;
    float f1 = 158.5;
    double d1 = 1878.65;
    long double ld1 = 897.45;

    // Print
    cout << "Variable sizes in bytes: " << endl;
    cout << "int var1: " << sizeof(var1) << endl;
    cout << "unsigned int var2: " << sizeof(var2) << endl;
    cout << "short int var3: " << sizeof(var3) << endl;
    cout << "short var4: " << sizeof(var4) << endl;
    cout << "double var5: " << sizeof(var5) << endl;
    cout << "auto var6 (double): " << sizeof(var6) << endl;
    cout << "long var7: " << sizeof(var7) << endl;
    cout << "long long var8: " << sizeof(var8) << endl;
    cout << "float f1: " << sizeof(f1) << endl;
    cout << "double d1: " << sizeof(d1) << endl;
    cout << "long double ld1: " << sizeof(ld1) << endl
         << endl;

    // Fixed size integer types
    int8_t i8 = 255; // will not work since signed 8-bit int will have range -128 to +128
    uint8_t ui8 = 255;
    int16_t i16 = 32767; // half of 65535
    uint16_t ui16 = 65535;

    cout << "Fixed size integers Playground: " << endl;
    cout << "8-bit integer: " << static_cast<int>(i8) << endl;           // to print the value it is necessary to cast it to a standard int
    cout << "8-bit unsigned integer: " << static_cast<int>(ui8) << endl; // to print the value it is necessary to cast it to a standard int
    cout << "16-bit integer: " << static_cast<int>(i16) << endl;
    cout << "16-bit unsigned integer: " << static_cast<int>(ui16) << endl;
    int w = 20;
    cout << "Limits of integers (8,16 and 32 bits): " << setw(w) << endl;
    cout << "int8_t: " << INT8_MAX << setw(w) << endl;
    cout << "uint8_t: " << UINT8_MAX << setw(w) << endl;
    cout << "int16_t: " << INT16_MAX << setw(w) << endl;
    cout << "uint16_t: " << UINT16_MAX << setw(w) << endl;
    cout << "int32_t: " << INT32_MAX << setw(w) << endl;
    cout << "uint32_t: " << UINT32_MAX << setw(w) << endl;

    // Overflow demonstration- carefull when reasigning values to variables initialized with 'auto' keyword!
    try
    {
        var2 = -120;
        if (var2 < 0) // even the exception handling does not work
        {
            throw("e");
        }
    }
    catch (exception e)
    {
        cerr << "unsigned error" << endl;
    }
    cout << "var2 (-120): " << var2 << endl;

    return 0;
}