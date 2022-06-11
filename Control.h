#ifndef CONTROL_H
#define CONTROL_H
#include "Model.h"
#include "View.h"
using namespace std;

class Control{
    private:
        _Model model;
        _View view;

    public:
        void addPlayer();
        int CheckWin(int &x,int &y);
        void PlayGame();
        char getCurrentXY(int &x,int &y);

};
#endif