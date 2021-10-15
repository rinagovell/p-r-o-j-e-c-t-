#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    int A, B, C;
    cout << "Введите значение переменной A: ";
    cin >> A;
    B = A*A;
    C = A*B;
    B = B*C;
    C = B*B;
    B = B*C;
    cout << "Значение A^8 равно: " << B << "\n";
}