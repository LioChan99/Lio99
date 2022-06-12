#include"Control.h"
int main(){
   Control control;
   cout<<"Player 1:" ;
   control.addPlayer();
   cout<<"Player 2: ";
   control.addPlayer();
   control.PlayGame();
}