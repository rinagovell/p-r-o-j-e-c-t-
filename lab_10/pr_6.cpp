#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 6. \n";
    int a, b, c;
    cout << "Введите сторону треугольника a: ";
    cin >> a;
    cout << "Введите сторону треугольника b: ";
    cin >> b;
    cout << "Введите сторону треугольника c: ";
    cin >> c;
    if ((a*a + b*b == c*c) or (b*b + c*c == a*a) or (a*a + c*c == b*b)){
        cout << "Треугольник является прямоугольным \n";
    }
    else{
        cout << "Треугольник не является прямоугольным \n";
    }
}