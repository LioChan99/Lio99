#include"Control.h"
int main(){
   Control control;
   cout<<"Player 1: "<<endl ;
   control.addPlayer();
   cout<<"Player 2: "<<endl;
   control.addPlayer();
   control.PlayGame();
}