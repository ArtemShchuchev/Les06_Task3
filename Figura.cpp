#include "Figura.h"

Figura::Figura()                    // конструктор по умолчанию
{
    setQtySide(0);
}
Figura::Figura(int n)               // конструктор с параметрами
{
    setQtySide(n);
}
Figura::~Figura()   // деструктор, не уверен, что правильно освобождаю память?!
{
    delete[] lenght;
    delete[] angle;
}

void Figura::setQtySide(int n)
{
    if (n <= 0)
    {
        throw FiguraExeption("Попытка создать фигуру без сторон");
    }
    else
    {
        qtySide = static_cast<unsigned int>(n);
        lenght = new unsigned int[n](); // длины в кол-ве "n"
        angle = new unsigned short[n](); // углы в кол-ве "n"
    }
    exepQtySide();
}
unsigned int Figura::getQtySide() { return qtySide; }
// не сущ. стророна фигуры имеет длину/угол = 0
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

void Figura::exepQtySide() { return; }
