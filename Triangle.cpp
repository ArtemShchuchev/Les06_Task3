#include "Triangle.h"

// ����������� �� ���������, ��������� ����������� �������� � �����������
Triangle::Triangle() : Figura(3) { ; }

void Triangle::setLengh(int a, int b, int c)
{
    exepLen(a, b, c);
}
void Triangle::setAngle(short a, short b, short c)
{
    if (a + b + c != 180)
    {
        throw FiguraExeption("����� ����� �� ����� 180");
    }
    exepAng(a, b, c);
}
void Triangle::exepLen(int a, int b, int c) { return; }
void Triangle::exepAng(short a, short b, short c) { return; }
void Triangle::exepQtySide()
{
    if (getQtySide() != 3) throw FiguraExeption("����� ����� �� ����� 3");
}
