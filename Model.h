#ifndef MODEL_H
#define MODEL_H
#include<string.h>
#include"Players.h"
#include<vector>
#include<memory>
class _Model{
    private:
       vector<Player>players;
       friend class Control;
    public:
       void addPlayer(Player player);
       void getPlayerByName(string name); 
       Player checkExistPlayer(Player player);
       void showPlayersInfor();
};
#endif