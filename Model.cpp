#include"Model.h"
void _Model::addPlayer( unique_ptr<Player> player){
    unique_ptr<Player> player(new Player);
    //player->insertInfor();
    players.push_back(std::move(player));
};
void _Model::getPlayerByName(string name){
    for(int i=0;i<players.size();i++){
        if(players[i]->getName()==name){
            players[i]->ShowInfo();
        }
    }
}
