#pragma once
#include "Triangle.h"

class TriRight : public Triangle    // ������������� �����������
{
public:
    TriRight(int, int, int, short, short, short);
    void exepAng(short a, short b, short c);
};
