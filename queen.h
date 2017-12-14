#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H
#include <stdexcept>
#include "piece.h"
#include "position.h"
#include <exception>
class Queen:public Piece{
public:
    Queen(){
        isLife = false;
    }
    Queen(int x, int y){
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
private:
    Position currentPos;
    bool isWhite;
    bool isLife;
};
#endif //CHESS_QUEEN_H
