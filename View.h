#ifndef View_h
#define View_h
#include<iostream>
#include<Windows.h>
#include<conio.h>
using namespace std;
class View {
    private:
	char chessBoard[20][20];
	char playXO;
    friend class Control;
public:
    View();
	void drawChessBoard();
    void insertXO(int &x,int &y);
	void resetBoard();
    int CheckWin(int &x,int &y);
    void cls(HANDLE hStdOut);
    void insertXoOnly(int x,int y);
    void GoTo(SHORT posX, SHORT posY);

};
#endif
