#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 5. \n";
    int a;
    cout << "Введите трехзначное число: ";
    cin >> a;
    div_t k = div(a, 100);
    cout << "Новое число равно : " << k.rem * 10 + k.quot << "\n";
}