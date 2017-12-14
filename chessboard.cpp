#include "chessboard.h"
#include "pawn.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"
#include "king.h"
#include "queen.h"

void Chessboard::PutFigure(int indexFigure, int x, int y) {
    board[x][y].SetFigure(indexFigure);
}

void Chessboard::Move( int x1, int y1, int x2, int y2) {
    board[x1][y1].GetFigure();
}

void Chessboard::NewGame() {
    isWhiteMove = true;
    for(int i = 0; i < 8; i++){
        (Pawn*)figures[i];
        figures[i]->SetColor(true);
        board[i][2].SetFigure(i);
    }
    for (int i = 16; i < 24; i++){
        (Pawn*)figures[i];
        figures[i]->SetColor(false);
        board[i][7].SetFigure(i);
    }
    (Rook*)figures[8];
    (Rook*)figures[15];
    (Rook*)figures[24];
    (Rook*)figures[31];
    (Knight*)figures[9];
    (Knight*)figures[14];
    (Knight*)figures[25];
    (Knight*)figures[30];
    (Bishop*)figures[10];
    (Bishop*)figures[13];
    (Bishop*)figures[26];
    (Bishop*)figures[29];
    (King*)figures[12];
    (King*)figures[28];
    (Queen*)figures[11];
    (Queen*)figures[27];
    for (int i = 0; i < 8; i++){
        board[i][2].SetFigure(i+8);
        figures[i+8]->SetColor(true);
    }
    figures[]
    for(int i = 0; i < 8; i++){
        board[i][7].SetFigure(i+24);
        figures[i+24]->SetColor(false);
    }
}