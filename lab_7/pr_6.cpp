#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    double a1, b1, c1, a2, b2, c2, x, y;
    cout << "Введите коэффициент a1: ";
    cin >> a1;
    cout << "Введите коэффициент b1: ";
    cin >> b1;
    cout << "Введите коэффициент c1: ";
    cin >> c1;
    cout << "Введите коэффициент a2: ";
    cin >> a2;
    cout << "Введите коэффициент b2: ";
    cin >> b2;
    cout << "Введите коэффициент c2: ";
    cin >> c2;
    x = (c1*b2-c2*b1)/(a1*b2 - a2*b1);
    y = (a1*c2-a2*c1)/(a1*b2 - a2*b1);
    cout << "Ответ к системе уравнений: (" << x << ", " << y << ")\n";
    
    
}