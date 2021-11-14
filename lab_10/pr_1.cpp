#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 1. \n";
    int a, b;
    cout << "Введите значение целого числа A: ";
    cin >> a;
    cout << "Введите значение целого числа B: ";
    cin >> b;
    if ((a > 2) and (b <= 3)){
        cout << "Неравенство A > 2 and B <= 3 справедливо\n";
    }
    else{
        cout << "Неравенство A > 2 and B <= 3 не справедливо\n";
    }
}