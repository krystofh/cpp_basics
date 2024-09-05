// Title: Classes extended
// Date: 2024-09-05
// Author: Krystof Hes
/* Description
    - chained calls
    - size of objects
*/

#include <iostream>

using namespace std;

enum State
{
    offline,
    connected,
};

class User
{
public:
    string name{"Max"};
    string lastname{"Mustermann"};
    signed short age = 0;
    State user_state = offline;

private:
    short id = 0;

public:
    User() = default;
    User(string name_param, string lastname_param, short age)
    {
        name = name_param;
        lastname = lastname_param;
        this->age = age;
    };
    // desctructor function - called when object dies, always without parameters
    // happens when delete is called or end of scope is reached
    // also when passing objects by value and function reaches end
    ~User()
    {
        cout << "User " << name << " deleted. Memory freed." << endl;
    };

    User &set_name(string name)
    {
        this->name = name;
        return *this; // 1st return variant: dereference the pointer
    }

    User &set_lastname(string name)
    {
        this->lastname = lastname;
        return *this;
    }

    User &set_age(signed short age)
    {
        this->age = age;
        return *this;
    }

    User *set_status(State status)
    {
        this->user_state = status;
        return this; // 2nd return variant: return the pointer to object
    }

    User *set_id(short id)
    {
        this->id = id;
        return this;
    }

    void print_stats()
    {
        cout << "User: " << name << " " << lastname << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Status: " << user_state << endl;
        cout << "Address: " << this << endl; // prints the address of this object in memory
        cout << "------------" << endl;
    }
};

int main()
{
    User *p_tom = new User;
    p_tom->set_name("Tom").set_lastname("Jenkins").set_age(34); // chained calls using references - each time a reference to the object is returned and can be used further using dot notation
    p_tom->print_stats();
    cout << "------------" << endl;

    User maria("Maria", "Edison", 32);
    maria.set_id(12)->set_status(connected); // chained calls using pointers - each time a pointer is returned and is used further using pointer notation
    maria.print_stats();
    cout << "Size of object: " << sizeof(maria) << endl; // object size can be determined just as with integral types

    return 0;
}