#include "Rectangle.h"

Rectangle::Rectangle(int lenA, int lenB, int lenC, int lenD, short a, short b, short c, short d)
{
    setLengh(lenA, lenB, lenC, lenD);
    setAngle(a,b,c,d);
}
//прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
void Rectangle::exepLen(int a, int b, int c, int d)
{
    if (a != c || b != d)
    {
        throw FiguraExeption("Стороны a,c и b,d попарно не равны");
    }
}

void Rectangle::exepAng(short a, short b, short c, short d)
{
    if (a != b || b != c || c != d)
    {
        throw FiguraExeption("Углы не равны 90");
    }
}
