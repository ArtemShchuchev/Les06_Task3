#include "Figura.h"

Figura::Figura()                    // ����������� �� ���������
{
    qtySide = 0;
    lenght = nullptr;
    angle = nullptr;
}
Figura::Figura(int n)               // ����������� � �����������
{
    setQtySide(n);
}
Figura::~Figura()   // ����������, �� ������, ��� ��������� ���������� ������?!
{
    if (lenght) delete[] lenght;
    if (angle) delete[] angle;
}

void Figura::setQtySide(int n)
{
    if (n < 0) n = 0;
    qtySide = static_cast<unsigned int>(n);
    exepQtySide();

    lenght = new unsigned int[n](); // ����� � ���-�� "n"
    angle = new unsigned short[n](); // ���� � ���-�� "n"
}
unsigned int Figura::getQtySide() { return qtySide; }
// �� ���. �������� ������ ����� �����/���� = 0
unsigned int Figura::getLen(int num)
{
    if (num < 0 || num >= qtySide) return 0;
    else return lenght[num];
}
unsigned short Figura::getAng(int num)
{
    if (num < 0 || num >= qtySide) return 0;
    else return angle[num];
}

void Figura::exepQtySide()
{
    if (lenght) delete[] lenght;
    if (angle) delete[] angle;
    lenght = nullptr;
    angle = nullptr;
    if (getQtySide() <= 0) throw FiguraExeption("������� ������� ������ ��� ������");
}
