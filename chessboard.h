#ifndef CHESS_CHESSBOARD_H
#define CHESS_CHESSBOARD_H

#include "space.h"
#include "piece.h"

class Chessboard{
public:
    Chessboard(){

    }
    void NewGame();
    void Move(int x1, int y1, int x2, int y2);
    void PutFigure(int indexFigure, int x, int y);
private:
    Space board[8][8];
    Piece* figures[32];
    bool isWhiteMove;
};
#endif
