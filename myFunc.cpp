#include "myFunc.h"

// функция, принимает строку и базовый класс
// выводит информацию на консоль
void print_info(const MyFigData& d)
{
    using namespace std;

    cout << d.name << "(стороны"
        << " " << d.lenA
        << ", " << d.lenB
        << ", " << d.lenC;
    if (d.lenD) cout << ", " << d.lenD;
    cout << "; углы"
        << " " << d.angA
        << ", " << d.angB
        << ", " << d.angC;
    if (d.angD) cout << ", " << d.angD;
    cout << ") ";
}
