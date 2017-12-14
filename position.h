#ifndef CHESS_SPACE_H
#define CHESS_SPACE_H
class Position{
public:
    Position(){
        x = 0;
        y = 0;
    }
    Position(int x1, int y1){
        x = x1;
        y1 = y1;
    }
    int SetPositionX(){
        return x;
    }
    int SetPositionY(){
        return y;
    }
    void NewPosition(int x1, int y1){
        x = x1;
        y = y1;
    }
private:
    int x,y;
};
#endif //CHESS_SPACE_H
