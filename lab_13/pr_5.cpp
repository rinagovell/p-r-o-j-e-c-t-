#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 5. \n";
    int n, i;
    float a, s = 0;
    cout << "Введите вещественное число A: ";
    cin >> a;
    cout << "Введите целое число (N > 0): ";
    cin >> n;
    for (i = 0; i < n + 1; i++){
        s = s * -1;
        s = s + pow(a,i);
    }
    cout << "Значение выражения 1 - A + A^2 - A^3 + . . . +(-) A^N равно: " << s << " \n";
}