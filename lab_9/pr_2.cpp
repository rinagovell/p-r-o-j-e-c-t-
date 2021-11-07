#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 2. \n";
    int k;
    cout << "Введите день года (от 1 до 365): ";
    cin >> k;
    if (k < 1 or k > 365){
        cout << "Ошибка! Неверно введен день. ";
    }
    else{
        while (k > 7)
        {
            k -= 7;
        }
        cout << "Номер дня недели: " << k << "\n";
    }
}