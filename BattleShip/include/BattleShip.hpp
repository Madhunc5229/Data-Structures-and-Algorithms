#ifndef _BATTLESHIP_H_
#define _BATTLESHIP_H_

#include "Player.hpp"
#include <vector>
#include <iostream>
using namespace std;

class BattleShip {
    private:
    int _numOfPlayers;
    //want to pass the board size directly to board class
    int _boardSize;
    vector<Player> _players;

    void getPlayerdetails(){
            //loop through all players and get all players data
            for(int i=0; i<_numOfPlayers; i++){
                cout<<"Enter details for Player number "<<i+1<<"\n";
                _players.emplace_back(Player(_boardSize));
            }
        }
        
    public:
        BattleShip(int numOfPlayers=2, int boardSize=10): _numOfPlayers(numOfPlayers), _boardSize(boardSize){
            _players.reserve(_numOfPlayers);

        }
    
        

        void startGame(){
            getPlayerdetails();
            //start by asking player P1 to take a hit 
            //check if the hit is on the ship
        }

};

#endif