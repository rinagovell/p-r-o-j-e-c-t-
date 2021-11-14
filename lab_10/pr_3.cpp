#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 3. \n";
    int a;
    cout << "Введите значение целого положительного числа: ";
    cin >> a;
    if (a < 0){
        cout << "Неправильно введено число!\n";
    }
    else{
        if ((a%2 == 0) and ((a/100) < 1)){
        cout << "Высказывание «данное число является четным двузначным» верное \n ";
        }
        else{
        cout << "Высказывание «данное число является четным двузначным» неверное \n ";
        }
    }
}