cmake_minimum_required(VERSION 2.8)
project( battleship )
add_executable( battleship src/main.cpp include/BattleShip.hpp include/Ship.hpp include/Board.hpp include/Player.hpp)
target_include_directories(battleship PRIVATE include)
