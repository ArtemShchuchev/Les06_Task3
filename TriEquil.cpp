#include "TriEquil.h"

TriEquil::TriEquil(int lenghA, int lenghB, int lenghC, short A, short B, short C)
{
    setLengh(lenghA, lenghB, lenghC);
    setAngle(A, B, C);
}
//�������������� �����������(��� ������� �����, ��� ���� ����� 60)
void TriEquil::exepLen(int a, int b, int c)
{
    if (a != b || b != c)
    {
        throw FiguraExeption("������� �� �����");
    }
}
void TriEquil::exepAng(short a, short b, short c)
{
    // 60 + 60 + 60 = 180 (180 ����������� � ������������)
    if (a != b || b != c)
    {
        throw FiguraExeption("���� �� ����� 60");
    }
}