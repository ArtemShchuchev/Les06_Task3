#pragma once
#include <iostream>

class FiguraExeption : public std::domain_error
{
private:
	const char* errStr;
public:
	FiguraExeption(const char*);
	const char* what() const override;
};
