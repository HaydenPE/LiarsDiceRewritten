#include <iostream>
#include <string>
#pragma once

class CurBet{
    public:
        CurBet();

        ~CurBet();

        void changeFace(int cFace);

        void changeAmt(int cAmt);

        int getFace();

        int getAmt();

        bool newBet();

    private:
        int face;
        int amt;
};