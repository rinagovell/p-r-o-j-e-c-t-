#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 2. \n";
    int a, b;
    cout << "Введите длину отрезка A: ";
    cin >> a;
    cout << "Введите длину отрезка B (меньше, чем A): ";
    cin >> b;
    if (b > a){
        cout << "Ошибка! Длина не соответствует требованию A > B! ";
    }
    else{
        div_t k = div(a, b);
        cout << "Максимальное количество отрезков B, поместившихся в отрезок A, равно: " << k.quot << "\n";
    }
}