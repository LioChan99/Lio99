#ifndef Players.h
#define Players.h
#include<string>
#include <iostream>
using namespace std;

class Player{
    private:
        string name;
        char id;
        int age;
        int win;
        int loss;
        int draw;

    public:
       string getName();
       void insertInfor();
       char getId();
        void ShowInfo();

};


#endif