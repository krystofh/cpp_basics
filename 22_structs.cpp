// Title: Structs
// Date: 2024-09-05
// Author: Krystof Hes
/* Description
    - structs vs classes
*/

#include <iostream>
#include <string>

using namespace std;

class User
{
    string name{"Max"};
    string lastname{"Mustermann"};
    unsigned short age;

public:
    User() = default;
    User(string name, string lastname, unsigned short age)
    {
        this->name = name;
        this->lastname = lastname;
        this->age = age;
    };
    void print_stats()
    {
        cout << "User: " << name << " " << lastname << endl;
        cout << "------------" << endl;
    }
};

struct Computer
{
    string machine_name;
    unsigned short id;
};

int main()
{
    User maria("Maria", "Edison", 32);
    // maria.age = 15; // will not compile as member variables are private by default in a class

    Computer mac;
    mac.machine_name = "MacBook Air"; // structs have public member variables by default - the only difference to classes
    mac.id = 123;
    return 0;
}