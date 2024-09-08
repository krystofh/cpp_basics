// Title:
// Date: 2024-09-05
// Author: Krystof Hes
/* Description
 */

#include "person.h"

Person::Person()
{
}

Person::Person(std::string &first_name_param, std::string &last_name_param)
    : first_name(first_name_param), last_name(last_name_param)
{
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person [" << person.id << "]";
    return out;
}

Person::~Person()
{
}