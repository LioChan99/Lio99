#include"View.h"
View::View(){
	this->playXO = 'X';
	 for (int i = 0; i < 20; i++) {
	 	for (int j = 0; j < 20; j++) {
	 		this->chessBoard[i][j]= '_';
	 	}
	 }
}
int View::CheckWin(int &x, int &y){
    int i, j, dem1, dem2, dem3, dem4;
	dem1 = dem2 = dem3 = dem4 = 0;

	char XO = chessBoard[x][y];

	//dem theo chieu ngang
	i = x; j = y;
	while (0 <= j && chessBoard[i][j] == XO) {
		dem1++;
		j--;
	}

	i = x; j = y+1;
	while (j<20 && chessBoard[i][j] == XO) {
		dem1++;
		j++;
	}

	//check win theo chieu doc
	i = x, j = y;
	while (0 <= i && chessBoard[i][j] == XO) {
		dem2++;
		i--;
	}

	i = x + 1, j = y;
	while (i < 20 && chessBoard[i][j] == XO) {
		dem2++;
		i++;
	}

	//check win duong cheo thu nhat
	i = x, j = y;
	while (0 <= i && 0 <=j && chessBoard[i][j] == XO) {
		dem3++;
		i--;
		j--;
	}

	i = x + 1, j = y + 1;
	while (i < 20 && j < 20 && chessBoard[i][j] == XO) {
		dem3++;
		i++;
		j++;
	}

	//check win duong cheo thu hai
	i = x, j = y;
	while (0 <= i && j<20 && chessBoard[i][j] == XO) {
		dem4++;
		i--;
		j++;
	}

	i = x + 1, j = y - 1;
	while (i < 20 && 0 <= j && chessBoard[i][j] == XO) {
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
void View::drawChessBoard() {
	

	for (int i = 0; i < 20; i++) {
		cout << "|";
		for (int j = 0; j < 20; j++) {
			cout <<"_"<< this->chessBoard[i][j]<<"_" << "|";
		}
		cout << endl;
	}
}
void View::insertXO(int &x,int &y){
//switch XO before play
	if (0<=x && x < 20 && 0<=y && y<20 && this->chessBoard[x][y]=='_') {
		this->chessBoard[x][y] = this->playXO;
		if (this->playXO == 'X') {
			this->playXO = 'O';
		}
		else {
			this->playXO = 'X';
		}
	}
}


void View::resetBoard(){
    this->playXO = 'X';
	 for (int i = 0; i < 20; i++) {
	 	for (int j = 0; j < 20; j++) {
	 		this->chessBoard[i][j]= '_';
	 	}
	 }
}

void View::cls(HANDLE hStdOut)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD coordScreen = {0,0};
    DWORD cCharsWritten;
    DWORD dwConSize;
    
    GetConsoleScreenBufferInfo(hStdOut, &csbi);
    dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
    FillConsoleOutputCharacter(hStdOut,(TCHAR)' ',dwConSize,coordScreen,&cCharsWritten);
    GetConsoleScreenBufferInfo(hStdOut,&csbi);
    FillConsoleOutputAttribute(hStdOut,csbi.wAttributes,dwConSize,coordScreen,&cCharsWritten);
    SetConsoleCursorPosition(hStdOut,coordScreen);
    
    return;
}
void View:: GoTo(SHORT posX, SHORT posY){
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Position;
    Position.X = posX;
    Position.Y = posY;

	SetConsoleCursorPosition(hStdout, Position);
}
void View::insertXoOnly(int x,int y){
	int m=2+4*y;
	int n= x+3;
  if (0<=x && x < 20 && 0<=y && y<20 && this->chessBoard[x][y]=='_') {
		this->chessBoard[x][y] = this->playXO;
		 GoTo(m,n);
         cout<<this->playXO;
		if (this->playXO == 'X') {
			this->playXO = 'O';
		}
		else {
			this->playXO = 'X';
		}
	}
}