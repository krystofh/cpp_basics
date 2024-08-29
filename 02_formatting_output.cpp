// Title: Output formatting
// Date: 15.01.2024
// Author: Krystof Hes

/*Description:
Output formatting using iomanip - precision, alignment, tables, ...
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// print table entry, w=column width (optional)
void print_name(string first_name, string last_name, int score, int w = 10)
{
     cout << setw(w) << first_name << setw(w)
          << last_name << setw(w)
          << score << endl;
}

int main()
{
     // Formatting doubles
     double f_number = 14.651687111;
     cout << "Printing of 14.651687111: " << endl;
     // ----------------------------------------------------
     cout << "Default precision (6) " << f_number << endl;
     cout << setprecision(2);
     cout << "Precision 2: " << f_number << endl;
     cout << setprecision(8);
     cout << "Precision 8: " << f_number << endl;
     cout << setprecision(19);
     cout << "Precision 19: " << f_number << endl;
     cout << setprecision(50);
     cout << "Precision 50: " << f_number << endl
          << endl;

     // Printing tables
     // setw() - set column width
     int w = 20;
     cout << "Table width: " << w << ", right aligned (default)" << endl;
     cout << setw(w) << "First name" << setw(w)
          << "Last name" << setw(w)
          << "Score" << endl;
     print_name("Michael", "Blablablablablabla", 25, w);
     print_name("Simon", "Bruggens", 61, w);

     // left-aligned cells
     w = 15;
     cout << endl
          << left; // left-aligned
     cout << "Table width: " << w << ", left aligned" << endl;
     cout << setw(w) << "First name" << setw(w)
          << "Last name" << setw(w)
          << "Score" << endl;
     print_name("Michael", "Jordan", 25, w);
     print_name("Simon", "Bruggens", 61, w);

     // Default sign alignment
     w = 5; // set to match "Value" string
     cout << endl;
     cout << "Default sign alignment, width 5:" << endl;
     cout << setw(w) << "Param\t" << setw(w)
          << "Value" << endl;
     cout << setw(w) << "a\t" << setw(w) << -128 << endl;
     cout << setw(w) << "b\t" << setw(w) << 42 << endl;
     // Internal sign alignment, show positive sign
     cout << endl
          << internal << showpos; // internal justified: sign is left, data is right
     cout << "Internal sign alignment, width 5, show +:" << endl;
     cout << setw(w) << "Param\t" << setw(w)
          << "Value" << endl;
     cout << setw(w) << "a\t" << setw(w) << -128 << endl;
     cout << setw(w) << "b\t" << setw(w) << 42 << endl
          << endl;

     // Printing of booleans - default (1, 0)
     bool b_1 = true;
     bool b_2 = false;
     cout << "The truth is " << b_1 << " and lie is " << b_2 << endl;
     // Printing of booleans - as text (true, false)
     cout << boolalpha;
     cout << "The truth is " << b_1 << " and lie is " << b_2 << endl
          << endl;

     // Further commands: scientific, fixed ...

     return 0;
}