//
// Created by jedkrause on 12/12/2018.
//

#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H


class Game {
    int totalScore = 0;
public:
    void roll(int i);
    int scoreGame();
};


#endif //BOWLING_GAME_H
