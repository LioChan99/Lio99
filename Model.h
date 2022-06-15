#ifndef MODEL_H
#define MODEL_H
#include<string.h>
#include"Players.h"
#include<vector>
#include<memory>
class Model{
    private:
       vector<shared_ptr<Player>>players;
       friend class Control;
    public:
       void addPlayer(shared_ptr<Player> player);
       void getPlayerByName(string name); 
       shared_ptr<Player> checkExistPlayer(string name);
       void showPlayersInfor();
      // ~Model();
};
#endif