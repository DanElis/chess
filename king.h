#ifndef CHESS_KING_H
#define CHESS_KING_H

#include "piece.h"
#include "position.h"
#include <exception>
#include <stdexcept>
class King:public Piece{
public:
    King(){
        wasMoving = false;
        isLife = false;
    }
    King(int x, int y){
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
#endif //CHESS_KING_H
