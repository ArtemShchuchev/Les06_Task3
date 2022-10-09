#include "TriIsos.h"

TriIsos::TriIsos(int lenA, int lenB, int lenC, short angA, short angB, short angC)
{
    setLengh(lenA, lenB, lenC);
    setAngle(angA, angB, angC);
}
//равнобедренный треугольник(стороны a и c равны, углы A и C равны);
void TriIsos::exepLen(int a, int b, int c)
{
    std::cout << "\n стороны a = " << a << " b = " << b << " c = " << c;
    if (a != c)
    {
        throw FiguraExeption("Стороны A и C не равны");
    }
}
void TriIsos::exepAng(short a, short b, short c)
{
    std::cout << "\n углы a = " << a << " b = " << b << " c = " << c << "  ";
    if (a != c)
    {
        throw FiguraExeption("Углы A и C не равны");
    }
}