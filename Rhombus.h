#pragma once
#include "Quad.h"

class Rhombus : public Quad    // ромб
{
public:
    Rhombus(int, int, int, int, short, short, short, short);
    void exepLen(int a, int b, int c, int d);
    void exepAng(short a, short b, short c, short d);
};
