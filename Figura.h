#pragma once
#include "FiguraExeption.h"

class Figura
{
private:
    unsigned int qtySide;       // ����� ������ ������

protected:  // ������ � ���� ����� ����� ���������� �� ����������� �������
    unsigned int* lenght;
    unsigned short* angle;

public:
    Figura();
    Figura(int);
    ~Figura();

    void setQtySide(int);
    unsigned int getQtySide();
    unsigned int getLen(int);
    unsigned short getAng(int);
    virtual void exepQtySide();
};
