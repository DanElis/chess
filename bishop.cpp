#include "bishop.h"
void Bishop::ToMove(int x, int y) {
    if(abs(currentPos.SetPositionY() - y) != abs(currentPos.SetPositionX() - x))
        throw std::logic_error("impossible move");
    currentPos.NewPosition(x,y);
}