#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 4. \n";
    int a;
    cout << "Введите двузначное число: ";
    cin >> a;
    div_t k = div(a, 10);
    cout << "Новое число равно : " << k.rem * 10 + k.quot << "\n";
}