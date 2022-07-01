#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int  min, max,start,end;
    const size_t month = 12;
    int profit[month] = {};
    for (int i = 0; i < month; i++) {
        cout << "Введите прибыль за " << i+1 << " месяц \n";
        cin >> profit[i];
    }
    cout << "Введите месяц с которого начнётся расчёт -> ";
    cin >> start;
    cout << "Введите месяц до которого будет вестись расчёт -> ";
    cin >> end;
    max = start-1;
    min = start-1;
    for (int i = start; i < end-1; i++) {
        if (profit[i] > profit[max]) {
            max = i;
        }
        if (profit[i] < profit[min]) {
            min = i;
        }
        
    }
    cout << "Максимальная прибыль в " << max+1 << " месяце. \n";
    cout << "Минимальная прибыль в " << min+1 << " месяце. \n";

}

