#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 2. \n";
    int a, d, i, n, arr[1000];
    cout << "Введите число N (N > 1): ";
    cin >> n;
    cout << "Введите первый член геометрической прогрессии A: ";
    cin >> a;
    cout << "Введите знаменатель геометрической прогрессии D: ";
    cin >> d;
    for (i = 0; i < n; i++){
        arr[i] = a * pow(d, i);
        cout << "array[" << i << "] = " << arr[i] << "\n" << endl;
    }
}