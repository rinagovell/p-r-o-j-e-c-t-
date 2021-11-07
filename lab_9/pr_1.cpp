#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 1. \n";
    int n;
    cout << "Введите количество прошедших секунд: ";
    cin >> n;
    div_t res = div(n, 60);
    cout << "С начала последней минуты прошло " << res.rem << " сек \n";
}