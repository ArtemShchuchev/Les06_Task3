#include "TriIsos.h"

TriIsos::TriIsos(int lenA, int lenB, int lenC, short angA, short angB, short angC)
{
    setLengh(lenA, lenB, lenC);
    setAngle(angA, angB, angC);
}
//�������������� �����������(������� a � c �����, ���� A � C �����);
void TriIsos::exepLen(int a, int b, int c)
{
    if (a != c)
    {
        throw FiguraExeption("������� A � C �� �����");
    }
}
void TriIsos::exepAng(short a, short b, short c)
{
    if (a != c)
    {
        throw FiguraExeption("���� A � C �� �����");
    }
}