#include "Square.h"

Square::Square(int a, int b, int c, int d, short A, short B, short C, short D)
{
    setLengh(a,b,c,d);
    setAngle(A,B,C,D);
}
//������� (��� ������� �����, ��� ���� ����� 90)
void Square::exepLen(int a, int b, int c, int d)
{
    if (a != b || b != c || c != d)
    {
        throw FiguraExeption("������� �� �����");
    }
}

void Square::exepAng(short a, short b, short c, short d)
{
    if (a != b || b != c || c != d)
    {
        throw FiguraExeption("���� �� ����� 90");
    }
}
