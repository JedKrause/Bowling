//
// Created by jedkrause on 12/12/2018.
//

#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H
#include <array>

class Game {
    int totalScore = 0;
    int currentRoll = 0;
    std::array<int,21> rolls; //one per roll
public:
    Game(); // Default Constructor
    void roll(int i);
    int scoreGame();
    bool isSpare(int frame);
    bool isStrike(int frame);
};


#endif //BOWLING_GAME_H
