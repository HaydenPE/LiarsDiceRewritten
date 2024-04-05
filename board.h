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
        bool liar(bool turn){ //Determines results of liar state.
            std::string outputstring;
            int amount = tablestate.getAmt();
            int face = tablestate.getFace();
            int compareAmt = 0;
            if(turn){
                outputstring = "You are ";
            }
            else{
                outputstring = "The opponent is ";
            }
            for(int i = 0; i < totalDice.size(); i++){
                if(totalDice.at(i) == face){
                    compareAmt++;
                }
            }
            if(compareAmt < amount){
                std::cout << outputstring << "a liar.\n";
                return true;
            }
            std::cout << "Sorry! " << outputstring << "not a liar.\n";
            return false;
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
        bool noDice(){
            if(opDice.size() == 0 || yourDice.size() == 0){
                return true;
            }
            return false;
        }
    private:
        std::vector<int> opDice; //Computer Opponent's dice.
        std::vector<int> yourDice; //Player's dice.
        std::vector<int> totalDice; //Cumulative dice. This is used for calculations involving everyone's dice.
};