// Задание 3. Обмен местами.cpp
#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");

    int var1 = 10;
    int var2 = -10;

    cout << "Значение первое переменной = " << var1 << endl;
    cout << "Значение второй переменной = " << var2 << endl;
    cout << endl;
    cout << "А сейчас мы их по условию задачи (незаметно) поменяем !!\n\n";


    int* exchangeBox = new int (var1);
    var1 = var2;
    var2 = *exchangeBox;
    delete exchangeBox;

    cout << "Значение первое переменной = " << var1 << endl;
    cout << "Значение второй переменной = " << var2 << endl;
    cout << endl;
    cout << "Oppps La La !!\n\n";

    return 0;
}

