#include"Model.h"
void _Model::addPlayer( unique_ptr<Player> player){
    player =unique_ptr<Player>(new Player);
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
unique_ptr<Player> _Model::checkExistPlayer(string name){
    for(auto i=players.begin();i!=players.end();i++){
        if((*i)->getName()==name){
            return (std::move(*i));
        }
        else return NULL;
    }
    
}
 void _Model::showPlayersInfor(){
         for(auto i=players.begin();i!=players.end();i++){
            (*i)->ShowInfo();
         }
       }
