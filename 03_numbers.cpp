// Title: Input output
// Date: 15.01.2024
// Author: Krystof Hes

/*Description:
Playground with numeric systems and variables
*/

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
     // Different examples of the same number in various systems
     int num1 = 256;
     int num2 = 0x100;          // hex
     int num3 = 0b000100000000; // binary
     int num4 = 0400;           // octal
     cout << "Number 1: " << num1 << endl;
     cout << "Number 2: " << num2 << endl;
     cout << "Number 3: " << num3 << endl;
     cout << "Number 4: " << num4 << endl
          << endl;

     // Operators
     cout << "Examples of operations: " << endl;
     int l_shift = num1 << 1;
     cout << num1 << " << 1 = " << l_shift << endl;
     bool a = true;
     bool b = false;
     bool c = true;

     // Displaying variable type:  typeid(variable_name).name() as char
     cout
         << a << " || " << b << " = " << (a || b) << " (" << typeid(a || b).name() << ")" << endl; // correct, incorrect is directly inputting a || b
     cout << num1 << " + " << 156 << " = " << (num1 + 156) << " (" << typeid(num1 + 156).name() << ")" << endl;
     cout << a << " && " << b << " = " << (a && b) << endl;
     int first = 0b0111;                                                                                                        // 7
     int second = 0b0100;                                                                                                       // 4
     cout << first << " ^ " << second << " = 0xb" << bitset<4>(first ^ second) << " (dec: " << (first ^ second) << ")" << endl; // bitwise XOR
     cout << first << " & " << second << " = 0xb" << bitset<4>(first & second) << " (dec: " << (first & second) << ")" << endl; // bitwise AND
     cout << first << " ++ "
          << " = 0xb" << bitset<4>(++first) << " (dec: " << (first) << ")" << endl; // bitwise AND
     // logic not vs. binary not

     // Unary operators
     // ++i (prefix increment) : first increment, then use, i++ (postfix increment) : first use, then afterwards increment
     int test = 2;
     cout << "++" << test << "= " << (++test) << endl; // increments before printing
     test = 2;                                         // reset
     cout << test << "++"
          << "= " << (test++) << ", but after: " << test << endl
          << endl; // increments after printing

     // Printing in different number systems
     int example = 785;
     cout << "dec: " << dec << example << endl;
     cout << "hex: " << hex << example << endl;
     cout << "oct: " << oct << example << endl
          << endl;

     // Scientific notation
     double science = 3.125468E4; // 3*12...*10^4
     cout << "Normal notation: " << endl;
     cout << science << endl;
     cout << "Scientific notation: " << endl;
     cout << scientific; // enable scientific notation output
     cout << science << endl;
     return 0;
}