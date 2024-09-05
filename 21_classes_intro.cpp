// Title: Classes Intro
// Date: 2024-09-04
// Author: Krystof Hes
/* Description
    - introduction to class attributes, methods and constructors
    - object properties on the heap
    - pointers to objects
    - desctructors
*/

#include <iostream>
#include <string>

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
    int *p_num_passkey{new int{1234}}; // initialise a pointer on the heap

public:
    User() = default;
    User(string name_param, string lastname_param, short age)
    {
        name = name_param;
        lastname = lastname_param;
        this->age = age; // usage of this to resolve name conflicts, pointer access notation only
    };
    // desctructor function - called when object dies, always without parameters
    // happens when delete is called or end of scope is reached
    // also when passing objects by value and function reaches end
    ~User()
    {
        cout << "User " << name << " deleted. Memory freed." << endl;
        delete p_num_passkey; // release memory
    };

    void connect_user()
    {
        user_state = connected;
    }

    void disconnect_user()
    {
        user_state = offline;
    }

    short get_id() // access to private properties is done through a getter / setter pattern
    {
        return id;
    }

    void set_id(short number) // access to private properties is done through a getter / setter pattern
    {
        id = number;
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

void greet_user(User usr)
{
    cout << "Hello " << usr.name << "!" << endl;
}

int main()
{
    User sam;
    sam.print_stats();
    User alex("Alex", "Dubke", 18);
    alex.connect_user();
    alex.set_id(142);
    alex.print_stats();
    cout << "ID: " << alex.get_id() << endl;

    // Pointers to objects
    cout << "------------" << endl;
    User *current_user = &sam;
    cout << "Current user is: " << (*current_user).name << endl; // possible access to class properties through pointer dereferencing
    cout << "His/her id: " << current_user->get_id() << endl;    // preferred pointer notation with ->

    // Create objects on the heap
    cout << "------------" << endl;
    User *eliska = new User("Eliska", "Dobermann", 21); // create object in the heap memory
    eliska->connect_user();
    eliska->print_stats();

    // Example of desctructor called when passing by value to a function
    // greet_user(alex); // this function call will create an object copy and delete it at the end of function execution
    // however, because of the pointer p_num_passkey points to same address as original address,
    // it will later lead to double free of same memory - BIG PROBLEM

    // Free memory
    delete eliska;

    // When end of scope is reached, all objects are destructed here in the order last to first
    return 0;
}