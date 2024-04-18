#include <iostream>
#include "curbet.h"
#include "board.h"
#include "computerThinker.h"
int main(){
    srand(time(NULL));
    bool wantToPlay = true; //Decides if game continues.
    char p; //Changes wantToPlay based on input.
    while(wantToPlay){
    bool gameState = true;
    bool lastTurn = false; //true = you made last bet, false = opponent made last bet
    //Pre-Game Setup//
    Board brd; //The board.
    computerThinker opponent; //The opponent.
    brd.ShuffleDice();
    brd.tablestate.changeAmt(1);
    brd.tablestate.changeFace(1);
    opponent.changeTableKnowledge(brd.tablestate);
    //Pre-Game Setup//
    while(gameState){
        //Player's Turn//
        brd.printYourDiceOnly();
        if(!brd.tablestate.newBet()){
            break;
        }
        else{
            lastTurn = true;
        }
        //Opponent's Turn//
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
    std::cout << "Would you like to play again? y/n:\n";
    std::cin >> p;
    if(p == 'n'){
        wantToPlay = false;
    }
}
}