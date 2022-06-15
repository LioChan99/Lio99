#ifndef CONTROL_H
#define CONTROL_H
#include "Model.h"
#include "View.h"
using namespace std;

class Control{
    private:
        Model model;
        View view;

    public:
        void addPlayer(shared_ptr<Player> player);
        int CheckWin(int &x,int &y);
        void PlayGame(shared_ptr<Player> player1,shared_ptr<Player> player2);
        char getCurrentXY(int &x,int &y);
        Model getModel();

};
#endif