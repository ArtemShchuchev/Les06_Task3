#pragma once
#include "Triangle.h"

class TriEquil : public Triangle    // равносторонний треугольник
{
public:
    TriEquil(int, int, int, short, short, short);

    void exepLen(int a, int b, int c);
    void exepAng(short a, short b, short c);
};
