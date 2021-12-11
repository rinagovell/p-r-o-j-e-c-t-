#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 4. \n";
    int k = 0;
    float p, s = 1000;
    cout << "Введите количество процентов по вкладу  P (0 < P < 25): ";
    cin >> p;
    while (s <= 1100){
        s = s * (1 + 0.01 * p);
        k++;
    }
    cout << "Количество месяцев, через которое размер вклада превысит 1100 руб., равно: " << k << "\n";
    cout << "Итоговый размер вклада равен: " << s << "\n";
}