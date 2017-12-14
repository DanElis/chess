#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H
class Piece{
public:
    virtual void ToMove(int x , int y) = 0;
    virtual void SetColor(bool color) = 0;
    virtual bool IsWhite() = 0;
    virtual bool IsLife() = 0;
private:
   // virtual bool IsOpenFile(int x,int y) = 0;

};
#endif //CHESS_PIECE_H
