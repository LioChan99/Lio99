#ifndef MODEL_H
#define MODEL_H
#include<string>
#include"Players.h"
#include<vector>
#include<memory>
class _Model{
    private:
       vector<Player*>players;
       friend class Control;
    public:
       void addPlayer(Player* player);
       void getPlayerByName(string name); 
       Player* checkExistPlayer(string name);
       void showPlayersInfor();
};
#endif