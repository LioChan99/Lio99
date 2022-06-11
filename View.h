#ifndef View.h
#define View.h
#include<iostream>
using namespace std;
class _View {
    private:
	char chessBoard[10][10];
	char playXO;
    friend class Control;
public:
    _View();
	void drawChessBoard();
    void insertXO(int x,int y);
	void resetBoard();
};
#endif
