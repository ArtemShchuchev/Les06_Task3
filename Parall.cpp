#include "Parall.h"

Parall::Parall(int a, int b, int c, int d, short A, short B, short C, short D)
{
    setLengh(a,b,c,d);
    setAngle(A,B,C,D);
}
//�������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����)
void Parall::exepLen(int a, int b, int c, int d)
{
    if (a != c || b != d)
    {
        throw FiguraExeption("������� a,c � b,d ������� �� �����");
    }
}

void Parall::exepAng(short a, short b, short c, short d)
{
    if (a != c || b != d)
    {
        throw FiguraExeption("���� A,C � B,D ������� �� �����");
    }
}
