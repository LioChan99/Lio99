#ifndef MODEL_H
#define MODEL_H
#include<string.h>
#include"Players.h"
#include<vector>
#include<memory>
class _Model{
    private:
       vector<unique_ptr<Player>>players;
       friend class Control;
    public:
       void addPlayer(unique_ptr<Player> player);
       void getPlayerByName(string name); 
       unique_ptr<Player> checkExistPlayer(string name);
       void showPlayersInfor();
};
#endif