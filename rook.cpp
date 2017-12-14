#include "rook.h"
void Rook::ToMove(int x, int y) {
    if(currentPos.SetPositionX() - x != 0 && currentPos.SetPositionY() - y != 0)
        throw std::logic_error("impossible move");
    currentPos.NewPosition(x,y);
}
