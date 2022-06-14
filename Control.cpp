#include"Control.h"
#include"Model.h"

void Control::addPlayer(Player* player){

     model.addPlayer(player);
}
_Model Control::getModel(){
	return this->model;
}
int Control::CheckWin(int &x, int &y){
    int i, j, dem1, dem2, dem3, dem4;
	dem1 = dem2 = dem3 = dem4 = 0;

	char XO = view.chessBoard[x][y];

	//dem theo chieu ngang
	i = x; j = y;
	while (0 <= j && view.chessBoard[i][j] == XO) {
		dem1++;
		j--;
	}

	i = x; j = y+1;
	while (j<10 && view.chessBoard[i][j] == XO) {
		dem1++;
		j++;
	}

	//check win theo chieu doc
	i = x, j = y;
	while (0 <= i && view.chessBoard[i][j] == XO) {
		dem2++;
		i--;
	}

	i = x + 1, j = y;
	while (i < 10 && view.chessBoard[i][j] == XO) {
		dem2++;
		i++;
	}

	//check win duong cheo thu nhat
	i = x, j = y;
	while (0 <= i && 0 <=j && view.chessBoard[i][j] == XO) {
		dem3++;
		i--;
		j--;
	}

	i = x + 1, j = y + 1;
	while (i < 10 && j < 10 && view.chessBoard[i][j] == XO) {
		dem3++;
		i++;
		j++;
	}

	//check win duong cheo thu hai
	i = x, j = y;
	while (0 <= i && j<10 && view.chessBoard[i][j] == XO) {
		dem4++;
		i--;
		j++;
	}

	i = x + 1, j = y - 1;
	while (i < 10 && 0 <= j && view.chessBoard[i][j] == XO) {
		dem4++;
		i++;
		j--;
	}

	if (dem1 == 5 || dem2 == 5|| dem3 == 5 || dem4 == 5) {
		return 1;
	}
	else {
		return 0;
	}
}
char Control::getCurrentXY(int &x,int &y){
	return view.chessBoard[x][y];
}
void Control:: PlayGame(Player* player1,Player* player2){
		int x, y;
	while (1) {	
		system("cls");
		view.drawChessBoard();
		cout << "Insert x,y: ";
		cin >> x >> y;
		view.insertXO(x,y);	
		if (CheckWin(x, y) == 1) {
			system("cls");
			view.drawChessBoard();
			 //cout<<"Win"<<endl;
			if(player1->getId()==getCurrentXY(x,y)){
				cout<<player1->getName() <<" WIN!"<<endl;
				player1->setWin(player1->getWin()+1);
				player2->setLoss(player2->getLoss()+1);
			}
			else{
				cout<<player2->getName() <<" WIN!"<<endl;
				player2->setWin(player1->getWin()+1);
				player1->setLoss(player2->getLoss()+1);
			}		
			break;
		}
	}
	view.resetBoard();
}

int main(){
	int select;
	Control control;
	do{
		cout<<"1. New Game"<<endl;
		cout<<"2. Show Players'Information: "<<endl;
		cout<<"3. Exit "<<endl;
        cin>>select;
		switch(select){
			case 1:
			{
			Player* player1=new(Player);
	        Player* player2=new(Player);
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
			case 3:
			  return 1;
			  break;

	    }
    }
     while(select==1|| select==2||select==3);
}