#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "game.h"
TEST_CASE("Does the Game exist","[score]")
{
    //Arrange
    Game *g = new Game;
    //Act

    //Assert
    REQUIRE(g != NULL);
}

TEST_CASE("Gutter Game Return 0","[Score]")
{
    //Arrange
    Game g;
    int pins = 0;
    //Act
    for(int frame = 0; frame < 20; frame ++)
    {
        g.roll(pins);
    }
    //Assert
    REQUIRE(0 == g.scoreGame());
}

TEST_CASE("Single Pin Game Return 20","[Score]")
{
    //Arrange
    Game g;
    int pins = 1;
    //Act
    for(int frame = 0; frame < 20; frame ++)
    {
        g.roll(pins);
    }
    //Assert
    REQUIRE(20 == g.scoreGame());
}

TEST_CASE("Single Spare Game Return 16","[Score]")
{
    //Arrange
    Game g;
    int pins = 0;
    //Act
    g.roll(5);
    g.roll(5);
    g.roll(3);
    for(int frame = 3; frame < 20; frame ++)
    {
        g.roll(pins);
    }
    //Assert
    REQUIRE(16 == g.scoreGame());
}