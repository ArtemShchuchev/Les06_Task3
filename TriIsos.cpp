#include "TriIsos.h"

TriIsos::TriIsos(int lenA, int lenB, int lenC, short angA, short angB, short angC)
{
    setLengh(lenA, lenB, lenC);
    setAngle(angA, angB, angC);
}
//�������������� �����������(������� a � c �����, ���� A � C �����);
void TriIsos::exepLen(int a, int b, int c)
{
    std::cout << "\n ������� a = " << a << " b = " << b << " c = " << c;
    if (a != c)
    {
        throw FiguraExeption("������� A � C �� �����");
    }
}
void TriIsos::exepAng(short a, short b, short c)
{
    std::cout << "\n ���� a = " << a << " b = " << b << " c = " << c << "  ";
    if (a != c)
    {
        throw FiguraExeption("���� A � C �� �����");
    }
}