#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    double pi = 3.1415926535;
    double rad, grad;
    cout << "Введите значение угла в радианах: ";
    cin >> rad;
    cout << "Значение угла в градусах равно: " << rad*180/pi << "\n";
    
}