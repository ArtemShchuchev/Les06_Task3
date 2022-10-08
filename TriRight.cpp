#include "TriRight.h"

TriRight::TriRight(int lenA, int lenB, int lenC, short angA, short angB, short angC)
{
    setLengh(lenA, lenB, lenC);
    setAngle(angA, angB, angC);
}

void TriRight::exepAng(short a, short b, short c)
{
    if (c != 90)
    {
        throw FiguraExeption("угол C не равен 90");
    }
}
