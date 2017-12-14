#include "king.h"
void King::ToMove(int x , int y) {
    if(isWhite && !wasMoving){
        if(currentPos.SetPositionX()-x == -2 || currentPos.SetPositionX()-x == 3) {
            wasMoving = true;
            currentPos.NewPosition(x, y);
            return;
        }
    }
    else if(!isWhite && !wasMoving){
        if(currentPos.SetPositionX()-x == 2 || currentPos.SetPositionX()-x == -3) {
            wasMoving = true;
            currentPos.NewPosition(x, y);
            return;
        }
    }
    if (abs(currentPos.SetPositionY() - y) > 1 || abs(currentPos.SetPositionX() - x) > 1 )
        throw std::logic_error("impossible move");
    if(currentPos.SetPositionY() == y && currentPos.SetPositionX() == x)
        throw std::logic_error("impossible move");

    wasMoving = true;
    currentPos.NewPosition(x,y);
}
