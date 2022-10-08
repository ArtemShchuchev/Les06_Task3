#include "Quad.h"

// ����������� �� ���������, ��������� ����������� �������� � �����������
Quad::Quad() : Figura(4) { ; }

void Quad::setLengh(int a, int b, int c, int d)
{
    exepLen(a, b, c, d);
}

void Quad::setAngle(short a, short b, short c, short d)
{
    if (a + b + c + d != 360)
    {
        throw FiguraExeption("����� ����� �� ����� 360");
    }
    exepAng(a, b, c, d);
}

void Quad::exepLen(int a, int b, int c, int d) { return; }

void Quad::exepAng(short a, short b, short c, short d) { return; }

void Quad::exepQtySide()
{
    if (getQtySide() != 4) throw FiguraExeption("����� ����� �� ����� 4");
}
