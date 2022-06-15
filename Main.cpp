#include"Control.h"
int main(){
	int select;
	Control control;
	do{
		cout<<"1. New Game"<<endl;
		cout<<"2. Show Players'Information: "<<endl;
        cout<<"3. Find Similer Player by name: "<<endl;
		cout<<"4. Exit "<<endl;
        cin>>select;
		switch(select){
			case 1:
			{
			shared_ptr<Player>player1(new Player);
	        shared_ptr<Player>player2(new Player);
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
			  control.getModel().showPlayersInfor();
			  break;
            case 3:{
              cout<<"Enter name: "<<endl;
              string name;
              cin>>name;
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
