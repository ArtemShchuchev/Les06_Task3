#pragma once
#include "Triangle.h"

//�������������� �����������(������� a � c �����, ���� A � C �����);
class TriIsos : public Triangle
{
public:
    TriIsos(int, int, int, short, short, short);
    
    void exepLen(int a, int b, int c);
    void exepAng(short a, short b, short c);
};
