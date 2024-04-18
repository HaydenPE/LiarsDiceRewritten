#include <iostream>
#include <string>
#include <vector>
#pragma once

class CurBet{
    public:
        CurBet(){} //Constructor
        ~CurBet(){} //Destructor
        void changeFace(int cFace){
            face = cFace;
        }
        void changeAmt(int cAmt){
            amt = cAmt;
        }
        int getFace(){
            return face;
        }
        int getAmt(){
            return amt;
        }
        void printBet(){ //Prints the bet in a format that is easy for a human to read.
            std::cout << amt << " " << facenumbers.at(face-1) << "\n";
        }
        std::string printBetButForTesting(){
            std::string returner;
            returner = returner + static_cast<char>(amt) + " " + facenumbers.at(face-1);
            return returner;
        }
        bool newBet(){ //Allows the player to interface with the CurBet object and override it. Also returns a bool for the sake of Main.
            int bFace;
            int bAmt;
            char l;
            bool lcall = false;
            bool invalid = true;
            bool rightface = false;
            while(!lcall){
                std::cout << "Would you like to call them a liar? y/n\n";
                std::cin >> l;
                switch(l){
                    case('y'):
                        std::cout << "LIAR!\n";
                        return false;
                    case('n'):
                        lcall = true;
                        break;
                    default:
                        std::cout << "Oops! Invalid input.\n";
                }
            }
            while(invalid){
                while(!rightface){
                    std::cout << "Type in a face.\n";
                    std::cin >> bFace;
                    if((bFace < 0 || bFace > 6)){
                        std::cout << "Invalid face. Enter a valid input.";
                    }
                    else{rightface = true;}
                }
            std::cout << "Type in the amount of that face.\n";
            std::cin >> bAmt;
            if((bFace == face && bAmt > amt) || (bFace != face && bAmt > amt) || (bFace > face && bAmt == amt)){
                changeFace(bFace);
                changeAmt(bAmt);
                invalid = false;
            }
            else if((bFace == face && bAmt == bAmt)){
                std::cout << "Oops! Your bet is supposed to be different. Try again.\n";
                rightface = false;
            }
            else{
                std::cout << "Oops! Invalid inputs. Try again.\n";
                rightface = false;
            }
            }
            std::cout << "New Bet: ";
            printBet();
            return true;
        }
    private:
        std::vector<std::string> facenumbers = {"ones", "twos", "threes", "fours", "fives", "sixes"}; //An unchangable vector used when printing a bet.
        int face; //Dice Face
        int amt; //Amount
};