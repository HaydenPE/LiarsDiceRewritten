#include "board.h"
#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "curbet.h"

Board::Board(){}
Board::~Board(){}
void Board::ShuffleDice(){ //Creates dice for both players.
            srand(time(NULL));
            for(int i = 0; i < 5; i++){
                opDice.push_back(rand() % 6 + 1);
                totalDice.push_back(opDice.at(opDice.size()));
                yourDice.push_back(rand() % 6 + 1);
                totalDice.push_back(yourDice.at(yourDice.size()));
            }
        }
void Board::ShuffleDiceButForTesting(){ //Same thing as ShuffleDice, but without randomizing the seed. This is to make sure we can properly use unit tests.
            for(int i = 0; i < 5; i++){
                opDice.push_back(rand() % 6 + 1);
                totalDice.push_back(opDice.at(opDice.size()));
                yourDice.push_back(rand() % 6 + 1);
                totalDice.push_back(yourDice.at(yourDice.size()));
            }

        }
void Board::clearDice(){ //Clears everyone's dice.
            opDice.clear();
            yourDice.clear();
            totalDice.clear();
        }
bool Board::liar(){
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
            else{
            std::cout << "Opponent is a liar.\n";
            return true;
            }
        }
void Board::printDice(std::vector<int> dice){
            for(int i = 0; i < dice.size(); i++){
                std::cout << dice.at(i) << " \n"; 
            }
        }
void Board::printDiceTest(){
            for(int i = 0; i < opDice.size(); i++){
                std::cout << opDice.at(i) << " \n";
            }
            for(int j = 0; j < yourDice.size(); j++){
                std::cout << yourDice.at(j) << " \n";
            }
        }
