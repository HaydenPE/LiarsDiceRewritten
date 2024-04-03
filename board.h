#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "curbet.h"
#pragma once

class Board{
    public:
        CurBet tablestate;
        Board(){} //Constructor
        ~Board(){} //Destructor
        void ShuffleDice(){ //Creates dice for both players.
            srand(time(NULL));
            while(opDice.size() < 5){
                opDice.push_back(rand() % 6 + 1);
                totalDice.push_back(opDice.at(opDice.size()));
            }
            while(yourDice.size() < 5){
                yourDice.push_back(rand() % 6 + 1);
                totalDice.push_back(yourDice.at(yourDice.size()));
            }
        }
        void clearDice(){ //Clears everyone's dice.
            opDice.clear();
            yourDice.clear();
            totalDice.clear();
        }
        bool liar(){
            int amount = tablestate.getAmt();
            int face = tablestate.getFace();
            int compareAmt = 0;
            for(int i = 0; i < totalDice.size(); i++){
                if(totalDice.at(i) == face){
                    compareAmt++;
                }
            }
            if(compareAmt >= amount){
                std::cout << "Sorry! Opponent is not a liar.\n";
                return false;
            }
            std::cout << "Opponent is a liar.\n";
            return true;
        }
        void printDice(std::vector<int> dice){
            for(int i = 0; i < dice.size(); i++){
                std::cout << dice.at(i) << " \n"; 
            }
        }
    private:
        std::vector<int> opDice;
        std::vector<int> yourDice;
        std::vector<int> totalDice;
};