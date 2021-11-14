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
    if ((c > b) and (b > a)){
        cout << "Неравенство A < B < C справедливо\n";
    }
    else{
        cout << "Неравенство A < B < C не справедливо\n";
    }
}