#pragma once
#include "Figura.h"

class Quad : public Figura
{
private:
protected:
public:
    Quad();
    void setLengh(int, int, int, int);
    void setAngle(short, short, short, short);
    virtual void exepLen(int a, int b, int c, int d);
    virtual void exepAng(short a, short b, short c, short d);
    void exepQtySide();
};
