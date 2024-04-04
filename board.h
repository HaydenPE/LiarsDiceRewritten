#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "curbet.h"
#include "board.cpp"
#pragma once

class Board{
    public:
        CurBet tablestate;
        Board(); //Constructor
        ~Board(); //Destructor
        void ShuffleDice(); //Creates dice for both players.
        
        void ShuffleDiceButForTesting(); //Same thing as ShuffleDice, but without randomizing the seed. This is to make sure we can properly use unit tests.
        
        void clearDice(); //Clears everyone's dice.
        
        bool liar();
        
        void printDice(std::vector<int> dice);
        void printDiceTest();
    //private:
        std::vector<int> opDice;
        std::vector<int> yourDice;
        std::vector<int> totalDice;
};