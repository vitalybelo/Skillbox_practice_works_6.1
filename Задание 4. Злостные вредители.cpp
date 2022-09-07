// Задание 4. Злостные вредители.cpp
//

#include <iostream>
using namespace std;

// читает целое число и добивается чтобы ввод был только 
// внутри определенных вызовом пределов. Если введено число НОЛЬ
// везвращаемое значение = заданному умолчанию (третий аргумент).
//
int getNumber (int limilLow, int limitHigh, int defaulValue)
{
    int getNum;
    do
    {   cin >> getNum;
        if (getNum == 0) break;
        if (getNum >= limilLow && getNum <= limitHigh) return getNum;
        else {
            cout << "\tВведено некорректное число, попробуйте еще раз: ";
        }
    } while (true);

    cout << "\tБудут использованы данные из wikipedia ! = " << defaulValue << endl;;
    return defaulValue;

}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int caneHeight = 100;   // см. Высота тростника (стартовая)
    int caneGrown = 50;     // см. Метаболический рост тросника стимулированный 
    int caneLoses = 20;     // см .Потери (кстати гусеницы не едят генно модифицированные культуры :)
    
    cout << "\n\tСегодня мы посадили тросник, его высота = " << caneHeight << " cm.\n\n";

    cout << "\tВы хотите задать темпы роста cm. ? (ноль если нет): ";
    // вряд ли тростник вырастет за день на величину стартового роста
    caneGrown = getNumber (0, caneHeight, caneGrown);

    cout << "\tВы хотите задать темпы уничтожения cm. ? (ноль если нет): ";
    // давайте позитивно взглянем на задачу и не дадим гусеницам съесть за ночь весь прирост
    caneLoses = getNumber(0, caneGrown, caneLoses);

    cout << endl;
    cout << "\tНаш тросник начинает рости !!\n\n";

    int caneProgress = caneHeight;
    int caneRealGrown = caneGrown - caneLoses;

    cout << "\tПервые сутки после посадки, рост = " << (caneProgress += caneRealGrown) << " cm.\n";
    cout << "\tВторые сутки после посадки, рост = " << (caneProgress += caneRealGrown) << " cm.\n";
    cout << "\tТретьи сутки (середина дня), рост = " << (caneProgress += caneGrown/2) << " cm.\n";
    cout << endl;

    // 2-ая часть задания, Вычисляем одной формулой
    //
    caneHeight += caneRealGrown + caneRealGrown + caneGrown/2;
    cout << "\tК середине третьего дня, тросник мужественно вырос до = " << caneHeight << " cm.";



    cout << "\n\n\n";
    return 0;
}

