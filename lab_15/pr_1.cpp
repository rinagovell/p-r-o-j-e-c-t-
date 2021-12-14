#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void PowerA3(float a, float *b){
    *b = a * a * a;
}
int main(void){
    cout << "\n Задание 1. \n";
    int i;
    for (i = 1; i <= 5; i++){
        float a, b;
        cout << "Введите число A: ";
        cin >> a;
        PowerA3(a, &b);
        cout << "B: " << b << "\n" << endl;
    }
}