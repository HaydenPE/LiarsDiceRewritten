#include "board.h"
#include "curbet.h"
#include "computerThinker.h"
#include <gtest/gtest.h>

void testChange(CurBet &bet){
    bet.changeFace(1);
    ASSERT_TRUE(bet.getFace() == 1);
    bet.changeAmt(2);
    ASSERT_TRUE(bet.getAmt() == 2);
}
TEST(CurBet, testChange){
    CurBet testBet = CurBet();
    testChange(testBet);
}
void testPrint(CurBet &bet){
    bet.changeFace(4);
    ASSERT_TRUE(bet.getFace() == 4);
    bet.changeAmt(3);
    ASSERT_TRUE(bet.getAmt() == 3);
    std::string comp = bet.printBetButForTesting();
    ASSERT_EQ(comp, "\x3 fours"); //Note: Since this is printing bet as a string, the correct output is going to be slightly different. 
}
TEST(CurBet, testPrint){
    CurBet testBet = CurBet();
    testPrint(testBet);
}
void testUpdateTableKnowledge(computerThinker &cmp){
    CurBet testBet = CurBet();
    testBet.changeAmt(3);
    ASSERT_TRUE(testBet.getAmt() == 3);
    testBet.changeFace(5);
    ASSERT_TRUE(testBet.getFace() == 5);
    cmp.changeTableKnowledge(testBet);
    ASSERT_TRUE(cmp.tableKnowledge.getAmt() == testBet.getAmt());
    ASSERT_TRUE(cmp.tableKnowledge.getFace() == testBet.getFace());
}

TEST(computerThinker, testUpdateTableKnowledge){
    computerThinker testcmp = computerThinker();
    testUpdateTableKnowledge(testcmp);
}
void testLiarDetectedOne(computerThinker &cmp){ //Detecting major jump; opponent should be able to call bluff
    CurBet testBet = CurBet();
    testBet.changeAmt(3);
    testBet.changeFace(2);
    cmp.changeTableKnowledge(testBet);
    ASSERT_TRUE(cmp.tableKnowledge.getAmt() == testBet.getAmt());
    ASSERT_TRUE(cmp.tableKnowledge.getFace() == testBet.getFace());
    testBet.changeAmt(4);
    testBet.changeFace(4);
    ASSERT_FALSE(cmp.detectLiar(testBet));
    testBet.changeAmt(8);
    testBet.changeFace(6);
    ASSERT_TRUE(cmp.detectLiar(testBet));
}
TEST(computerThinker, testLiarDetectedOne){
    computerThinker testcmp = computerThinker();
    testLiarDetectedOne(testcmp);
}
void testLiarDetectedTwo(computerThinker &cmp){ //Simulating regular game, no major jumps
    CurBet testBet = CurBet();
    testBet.changeAmt(3); //Setting start vals
    testBet.changeFace(2); 
    cmp.changeTableKnowledge(testBet);
    testBet.changeAmt(4); //Player's Turn
    testBet.changeFace(4);
    ASSERT_FALSE(cmp.detectLiar(testBet)); //Liar Not Detected
    ASSERT_EQ(cmp.suspicion, 0.5);
    testBet.changeAmt(4); //Opponent's Turn
    testBet.changeFace(5); 
    cmp.changeTableKnowledge(testBet);
    testBet.changeAmt(6); //Player's Turn
    testBet.changeFace(3);
    ASSERT_FALSE(cmp.detectLiar(testBet));
    ASSERT_EQ(cmp.suspicion, 1.5);
    testBet.changeAmt(6); //Opponent's Turn
    testBet.changeFace(1);
    cmp.changeTableKnowledge(testBet);
}
TEST(computerThinker, testLiarDetectedTwo){
    computerThinker testcmp = computerThinker();
    testLiarDetectedTwo(testcmp);
}
void testOpClear(computerThinker testcmp){
    CurBet testbet = CurBet();
    testbet.changeAmt(3);
    testbet.changeFace(6);
    testcmp.detectLiar(testbet);
    ASSERT_EQ(testbet.getAmt(), testcmp.tableKnowledge.getAmt());
    ASSERT_EQ(testbet.getFace(), testcmp.tableKnowledge.getFace());
    ASSERT_FALSE(testcmp.suspicion == 0.0);
    testcmp.clearAllVars();
    ASSERT_TRUE(testcmp.suspicion == 0.0);
}
TEST(computerThinker, testOpClear){
    computerThinker testcmp = computerThinker();
    testOpClear(testcmp);
}
void testShuffle(Board &brd){
    ASSERT_TRUE(brd.noDice());
    brd.ShuffleDice();
    ASSERT_FALSE(brd.noDice());
}
TEST(Board, testShuffle){
    Board testbrd = Board();
    testShuffle(testbrd);
}
void testDetectLiarOne(Board &brd){
    ASSERT_TRUE(brd.noDice());
    brd.ShuffleDice();
    ASSERT_FALSE(brd.noDice());
    brd.tablestate.changeAmt(2);
    brd.tablestate.changeFace(6);
    ASSERT_FALSE(brd.liar(true));

}
TEST(Board, testDetectLiarOne){
    Board testbrd = Board();
    testDetectLiarOne(testbrd);
}
void testDetectLiarTwo(Board &brd){
    ASSERT_TRUE(brd.noDice());
    brd.ShuffleDice();
    ASSERT_FALSE(brd.noDice());
    brd.tablestate.changeAmt(3);
    brd.tablestate.changeFace(3);
    ASSERT_FALSE(brd.liar(false));
}
TEST(Board, testDetectLiarTwo){
    Board testbrd = Board();
    testDetectLiarTwo(testbrd);
}
void testDetectLiarThree(Board &brd){
    ASSERT_TRUE(brd.noDice());
    brd.ShuffleDice();
    ASSERT_FALSE(brd.noDice());
    brd.tablestate.changeAmt(3);
    brd.tablestate.changeFace(5);
    ASSERT_TRUE(brd.liar(true));
}
TEST(Bard, testDetectLiarThree){
    Board testbrd = Board();
    testDetectLiarThree(testbrd);
}
void testDetectLiarFour(Board &brd){
    ASSERT_TRUE(brd.noDice());
    brd.ShuffleDice();
    ASSERT_FALSE(brd.noDice());
    brd.tablestate.changeAmt(5);
    brd.tablestate.changeFace(3);
    ASSERT_TRUE(brd.liar(false));
}
TEST(Board, testDetectLiarFour){
    Board testbrd = Board();
    testDetectLiarFour(testbrd);
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}