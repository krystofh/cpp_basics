// Title:
// Date: 2024-09-05
// Author: Krystof Hes
/* Description
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string_view>
#include <string>

#include "person.h"

using namespace std;

class Player : public Person // make this class inherit public attributes and methods from class Person
{
    friend ostream &operator<<(ostream &out, const Player &player);

public:
    Player() = default;
    Player(string_view game_param);

private:
    string played_game{"None"};
};

#endif