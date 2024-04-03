#include <iostream>
#include <string>
#pragma once

class CurBet{
    public:
        CurBet(){}

        ~CurBet(){}

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

        bool newBet(){
            int bFace;
            int bAmt;
            char l;
            bool invalid = true;
            bool lcall = false;
            while(!lcall){
                std::cout << "Would you like to call them a liar? y/n\n";
                std::cin >> l;
                if(l == 'y')
                {
                    std::cout << "LIAR!\n";
                    return false;
                }
                else if(l == 'n'){
                    lcall = true;
                    break;
                }
                else{
                    std::cout << "Oops! Invalid input.\n";
                }
            }
            while(invalid){
            std::cout << "Type in your face.\n";
            std::cin >> bFace;
            std::cout << "Type in the amount.\n";
            std::cin >> bAmt;
            if((bFace == face && bAmt > amt) || (bFace != face && bAmt > amt) || (bFace > face && bAmt == amt)){
                changeFace(bFace);
                changeAmt(bAmt);
                invalid = false;
            }
            else{
                std::cout << "Oops! Invalid inputs. Try again.\n";
            }
            }
            std::cout << "New Current Bet (face, amount): " << bFace << " " << bAmt << "\n";
            return true;
        }

    private:
        int face;
        
        int amt;
};