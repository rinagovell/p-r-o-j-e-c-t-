#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 3. \n";
    int n, k = 0, s = 0;
    cout << "Введите целое число N (N > 1): ";
    cin >> n;
    while (s < n){
        k++;
        s += k;
    }
    cout << "Наименьшее целое число K равно: " << k << "\n";
    cout << "Сумма равна: " << s << "\n";
}