#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    double pi = 3.1415926535;
    double rad, grad;
    cout << "Введите значение угла в градусах: ";
    cin >> grad;
    cout << "Значение угла в радианах равно: " << grad*pi/180 << "\n";
    
}