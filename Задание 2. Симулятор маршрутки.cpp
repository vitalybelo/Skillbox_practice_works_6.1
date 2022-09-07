#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int ticketFee = 20;     // Цена билета
    int numPassengers = 0;  // Число пассажиров в автобусе после высадки и посадки
    int routeProfit = 0;    // Наш итоговый доход и накопительный
    const int numStops = 4; // количество остановок

    string busStops [numStops] =
    {   "Парк имени отца Звездония",
        "Проспект доктора Пилюлькина",
        "Станция метро имени Карновалова",
        "Площадь творений Гениалисимуса"
    };
    //int passInBuss[numStops] = { 4,3,6,2 };
    //int passOutBuss[numStops] = { 0,2,4,3 };
    int passInBuss;
    int passOutBuss;

    for (int i = 0; i < numStops; i++)
    {
        cout << "Внимание остановка: \'" << busStops[i] << "\'\n";
        //cout << "Вошло пассажиров :: " << passInBuss[i] << endl;
        //cout << "Вышло пассажиров :: " << passOutBuss[i] << endl;
        cout << "Сколько пассажиров вошло ? :: "; cin >> passInBuss;
        cout << "Сколько пассажиров вышло ? :: "; cin >> passOutBuss;

        //numPassengers += passInBuss[i] - passOutBuss[i];
        //routeProfit += passInBuss[i] * ticketFee;
        numPassengers += passInBuss - passOutBuss;
        routeProfit += passInBuss * ticketFee;

        cout << "Пассажиров в автобусе :: " << numPassengers << endl;
        cout << "-------------------------------\n\n";
    }

    int driverReward = routeProfit / 4;
    int fuelCost = routeProfit / 5;
    int taxCost = routeProfit / 5;
    int fixCost = routeProfit / 5;
    int busCleanProfit = routeProfit - driverReward - fuelCost - taxCost - fixCost;

    cout << endl;
    cout << "Получено денег от пассажиров = " << routeProfit << " рублей. \n";
    cout << "Вознаграждение водителю = " << driverReward << endl;
    cout << "Потрачено на топливо = " << fuelCost << endl;
    cout << "Придется также оплатить налоги = " << taxCost << endl;
    cout << "Страховые накопления на ремонт = " << fixCost << endl;
    cout << "ДОХОД АВТОБУСА СОСТАВЛЯЕТ = " << busCleanProfit;



    cout << "\n\n\n";
    return 0;
}
