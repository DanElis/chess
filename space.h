#ifndef CHESS_SPACE_H
#define CHESS_SPACE_H
#include <exception>
class Space{
public:
    Space(){
        hereIsFigure = false;
    }
    void SetFigure(int indexNewFigure);
    bool HasFigure(){
        return hereIsFigure;
    }
    void FigureIsGone(){
            hereIsFigure = false;
    };
    int GetFigure(){
        return indexFigure;
    }
private:
    bool hereIsFigure;
    int indexFigure;
};
#endif //CHESS_SPACE_H
