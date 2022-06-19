#include"Model.h"
void Model::addPlayer(shared_ptr<Player> &player){
    //player->insertInfor();
    players.push_back(player);
};
shared_ptr<Player> Model::getPlayerByName(string &name){
    for(int i=0;i<players.size();i++){
        if(players[i]->getName()==name){
            return players[i];
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

 void Model::imPortFile(){
    ofstream FilePlayers("File Players.ini");
    for(int i=0;i<players.size();i++){
        FilePlayers<<"Players's name: "<<players[i]->getName()<<endl;
        FilePlayers<<"Win: "<<players[i]->getWin()<<endl;
        FilePlayers<<"Loose: "<<players[i]->getLoss()<<endl;
        FilePlayers<<"Winrate: "<<players[i]->calculateWinrate()<<endl;
    }
    FilePlayers.close();
 }
 void Model::findSimilerPlayer(string &name){
    int flag;
    float rate;
       for(int i=0;i<players.size();i++){
        if(players[i]->getName()==name){
            flag=i;
            rate=players[i]->calculateWinrate();
            //break;
        }
    }
    float min=100;
     for(int i=0;i<players.size();i++){
        if(abs(players[i]->calculateWinrate()-rate)<min && i!=flag){
            min=abs(players[i]->calculateWinrate()-rate);
        }
     }
     for(int i=0;i<players.size();i++){
        if(abs(players[i]->calculateWinrate()-rate)==min && i!=flag)
        players[i]->ShowInfo();
     }
 }
 