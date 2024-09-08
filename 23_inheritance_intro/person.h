// Title:
// Date: 2024-09-05
// Author: Krystof Hes
/* Description
 */

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string_view>
#include <string>

using namespace std;

class Person // base class
{
public:
    Person();
    Person(string &first_name, string &last_name); // make the arguments a reference to save some memory
    ~Person();

    int id{0};

    // Getters
    string get_first_name() const
    {
        return first_name;
    }

    string get_last_name() const
    {
        return last_name;
    }

    // Setters
    void set_first_name(string_view fn)
    {
        first_name = fn;
    }
    void set_last_name(string_view ln)
    {
        last_name = ln;
    }

private:
    string first_name{"Max"};
    string last_name{"Mustermann"};
};

#endif
