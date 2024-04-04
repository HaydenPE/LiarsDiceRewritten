#include "curbet.h"
#include <iostream>
#include <string>

CurBet::CurBet(){}

CurBet::~CurBet(){}

void CurBet::changeFace(int cFace){
            face = cFace;
}

void CurBet::changeAmt(int cAmt){
    amt = cAmt;
}

int CurBet::getFace(){
    return face;
}

int CurBet::getAmt(){
    return amt;
}

bool CurBet::newBet(){
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