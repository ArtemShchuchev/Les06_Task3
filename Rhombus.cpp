#include "Rhombus.h"

Rhombus::Rhombus(int a, int b, int c, int d, short A, short B, short C, short D)
{
    setLengh(a,b,c,d);
    setAngle(A,B,C,D);
}
//���� (��� ������� �����, ���� A,C � B,D ������� �����)
void Rhombus::exepLen(int a, int b, int c, int d)
{
    if (a != b || b != c || c != d)
    {
        throw FiguraExeption("������� �� �����");
    }
}

void Rhombus::exepAng(short a, short b, short c, short d)
{
    if (a != c || b != d)
    {
        throw FiguraExeption("���� A,C � B,D ������� �� �����");
    }
}
