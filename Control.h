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
        void addPlayer(Player &player);
        int CheckWin(int &x,int &y);
        void PlayGame(Player &player1,Player &player2);
        char getCurrentXY(int &x,int &y);
        _Model getModel();

};
#endif