#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 5. \n";
    int a, b, n;
    cout << "Введите целое положительное число A: ";
    cin >> a;
    cout << "Введите целое положительное число B: ";
    cin >> b;
    while ((a != 0) & (b != 0)){
        if (a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    cout << "Наибольший общий делитель чисел равен: " << a + b << "\n";
}