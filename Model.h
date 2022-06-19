#ifndef MODEL_H
#define MODEL_H
#include<string.h>
#include"Players.h"
#include<vector>
#include<memory>
#include<fstream>
class Model{
    private:
       vector<shared_ptr<Player>>players;
       friend class Control;
    public:
       void addPlayer(shared_ptr<Player> &player);
       shared_ptr<Player> getPlayerByName(string &name); 
       shared_ptr<Player> checkExistPlayer(string name);
       void showPlayersInfor();
       void imPortFile();
       void findSimilerPlayer(string &name);
       
};
#endif