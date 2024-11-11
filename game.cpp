#include "game.hpp"
#include <iostream>

Game::Game() : board(std::make_shared<Board>()), current_marker('X'), current_player(1) {}

void Game::Start() {
    bool game_over = false;
    while (!game_over) {
        board->DrawBoard();
        TakeTurn();
        game_over = CheckWin() || CheckDraw();
        if (!game_over) {
            SwapPlayer();
        }
    }
    board->DrawBoard();
    if (CheckWin()) {
        std::cout << "Jucătorul " << current_player << " cu markerul '" << current_marker << "' a câștigat!" << std::endl;
    } else {
        std::cout << "Remiză!" << std::endl;
    }
}

void Game::TakeTurn() {
    int slot;
    std::cout << "Jucătorul " << current_player << " ('" << current_marker << "'), introduceți un număr de la 1 la 9 pentru a plasa markerul: ";
    std::cin >> slot;

    while (slot < 1 || slot > 9 || !board->PlaceMarker(slot, current_marker)) {
        std::cout << "Poziție invalidă! Alegeți un număr de la 1 la 9 care este liber: ";
        std::cin >> slot;
    }
}

void Game::SwapPlayer() {
    current_marker = (current_marker == 'X') ? 'O' : 'X';
    current_player = (current_player == 1) ? 2 : 1;
}

bool Game::CheckWin() {
    return board->CheckWinner() == 1;
}

bool Game::CheckDraw() {
    for (int i = 1; i <= 9; ++i) {
        int row = (i - 1) / 3;
        int col = (i - 1) % 3;
        if (board->grid[row][col] != 'X' && board->grid[row][col] != 'O') {
            return false;
        }
    }
    return true;
}
