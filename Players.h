#ifndef Players_h
#define Players_h
#include<string>
#include <iostream>
using namespace std;

class Player{
    private:
        string name;
        char id;
        int win;
        int loss;
        int draw;

    public:
       Player();
       int& getWin();
       int& getLoss();
       void setWin(int);
       void setLoss(int);
       string getName();
       void insertInfor();
       char getId();
        void ShowInfo();

};


#endif