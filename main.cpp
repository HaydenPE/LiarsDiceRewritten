#include <iostream>
#include "curbet.h"
#include "board.h"
#include "computerThinker.h"
int main(){
    srand(time(NULL));

    bool gameState = true;
    bool lastTurn = false; //true = you made last bet, false = opponent made last bet
    Board brd;
    computerThinker opponent;
    brd.ShuffleDice();
    brd.tablestate.changeAmt(1);
    brd.tablestate.changeFace(1);
    opponent.changeTableKnowledge(brd.tablestate);
    while(gameState){
        brd.printYourDiceOnly();
        if(!brd.tablestate.newBet()){
            break;
        }
        else{
            lastTurn = true;
        }
        if(opponent.detectLiar(brd.tablestate)){
            gameState = false;
        }
        else{
            opponent.makeBet(brd.tablestate);
            lastTurn = false;
        }
    }
    brd.printDice();
    brd.liar(lastTurn);
    
    return 0;
}