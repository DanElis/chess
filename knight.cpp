#include "knight.h"
void Knight::ToMove(int x, int y) {
    if(!(abs(currentPos.SetPositionX() - x) == 2 && abs(currentPos.SetPositionY() - y) == 1)
       && !(abs(currentPos.SetPositionX() - x) == 1 && abs(currentPos.SetPositionY() - y) == 2))
        throw std::logic_error("impossimble move");
    currentPos.NewPosition(x,y);
}