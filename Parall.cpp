#include "Parall.h"

Parall::Parall(int a, int b, int c, int d, short A, short B, short C, short D)
{
    setLengh(a,b,c,d);
    setAngle(A,B,C,D);
}
//параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны)
void Parall::exepLen(int a, int b, int c, int d)
{
    if (a != c || b != d)
    {
        throw FiguraExeption("Стороны a,c и b,d попарно не равны");
    }
}

void Parall::exepAng(short a, short b, short c, short d)
{
    if (a != c || b != d)
    {
        throw FiguraExeption("Углы A,C и B,D попарно не равны");
    }
}
