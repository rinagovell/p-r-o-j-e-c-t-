#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

    int x, y, a;
    cout << "Введите вес конфет в кг: ";
    cin >> x;
    cout << "Введите стоимость этого веса конфет в рублях: ";
    cin >> a;
    cout << "Введите искомый вес конфет в кг: ";
    cin >> y;
    double s1 = a/x;
    double sy = s1*y;
    cout << "1 кг конфет стоит: " << s1 << "р.\n";
    cout << y << " кг конфет стоит: " << sy << "р.\n";
    
}