#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 3. \n";
    int n, i, y = 0;
    cout << "Введите целое число (N > 0): ";
    cin >> n;
    for (i = 1; i <= (2 * (n - 1)) + 1; i += 2){
        y += i;
        cout << "Квадрат числа равен: " << y << " \n";
    }
}