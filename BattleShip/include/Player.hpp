#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "Board.hpp"
#include "Ship.hpp"

class Player
{

private:
    int _boardSize;
    // vector<Ship> playerShips;
        

public:
    Player(int boardSize = 10) : _boardSize(boardSize)
    {
        // getShipLocations();
    }
    
    Board playerboard();

};

#endif