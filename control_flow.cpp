// Title: Control flow demo
// Date: 2024-01-16
// Author: Krystof Hes
/*Description:
Demonstration of control flow using if-else, switch, enums, loops and ternary operators
*/
#include <iostream>
#include <random>
#include <string>

using namespace std;

// Generate a random state (number between 0 and 3)
int get_state()
{
    // Seed the random number generator
    random_device rd;
    mt19937 gen(rd());
    // Define the distribution for integers in the range [0, 3]
    uniform_int_distribution<int> distribution(0, 3);
    // Generate a random integer
    int randomValue = distribution(gen);
    return randomValue;
}

int main()
{
    enum State
    {
        stop,
        prepare,
        go,
        terminate
    }; // enumerated states of traffic lights control
    int random_state = get_state();
    cout << "State is: " << random_state << endl;
    // State main_road = go; // define the state of the traffic light
    switch (random_state)
    {
    case stop:
        cout << "The light is red." << endl;
        break;
    case prepare:
        cout << "The light is red and orange." << endl;
        break;
    case go:
        cout << "The light is green." << endl;
        break;
    case terminate:
        cout << "The light is orange." << endl;
        break;
    default: // handle values out of range
        cerr << "Error! The state can have only values 0-3.";
    };

    // loops
    cout << endl
         << "Looping Louis:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "i: " << i << endl;
    }

    // do-while
    do
    {
        cout << "Got it!" << endl;
    } while (0); // will run at least once regardless of the condition

    // ternary operator
    bool a = true;
    bool b = true;
    (a && b) ? cout << "True" << endl : cout << "False" << endl;              // readability bad, but compact
    string log_entry = (a && b) ? "Evaluated as true" : "Evaluated as false"; // store resulting string in a variable
    cout << log_entry << endl;                                                // output the result
    
    return 0;
}