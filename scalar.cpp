//����������� ���������
#include "application.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "���������� ���������� ������������" << endl;
    Application app;
    int ret = appRun(app);
    return ret;
}
