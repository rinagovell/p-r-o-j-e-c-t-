#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 1. \n";
    double i, i1;
    cout << "Введите объем файла в байтах: ";
    cin >> i;
    div_t i2 = div(i, 1024);
    i1 = i/1024;
    if ((i1 - i2.quot) > 0){
        cout << "Объем файла в килобайтах равен: " << i2.quot + 1 << "\n";
    }
    else{
        cout << "Объем файла в килобайтах равен: " << i2.quot << "\n";
    }
}