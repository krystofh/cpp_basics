// Title: Inheritance intro
// Date: 2024-09-05
// Author: Krystof Hes
/* Description
  - first intro to inheritance
  - compile manually with g++ -std=c++20 main.cpp person.cpp player.cpp -o app
 */

#include <iostream>
#include "player.h"

using namespace std;

int main()
{
    Player p1("Chess");
    p1.set_first_name("John");
    p1.set_last_name("Snow");
    std::cout << "player : " << p1 << std::endl;
    return 0;
}