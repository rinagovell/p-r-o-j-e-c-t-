#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 5. \n";
    int n, i;
    float a, b = 1, s = 1;
    cout << "Введите вещественное число A: ";
    cin >> a;
    cout << "Введите целое число (N > 0): ";
    cin >> n;
    for (i = 1; i <= n; i++){
        b *= -a;
        s += b;
    }
    cout << "Значение выражения 1 - A + A^2 - A^3 + . . . +(-) A^N равно: " << s << " \n";
}