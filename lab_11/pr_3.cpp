#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 3. \n";
    int a, b, c;
    cout << "Введите координату точки A: ";
    cin >> a;
    cout << "Введите координату точки B: ";
    cin >> b;
    cout << "Введите координату точки C: ";
    cin >> c;
    if (abs(a - b) < abs(a - c)){
        cout << "Точка B ближе к A. Расстояние от A до B равно: " << abs(a - b) << "\n";
    }
    else{
        cout << "Точка C ближе к A. Расстояние от A до C равно: " << abs(a - c) << "\n";
    }
}