#include "TriEquil.h"

TriEquil::TriEquil(int lenghA, int lenghB, int lenghC, short A, short B, short C)
{
    setLengh(lenghA, lenghB, lenghC);
    setAngle(A, B, C);
}
//равносторонний треугольник(все стороны равны, все углы равны 60)
void TriEquil::exepLen(int a, int b, int c)
{
    if (a != b || b != c)
    {
        throw FiguraExeption("Стороны не равны");
    }
}
void TriEquil::exepAng(short a, short b, short c)
{
    // 60 + 60 + 60 = 180 (180 проверяется в треугольнике)
    if (a != b || b != c)
    {
        throw FiguraExeption("Углы не равны 60");
    }
}