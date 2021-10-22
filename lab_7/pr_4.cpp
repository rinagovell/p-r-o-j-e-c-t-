#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    double v1, v2, s, t;
    cout << "Введите скорость первого автомобиля в км/ч: ";
    cin >> v1;
    cout << "Введите скорость второго автомобиля в км/ч: ";
    cin >> v2;
    cout << "Введите изначальное расстояние между автомобилями в км: ";
    cin >> s;
    cout << "Введите время в ч: ";
    cin >> t;
    double path = (v1 + v2)*t;
    double dist = s + path;
    cout << "Расстояние между автомобилями через " << t << " часов равно: " << dist << "\n";
    
}