#include "Rhombus.h"

Rhombus::Rhombus(int a, int b, int c, int d, short A, short B, short C, short D)
{
    setLengh(a,b,c,d);
    setAngle(A,B,C,D);
}
//ромб (все стороны равны, углы A,C и B,D попарно равны)
void Rhombus::exepLen(int a, int b, int c, int d)
{
    if (a != b || b != c || c != d)
    {
        throw FiguraExeption("Стороны не равны");
    }
}

void Rhombus::exepAng(short a, short b, short c, short d)
{
    if (a != c || b != d)
    {
        throw FiguraExeption("Углы A,C и B,D попарно не равны");
    }
}
