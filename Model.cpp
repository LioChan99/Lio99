#include"Model.h"
void Model::addPlayer(shared_ptr<Player> player){
    //player->insertInfor();
    players.push_back(player);
};
void Model::getPlayerByName(string name){
    for(int i=0;i<players.size();i++){
        if(players[i]->getName()==name){
            players[i]->ShowInfo();
        }
    }
}
shared_ptr<Player> Model::checkExistPlayer(string name){
    for(int i=0;i<players.size();i++){
        if(players[i]->getName()==name){
            return (players[i]);
            
        }
    }
    return NULL;
}
 void Model::showPlayersInfor(){
         for(int i=0;i<players.size();i++){
            players[i]->ShowInfo();
         }
       }
 /*Model::~Model(){
     for(int i=0;i<players.size();i++){
        delete players[i];
     }
 }*/
