#include "Quad.h"

// конструктор по умолчанию, запускает конструктор родителя с параметрами
Quad::Quad() : Figura(4) { ; }

void Quad::setLengh(int a, int b, int c, int d)
{
    exepLen(a, b, c, d);
}

void Quad::setAngle(short a, short b, short c, short d)
{
    if (a + b + c + d != 360)
    {
        throw FiguraExeption("Сумма углов не равна 360");
    }
    exepAng(a, b, c, d);
}

void Quad::exepLen(int a, int b, int c, int d) { return; }

void Quad::exepAng(short a, short b, short c, short d) { return; }

void Quad::exepQtySide()
{
    if (getQtySide() != 4) throw FiguraExeption("Число углов не равно 4");
}
