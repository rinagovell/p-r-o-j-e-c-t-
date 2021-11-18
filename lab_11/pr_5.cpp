#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 5. \n";
    int a, b, c;
    cout << "Введите значение целого числа A: ";
    cin >> a;
    if (a == 0){
        cout << "A - нулевое число\n";
    }
    else if (a > 0){
        if (a%2 == 0){
            cout << "A - положительное четное число\n";
        }
        else{
            cout << "A - положительное нечетное число\n";
        }
    }  
    else{
        if (a%2 == 0){
            cout << "A - отрицательное четное число\n";
        }
        else{
            cout << "A - отрицательное нечетное число\n";
        }
    }
}