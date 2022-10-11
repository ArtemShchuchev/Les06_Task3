#include "Quad.h"

// конструктор по умолчанию, запускает конструктор родителя с параметрами
Quad::Quad() : Figura(4) { ; }

void Quad::setLengh(int a, int b, int c, int d)
{
    exepLen(a, b, c, d);
    lenght[0] = a;
    lenght[1] = b;
    lenght[2] = c;
    lenght[3] = d;
}

void Quad::setAngle(short a, short b, short c, short d)
{
    if (a + b + c + d != 360)
    {
        throw FiguraExeption("Сумма углов не равна 360");
    }
    exepAng(a, b, c, d);
    angle[0] = a;
    angle[1] = b;
    angle[2] = c;
    angle[3] = d;
}

void Quad::exepLen(int a, int b, int c, int d) { return; }

void Quad::exepAng(short a, short b, short c, short d) { return; }

void Quad::exepQtySide()
{
    if (getQtySide() != 4) throw FiguraExeption("Число углов не равно 4");
}
