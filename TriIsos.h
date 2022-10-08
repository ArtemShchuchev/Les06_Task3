#pragma once
#include "Triangle.h"

//равнобедренный треугольник(стороны a и c равны, углы A и C равны);
class TriIsos : public Triangle
{
public:
    TriIsos(int, int, int, short, short, short);
    
    void exepLen(int a, int b, int c);
    void exepAng(short a, short b, short c);
};
