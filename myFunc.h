#pragma once
#include <iostream> // ������� - cout
#include "Figura.h"

struct MyFigData
{
	//std::string name;	// ������ �� �������� co string???????????

	const char* name;					// ���
	int lenA, lenB, lenC, lenD = 0;		// ����� ������
	short angA, angB, angC, angD = 0;	// ����
};

void print_info(const MyFigData&);
