#include"Control.h"
#include"Model.h"

void Control::addPlayer(shared_ptr<Player> player){

     model.addPlayer(player);
}
void Control::findSimilerPlayer(string name){
	model.findSimilerPlayer(name);
}
Model Control::getModel(){
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
void Control:: PlayGame(shared_ptr<Player> player1,shared_ptr<Player> player2){
		int x, y;
	while (1) {	
		system("cls");
		cout<<"                CARO GAME "<<endl;
		cout<<"    "<<player1->getName()<<"<X>"<<"                     "<<player2->getName()<<"<O>"<<endl;
		view.drawChessBoard();
		cout << "Insert x,y: ";
		cin >> x >> y;
		view.insertXO(x,y);	
		if (CheckWin(x, y) == 1) {
			system("cls");
			view.drawChessBoard();
			cout<<"                CARO GAME "<<endl;
		cout<<"    "<<player1->getName()<<"<X>"<<"                      "<<player2->getName()<<"<O>"<<endl;
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
	model.imPortFile();
	view.resetBoard();
}

