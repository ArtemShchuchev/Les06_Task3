#include "myFunc.h"

// �������, ��������� ������ � ������� �����
// ������� ���������� �� �������
void print_info(const MyFigData& d)
{
    using namespace std;

    cout << d.name << "(�������"
        << " " << d.lenA
        << ", " << d.lenB
        << ", " << d.lenC;
    if (d.lenD) cout << ", " << d.lenD;
    cout << "; ����"
        << " " << d.angA
        << ", " << d.angB
        << ", " << d.angC;
    if (d.angD) cout << ", " << d.angD;
    cout << ") ";
}
