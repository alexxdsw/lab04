#ifndef BOARD_HPP
#define BOARD_HPP

#include <iostream>
#include <vector>
#include <string>
#include <memory> // pentru smart pointers

class Board {
private:
    std::vector<std::vector<std::string>> grid; // Folosim std::string

public:
    Board();
    Board(const Board& other);
    Board& operator=(const Board& other);
    bool operator==(const Board& other) const;
    friend std::istream& operator>>(std::istream& in, Board& board);
    friend std::ostream& operator<<(std::ostream& out, const Board& board);

    void DrawBoard();
    bool PlaceMarker(int slot, const std::string& marker);
    int CheckWinner();
};

#endif
