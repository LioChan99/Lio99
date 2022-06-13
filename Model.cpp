#include"Model.h"
void _Model::addPlayer(Player player){
    //player->insertInfor();
    players.push_back(player);
};
void _Model::getPlayerByName(string name){
    for(int i=0;i<players.size();i++){
        if(players[i].getName()==name){
            players[i].ShowInfo();
        }
    }
}
Player _Model::checkExistPlayer(Player player){
    for(int i=0;i<players.size();i++){
        if(players[i].getName()==player.getName()){
            return (players[i]);
        }
    }
    return player;  
}
 void _Model::showPlayersInfor(){
         for(int i=0;i<players.size();i++){
            players[i].ShowInfo();
         }
       }
