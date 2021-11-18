#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 4. \n";
    int x, y;
    cout << "Введите координату x точки: ";
    cin >> x;
    cout << "Введите координату y точки: ";
    cin >> y;
    if ((x > 0) and (y > 0)){
        cout << "Точка лежит в 1-ой четверти.\n";
    }
    else if ((x < 0) and (y > 0)){
        cout << "Точка лежит во 2-ой четверти.\n";
    }
    else if ((x < 0) and (y < 0)){
        cout << "Точка лежит в 3-ой четверти.\n";
    }
    else if ((x > 0) and (y > 0)){
        cout << "Точка лежит в 4-ой четверти.\n";
    }
    else{
        cout << "Ошибка! Точка не лежит на осях OX и OY.\n";
    }
}