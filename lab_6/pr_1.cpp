#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    int A, B;
    cout << "Введите значение переменной A: ";
    cin >> A;
    cout << "Введите значение переменной B: ";
    cin >> B;
    int C = B;
    B = A;
    A = C;
    cout << "Значение A стало равно: " << A << "\n";
    cout << "Значение B стало равно: " << B << "\n";
}