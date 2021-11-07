#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 4. \n";
    int a, b, c, s;
    cout << "Введите длину прямоугольника: ";
    cin >> a;
    cout << "Введите ширину прямоугольника: ";
    cin >> b;
    cout << "Введите длину стороны квадратов, располагаемых в прямоугольнике: ";
    cin >> c;
    div_t k1 = div(a, c);
    div_t k2 = div(b, c);
    s = a*b - c*c*k1.quot * k2.quot;
    cout << "Количество квадратов, поместившихся в прямоугольник, равно: " << k1.quot * k2.quot << "\n";
    cout << "Площадь незантой части прямоугольника равна: " << s << "\n";
}