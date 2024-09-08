// Title:
// Date: 2024-09-05
// Author: Krystof Hes
/* Description
 */

#include "person.h"
#include "player.h"

Player::Player(std::string_view game_param)
    : played_game(game_param)
{
    // first_name = "John"; Compiler errors
    // last_name = "Snow";
}

std::ostream &operator<<(std::ostream &out, const Player &player)
{

    out << "Player : [ game : " << player.played_game
        << " names : " << player.get_first_name()
        << " " << player.get_last_name() << "]";
    return out;
}