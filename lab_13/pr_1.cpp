#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 1. \n";
    float x, y;
    cout << "Введите цену 1 кг конфет: ";
    cin >> x;
    for (y = 0.1; y < 1.1; y += 0.1){
        cout << y << "кг конфет стоят: " << x * y << " рублей \n";
    }
}