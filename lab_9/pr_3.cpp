#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 3. \n";
    int k, n, d;
    cout << "Введите день года (от 1 до 365): ";
    cin >> k;
    cout << "Введите номер дня недели для 1 января данного года (от 1 до 7): ";
    cin >> n;
    if (k < 1 or k > 365 or n < 1 or n > 7){
        cout << "Ошибка! Неверно введен день года или номер дня недели. ";
    }
    else{
        d = (k%7) + n-1;
        cout << "Номер дня недели: " << d << "\n";
    }
}