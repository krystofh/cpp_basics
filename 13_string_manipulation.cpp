// Title: Strings manipulation
// Date: 2024-09-02
// Author: Krystof Hes
/* Description
     - manipulation of strings using cctype functions with a few examples (capitalisation, counting blanks, etc.)
     - https://en.cppreference.com/w/cpp/header/cctype
     - finding occurences in a string
*/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    // Checking the number of blank spaces in a char array
    char message[] = {"This is a very important message that I am showing tout le monde."};

    int blanks{};
    for (size_t i{0}; i < size(message); i++)
    {
        if (isblank(message[i]))
        {
            ++blanks;
        }
    }
    cout << "Found " << blanks << " blanks in your message." << endl; // last blank is the null termination character

    // Example: Checking number of digits in a string
    cout << "=============" << endl;
    cout << "Create a new password:" << endl;
    string pwd;
    getline(cin, pwd);
    int digits{};

    cout << "You entered: " << endl;
    for (size_t i{0}; i < size(pwd); i++)
    {
        cout << pwd[i] << ", ";
        if (isdigit(pwd[i]))
        {
            digits++;
        }
    }

    cout << "\nEntered " << digits << " digits and " << size(pwd) - digits << " other characters." << endl;

    // Turning characters to upper case
    cout << "=============" << endl;
    char original[]{"This is an information for you"};
    char edited[size(original)]; // make a new string just the same size as original
    size_t counter{};
    for (auto c : original)
    {
        edited[counter] = toupper(c); // turning a character to upper case using std::toupper()
        ++counter;
    }
    cout << "Capitalized string:" << endl;
    cout << edited << endl;

    // Comparing strings
    // strcmp: compares the strings character by character until it finds a difference, then calculates the difference btw. ASCII symbols
    // strncmp: compares only first N characters
    cout << "=============" << endl;
    const char *st1{"DAZ"};
    const char *st2{"DBZ"};
    cout << "Comparing " << st1 << " and " << st2 << ": " << strcmp(st1, st2) << endl;
    // Works without const as well
    char st3[]{"Bha"};
    char st4[]{"Aha"};
    cout << "Comparing " << st3 << " and " << st4 << ": " << strcmp(st3, st4) << endl; // the result is the lecicographic distance between the strings
    // Comparing just n characters
    size_t count{1};
    cout << "Comparing " << st1 << " and " << st2 << ": " << strncmp(st1, st2, count) << endl; // the result is the lecicographic distance between the strings

    // Strlen: number of characters in a c-string without termination character
    cout << "=============" << endl;
    const char *example_text{"Hello"};
    cout << "Strlen: " << strlen(example_text) << endl;
    cout << "Sizeof: " << sizeof(example_text) << endl; // byte-size
    cout << "=============" << endl;
    // Finding occurence in a string
    char target{'i'};
    const char *text{"This is a simple example."};
    // a) comparing character by character
    int occurences[strlen(text)] = {0};

    for (size_t i{0}; i < strlen(text); i++)
    {
        if (text[i] == target)
        {
            occurences[i] = 1;
        }
        else
        {
            occurences[i] = 0;
        }
    }
    cout << "Occurence of '" << target << "':" << endl;
    for (size_t i{0}; i < strlen(text); i++)
    {
        cout << text[i] << " ";
    }
    cout << "" << endl;

    for (size_t i{0}; i < strlen(text); i++)
    {
        cout << occurences[i] << " ";
    }
    cout << "" << endl;

    // b) using strchr function and pointers - faster way
    cout << "=============" << endl;
    const char *result{text}; // pointer to our c-string
    int occurences2[strlen(text)]{};
    while ((result = std::strchr(result, target)) != nullptr) // assigning the resulting pointer to the same variables makes the code jump to next occurence
    {
        size_t index = result - text; // Calculate the index of the found character using pointer arithmetic
        occurences2[index] = 1;       // store 1
        std::cout << "Found '" << target
                  << "' starting at '" << result << "'\n";

        // Increment result, otherwise we'll find target at the same location
        // cuts the found character and examines the rest in the next iteration
        ++result;
    }

    cout << "Occurence of '" << target << "':" << endl;
    for (size_t i{0}; i < strlen(text); i++)
    {
        cout << text[i] << " ";
    }
    cout << "" << endl;

    for (size_t i{0}; i < strlen(text); i++)
    {
        cout << occurences2[i] << " ";
    }
    cout << "" << endl;

    cout << "=============" << endl;
    // Last occurence of a character
    char input_path[] = "C://Documents/Programming/hello.cpp";
    char splitter = '/';
    char *output = std::strrchr(input_path, splitter);
    cout << "Finding last '" << splitter << "' in: " << input_path << endl;
    if (output) // if not a null pointer, then character was found
    {
        cout << output + 1 << endl;
    }

    return 0;
}