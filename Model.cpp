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
int _Model::checkExistPlayer(Player player){
    for(int i=0;i<players.size();i++){
        if(players[i].getName()==player.getName()){
            player= (players[i]);
            return 0;
        }
    }
    return 1;
}
 void _Model::showPlayersInfor(){
         for(int i=0;i<players.size();i++){
            players[i].ShowInfo();
         }
       }
