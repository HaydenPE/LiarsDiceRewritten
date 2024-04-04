#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cmath>
#include "curbet.h"
#pragma once

class computerThinker{
    public:
        CurBet tableKnowledge;
        double suspicion;
        int suspiciousFactorThing;
        computerThinker(){
            suspicion = 0.0;
            suspiciousFactorThing = 0;
        }
        ~computerThinker(){}
        void changeTableKnowledge(CurBet bet){
            tableKnowledge = bet;
        }
        bool detectLiar(CurBet newBet){
            double faces = tableKnowledge.getFace() - newBet.getFace();
            double amts = tableKnowledge.getAmt() - newBet.getAmt();
            if(faces == 0 || amts == 0){
                suspicion += (0.25 + (0.5 * suspiciousFactorThing));
                suspiciousFactorThing++;
            }
            else{
                suspicion += abs((amts / faces));
                changeTableKnowledge(newBet);
            }
            if(suspicion >= 4.3){ //Why such a weird number, you may ask? Check the bottom of this page.
                std::cout << "Liar Detected.\n";
                return true;
            }
            return false;
        }
        void clearAllVars(){
            tableKnowledge.changeAmt(1);
            tableKnowledge.changeFace(1);
            suspiciousFactorThing = 0;
            suspicion = 0.0;
        }
    private:
};
//I apologize if this explanation looks like gibberish. It makes a lot more sense both in my head and in the movie's context.
//The number 4.3 for the maximum suspicion is based on the scene in Pirates of the Caribbean this game is based on. Feel free to watch the scene on youtube if you'd like a bit more context for the text ahead.
//The algorithm used for this is quite simple. It subtracts the new bet's faces and amounts from the old bet's faces and amounts,
//then divides the differences. 
//There are two exceptions to this rule: if the resulting fraction is negative, it's switched to positive. And,
//                                       if a zero is detected, then instead of the fraction being added, this is:
//                                                         0.25 + (amount of times a 0 has occurred)(0.5).
//For the most part, the "boldness" of each bet ties in with the scene. Going from 3 sixes to 7 fives is incredibly risky, while
//going from 3 twos to 4 fours isn't. 
//Going back to the scene from the movie, after Davy Jones bets 7 fives, Will Turner bets 8 fives, to which Davy Jones makes a
//remark that implies this to be the threshhold that you would call someone a liar. If you apply the algorithm to the bets
//made in the scene (disregarding the 12 fives bet Bootstrap Bill makes, since that's an outlier), the number comes out to be
//4.5. We reduce it to 4.3 to make up for excess suspicion increase.