#ifndef View_h
#define View_h
#include<iostream>
using namespace std;
class View {
    private:
	char chessBoard[10][10];
	char playXO;
    friend class Control;
public:
    View();
	void drawChessBoard();
    void insertXO(int &x,int &y);
	void resetBoard();
};
#endif
