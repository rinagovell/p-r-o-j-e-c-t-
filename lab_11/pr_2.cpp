#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 2. \n";
    int a, b, c;
    cout << "Введите значение целого числа A: ";
    cin >> a;
    cout << "Введите значение целого числа B: ";
    cin >> b;
    cout << "Введите значение целого числа C: ";
    cin >> c;
    if (a > b){
        if (b > c){
            cout << "Сумма наибольших двух чисел равна: " << a + b << "\n";
        }
        else{
            cout << "Сумма наибольших двух чисел равна: " << a + c << "\n";
        }
    }
    else if (b > a){
        if (a > c){
            cout << "Сумма наибольших двух чисел равна: " << a + b << "\n";
        }
        else{
            cout << "Сумма наибольших двух чисел равна: " << b + c << "\n";
        }
    }
    else if (c > a){
        if (a > b){
            cout << "Сумма наибольших двух чисел равна: " << a + c << "\n";
        }
        else{
            cout << "Сумма наибольших двух чисел равна: " << b + c << "\n";
        }
    }
}