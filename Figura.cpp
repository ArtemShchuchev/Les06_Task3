#include "Figura.h"

Figura::Figura()                    // конструктор по умолчанию
{
    qtySide = 0;
    lenght = nullptr;
    angle = nullptr;
}
Figura::Figura(int n)               // конструктор с параметрами
{
    setQtySide(n);
}
Figura::~Figura()   // деструктор, не уверен, что правильно освобождаю память?!
{
    if (lenght) delete[] lenght;
    if (angle) delete[] angle;
}

void Figura::setQtySide(int n)
{
    if (n < 0) n = 0;
    qtySide = static_cast<unsigned int>(n);
    exepQtySide();

    lenght = new unsigned int[n](); // длины в кол-ве "n"
    angle = new unsigned short[n](); // углы в кол-ве "n"
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

void Figura::exepQtySide()
{
    if (lenght) delete[] lenght;
    if (angle) delete[] angle;
    lenght = nullptr;
    angle = nullptr;
    if (getQtySide() <= 0) throw FiguraExeption("Попытка создать фигуру без сторон");
}
