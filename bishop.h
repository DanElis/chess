
#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H
#include <stdexcept>
#include "piece.h"
#include "position.h"
#include <exception>
class Bishop:public Piece{
public:
    Bishop(){
        isLife = false;
    }
    Bishop(int x , int y){
        currentPos.NewPosition(x,y);
        isLife = true;
    }
    void ToMove(int x , int y);

    void SetColor(bool white){
        isWhite = white;
    }
    bool IsWhite(){
        return isWhite;
    }
    bool IsLife(){
        return isLife;
    }

private:
    Position currentPos;
    bool isWhite;
    bool isLife;
};
#endif //CHESS_BISHOP_H
