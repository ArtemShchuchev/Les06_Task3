#pragma once
#include <iostream> // консоль - cout
#include "Figura.h"

struct MyFigData
{
	//std::string name;	// почему НЕ работает co string???????????

	const char* name;					// имя
	int lenA, lenB, lenC, lenD = 0;		// длины сторон
	short angA, angB, angC, angD = 0;	// углы
};

void print_info(const MyFigData&);
