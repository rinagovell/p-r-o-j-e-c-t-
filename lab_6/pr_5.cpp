#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    double y, x;
    cout << "Введите значение x: ";
    cin >> x;
    y = 4*pow((x-3),6) - 7*pow((x-3),3) + 2;
    cout << "Значение y равно: " << y << "\n";
}