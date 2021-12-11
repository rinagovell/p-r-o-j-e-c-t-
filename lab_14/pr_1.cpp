#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 1. \n";
    int a, b, i, n;
    cout << "Введите положительное число A (A < B): ";
    cin >> a;
    cout << "Введите положительное число B: ";
    cin >> b;
    for (i = a; i < b + 1; i++){
        for (n = 1; n < i + 1; n++){
            cout << i;
        }
        cout << " ";
    }
}