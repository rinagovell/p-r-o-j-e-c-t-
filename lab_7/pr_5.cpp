#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    double a, b;
    cout << "Введите коэффициент a (не равный 0): ";
    cin >> a;
    if (a == 0)
    {
        cout << "НЕ РАВНЫЙ НУЛЮ D:< \n";
    }
    else
    {
        cout << "Введите коэффициент b (не равный 0): ";
        cin >> b;
        cout << "Ответом к уравнению a*x + b = 0 является: " << -b/a << "\n";
    }
    
}