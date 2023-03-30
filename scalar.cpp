//Управляющая программа
#include "application.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Вычисление скалярного произведения" << endl;
    Application app;
    int ret = appRun(app);
    return ret;
}
