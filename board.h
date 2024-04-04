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
            for(int i = 0; i < 6; i++){
                opDice.push_back(rand() % 6 + 1);
                yourDice.push_back(rand() % 6 + 1);
            }
            for(int j = 0; j < 6; j++){
                totalDice.push_back(opDice.at(j));
                totalDice.push_back(yourDice.at(j));
            }
        }
        void clearDice(){ //Clears everyone's dice.
            opDice.clear();
            yourDice.clear();
            totalDice.clear();
        }
        bool liar(){ //Determines results of liar state.
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
        void printDice(){
            std::cout << "Opponent Dice: ";
            for(int i = 0; i < opDice.size(); i++){
                std::cout << opDice.at(i) << " ";
            }
            std::cout << "\n";
            std::cout << "Your Dice: ";
            for(int j = 0; j < yourDice.size(); j++){
                std::cout << yourDice.at(j) << " ";
            }
            std::cout << "\n";
        }

    private:
        std::vector<int> opDice; //Computer Opponent's dice.
        std::vector<int> yourDice; //Player's dice.
        std::vector<int> totalDice; //Cumulative dice. This is used for calculations involving everyone's dice.
};