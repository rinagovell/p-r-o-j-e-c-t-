#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    int A, B;
    cout << "Введите значение переменной A: ";
    cin >> A;
    B = A*A;
    B = B*B;
    B = B*B;
    cout << "Значение A^8 равно: " << B << "\n";
}