#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 7. \n";
    int a, b, c;
    cout << "Введите сторону треугольника a: ";
    cin >> a;
    cout << "Введите сторону треугольника b: ";
    cin >> b;
    cout << "Введите сторону треугольника c: ";
    cin >> c;
    if (((a + b) > c) or ((a + c) > b) or ((c + b) > a)){
        cout << "Треугольник с такими сторонами существует \n";
    }
    else{
        cout << "Треугольник с такими сторонами не существует \n";
    }
}