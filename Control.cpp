#include"Control.h"

void Control::addPlayer(){
    model.addPlayer();

}
int Control::CheckWin(int x, int y){
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
void Control:: PlayGame(){
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
			cout<<"Win!";
			/*for(int i=0;i<model.players.size();i++){
				if(model.players[i]->getId()==getCurrentXY(x,y)){
					cout<< model.players[i]->getName()<<" WIN!"<<endl;
				}
			}*/
			break;
		}
	}
//  view.drawChessBoard();
//  view.insertXO(int x,int y);
//  CheckWin(int x,int y);
}

