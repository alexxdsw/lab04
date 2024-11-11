#ifndef GAME_HPP
#define GAME_HPP

#include "board.hpp"

class Game {
private:
    Board board;
    char current_marker;
    int current_player;

public:
    Game(); // constructor
    void Start(); // start the game
    void SwapPlayer(); // swap players
};

#endif
