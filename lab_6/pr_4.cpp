#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    double y, x;
    cout << "Введите значение x: ";
    cin >> x;
    y = 3*pow(x,6) - 6*pow(x,2) - 7;
    cout << "Значение y равно: " << y << "\n";
}