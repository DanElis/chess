#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H
#include <stdexcept>
#include "piece.h"
#include "position.h"
#include <exception>
class Rook:public Piece {
public:
    Rook(){
        isLife = false;
    }
    Rook(int x, int y) {
        currentPos.NewPosition(x,y);
        isLife = true;
    }

    void ToMove(int x, int y);

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
#endif //CHESS_ROOK_H
