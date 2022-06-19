#include"Players.h"
Player::Player(){
    this->win=0;
    this->loss=0;
    this->draw=0;
}
void Player:: insertInfor(){
    cout<<"Enter name:";
    cin>>name;
}
string Player::getName(){
    return name;
}

void Player:: ShowInfo(){
    cout<<name<<endl;
    cout<<"Win:"<<this->win<<" Loss:"<<this->loss<<" Draw:"<<this->draw<<" Winrate: "<<this->calculateWinrate()<<endl;
}
char Player::getId(){
    return id;
}
int Player::getWin(){
    return win;
}
int Player::getLoss(){
    return loss;
}
void Player:: setWin(int win){
    this->win=win;
}
void Player:: setLoss(int loss){
    this->loss=loss;
}
float Player::calculateWinrate(){
    return (this->win/(this->loss+ this->win)*100);
}
void Player::setX(){
    this->id='X';
}
void Player::setO(){
    this->id='O';
}