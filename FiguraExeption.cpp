#include "FiguraExeption.h"

FiguraExeption::FiguraExeption(const char* s) : std::domain_error(s) { errStr = s; }

const char* FiguraExeption::what() const { return errStr; }
