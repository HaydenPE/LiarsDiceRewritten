#include <iostream>
#include "curbet.h"
#include "board.h"
#include "computerThinker.h"
int main(){
    srand(time(NULL));

    bool gameState = true;
    Board brd;
    brd.ShuffleDice();

    brd.tablestate.changeAmt(1);
    brd.tablestate.changeFace(1);
    brd.tablestate.newBet();
    
    return 0;
}