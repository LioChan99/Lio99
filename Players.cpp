#include"Players.h"
Player::Player(){
    this->win=0;
    this->loss=0;
    this->draw=0;
}
void Player:: insertInfor(){
    cout<<"Enter name:";
    //cin.ignore();
    //getline(cin,name);
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    cout<<" choose X or O :";
    cin>>id;
    // do{
    //    if(id=='X') {cout<<" You will play with X"<<endl;}
    //    break;
    //    if(id=='O') {cout<<"You will play with O"<<endl;}
    //    break;
    // }
    // while(id=='X'|| id=='O');
}
string Player::getName(){
    return name;
}

void Player:: ShowInfo(){
    cout<<name<<" "<<"Win:"<<win<<" Loss:"<<loss<<" Draw:"<<draw<<endl;
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