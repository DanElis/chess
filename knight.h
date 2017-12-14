#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H
#include "piece.h"
#include "position.h"
#include <exception>
#include <stdexcept>
class Knight:public Piece{
public:
    Knight(){
        isLife = false;
    }
    Knight(int x , int y){
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
#endif //CHESS_KNIGHT_H
