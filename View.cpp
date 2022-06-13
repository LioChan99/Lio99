#include"View.h"
_View::_View(){
	this->playXO = 'X';
	 for (int i = 0; i < 10; i++) {
	 	for (int j = 0; j < 10; j++) {
	 		this->chessBoard[i][j]= '-';
	 	}
	 }
}
void _View::drawChessBoard() {
	// this->playXO = 'X';
	// for (int i = 0; i < 10; i++) {
	// 	for (int j = 0; j < 10; j++) {
	// 		this->chessBoard[i][j]= '-';
	// 	}
	// }
	cout<<"                CARO GAME "<<endl;
	for (int i = 0; i < 10; i++) {
		cout << "| ";
		for (int j = 0; j < 10; j++) {
			cout << this->chessBoard[i][j] << " | ";
		}
		cout << endl;
	}
}
void _View::insertXO(int &x,int &y){
//switch XO before play
	if (0<=x && x < 10 && 0<=y && y<10 && this->chessBoard[x][y]=='-') {
		this->chessBoard[x][y] = this->playXO;
		if (this->playXO == 'X') {
			this->playXO = 'O';
		}
		else {
			this->playXO = 'X';
		}
	}
	else {
		cout << "Invalid position!"<<endl;
	}
}
void _View::resetBoard(){
    
}