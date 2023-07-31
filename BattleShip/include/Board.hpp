#ifndef _BOARD_H_
#define _BOARD_H_
#include "Ship.hpp"
#include <vector>
#include <unordered_map>
using namespace std;

class Board{

    unordered_map<int,int> _board;
    int _boardSize;
    vector<Ship> _ships;

    public:
        Board(int boardsize=10) : _boardSize(boardsize){
            //make everythin in board zero
            _ships.emplace_back(CarrierShip());
            _ships.emplace_back(CruiserShip());
        }

        void markShips(){
            for(int i=1; i<=_ships.size();i++){
                //set board locations with shipID
            }
        }

        void takeHit(int x, int y){
            //check the xy in board
            //0: miss
            //1: carrier hit 
            //_ships[_board[xx]-1].takeHit();
            //check if ships are sunk
            //loop through _ships and call //.issunker()
            //if all are sunk, gameover
        }   

};
#endif