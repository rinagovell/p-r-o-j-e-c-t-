#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    int A, B, C;
    cout << "Введите значение переменной A: ";
    cin >> A;
    cout << "Введите значение переменной B: ";
    cin >> B;
    cout << "Введите значение переменной C: ";
    cin >> C;
    int D = B;
    B = A;
    A = C;
    C = D;
    cout << "Значение A стало равно: " << A << "\n";
    cout << "Значение B стало равно: " << B << "\n";
    cout << "Значение C стало равно: " << C << "\n";
}