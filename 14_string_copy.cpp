// Title: String copy and other string operations
// Date: 2024-09-03
// Author: Krystof Hes
/* Description
    - copying strings
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Concatenating two c-strings
    char start[50] = "Hello ";
    char source[50] = "there!";
    char source3[] = " I am successful!";
    cout << strcat(start, source) << endl; // will output concatenated c-strings, some compilers might report unsafe operation
    cout << start << endl;                 // the start string is now concatenated already
    // Concatenate only n characters
    cout << strncat(start, source3, 5) << endl; // only takes N first characters of source3
    // String copy
    cout << "=============" << endl;
    const char *input_text = "This is not a long text at all.";
    char copied_text[strlen(input_text) + 1]; // +1 for the null termination character
    strcpy(copied_text, input_text);
    cout << "Input: " << endl;
    cout << input_text << endl;
    cout << "Copied:" << endl; 
    cout << copied_text << endl;
    return 0;
}