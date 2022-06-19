#include"Control.h"
int main(){
	int select;
	Control control;
	do{
		cout<<"======== CARO GAME ========="<<endl;
		cout<<" 1. New game"<<endl;
		cout<<" 2. Show players'information"<<endl;
        cout<<" 3. Find player with same rank"<<endl;
		cout<<" 4. Exit "<<endl;
        cin>>select;
		switch(select){
			case 1:
			{
				system("cls");
			shared_ptr<Player>player1(new Player);
	        shared_ptr<Player>player2(new Player);
			player1->setX();
			player2->setO();
			  // Add player 1
			  cout<<"Add player1: "<<endl;
			  player1->insertInfor();
			  if(control.getModel().checkExistPlayer(player1->getName())==NULL){
			  control.addPlayer(player1);}
			  else player1= control.getModel().checkExistPlayer(player1->getName());
              // Add player 2
			  cout<<"Add player2: "<<endl;
			  player2->insertInfor();
			  if(control.getModel().checkExistPlayer(player2->getName())==NULL){
			  control.addPlayer(player2);}
			  else player2= control.getModel().checkExistPlayer(player2->getName());
			  control.PlayGame(player1,player2);
		      

			  break;
			}
			case 2:
			  system("cls");
			  control.getModel().showPlayersInfor();
			  break;
            case 3:{
				system("cls");
              cout<<"Enter name: "<<endl;
              string name;
              cin>>name;
			  cout<<"The player has the same rank with you is: "<<endl;
              control.findSimilerPlayer(name);
              break;
            }
			case 4:
			  return 1;
			  break;

	    }
    }
     while(select==1|| select==2||select==3||select==4);
}
