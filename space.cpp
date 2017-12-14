#include <stdexcept>
#include "space.h"

void Space::SetFigure(int indexNewFigure) {
    if (indexNewFigure < 0 || indexNewFigure > 31)
        throw std::logic_error("this isn't a figure");
    indexFigure = indexNewFigure;
    hereIsFigure = true;
   /* switch (newFigure){
        case 'p':
            figure = 'p';
            hereIsFigure = true;
        case 'b':
            figure = 'b';
            hereIsFigure = true;
        case 'n':
            figure = 'n';
            hereIsFigure = true;
        case 'r':
            figure = 'r';
            hereIsFigure = true;
        case 'q':
            figure = 'q';
            hereIsFigure = true;
        case 'k':
            figure = 'k';
            hereIsFigure = true;
        default:
            throw std::logic_error("this isn't a figure");
    }*/
}