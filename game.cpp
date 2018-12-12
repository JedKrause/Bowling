//
// Created by jedkrause on 12/12/2018.
//

#include "game.h"
/*
 * Roll Pins
 * @param frame - Number of pins
 */
void Game::roll(int i)
{
    totalScore += i;
}
/*
 * Returns final score
 */
int Game::scoreGame()
{
    return totalScore;
}
