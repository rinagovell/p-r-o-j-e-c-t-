#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 6. \n";
    int n, k, f1 = 1, f2 = 1, f = 0;
    cout << "Введите целое число N (N > 1): ";
    cin >> n;
    while (f < n + 1){
        k++;
        f = f1 + f2;
        f2 = f1;
        f1 = f;
    }
    cout << "Порядковый номер числа Фибоначчи: " << k << "\n";
}