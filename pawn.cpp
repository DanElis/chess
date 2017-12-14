#include "pawn.h"
void Pawn::ToMove(int x, int y) {
    if(isWhite){
        if (currentPos.SetPositionX() - x > 2 || currentPos.SetPositionX()-x < 1
            || abs(currentPos.SetPositionY()-y) > 1)
            throw std::logic_error("impossible move");
        if((!wasMoving && currentPos.SetPositionX()-x == 2) && currentPos.SetPositionY() - y != 0)
            throw std::logic_error("impossible move");
        currentPos.NewPosition(x,y);
    }
    else{
        if (currentPos.SetPositionX() - x < -2 || currentPos.SetPositionX()-x > -1
            || abs(currentPos.SetPositionY()-y) > 1)
            throw std::logic_error("impossible move");
        if((!wasMoving && currentPos.SetPositionX()-x == -2) && currentPos.SetPositionY() - y != 0)
            throw std::logic_error("impossible move");
        currentPos.NewPosition(x,y);
    }
    wasMoving = true;


}
