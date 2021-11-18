#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 1. \n";
    int a, b, c;
    cout << "Введите значение целого числа A: ";
    cin >> a;
    cout << "Введите значение целого числа B: ";
    cin >> b;
    if (a == b){
        cout << "Новые значения переменных равны: A =  " << 0 << ", B = " << 0 << "\n";
    }
    else{
        if (a > b){
            c = a;
        }
        else{
            c = b;
        }
        cout << "Новые значения переменных равны: A =  " << c << ", B = " << c << "\n";
    }
}