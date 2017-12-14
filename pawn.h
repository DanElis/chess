#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H
#include "piece.h"
#include "position.h"
#include <exception>
#include <stdexcept>
class Pawn:public Piece{
public:
    Pawn(){
        wasMoving = false;
        isLife = false;
    }
    Pawn(int x, int y){
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
    bool wasMoving;
    bool isWhite;
    bool isLife;
};
#endif //CHESS_PAWN_H
