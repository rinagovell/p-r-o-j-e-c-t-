#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 2. \n";
    int a, b, n;
    cout << "Введите положительное число A (длина большого отрезка, A > B): ";
    cin >> a;
    cout << "Введите положительное число B (длина меньших отрезков): ";
    cin >> b;
    while (a > b){
        a -= b;
    }
    cout << "Незанятая часть отрезка A равна: " << a << "\n";
}