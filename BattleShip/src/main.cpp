#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#include "BattleShip.hpp"

int main()
{
    int num_of_players = 2;
    int board_size = 5;

    BattleShip game(num_of_players, board_size);
    game.startGame();
}
