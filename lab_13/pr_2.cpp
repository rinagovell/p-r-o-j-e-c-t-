#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 2. \n";
    int n, i = 1;
    float y = 1, x = 1;
    cout << "Введите количество сомножителей (N > 0): ";
    cin >> n;
    while (i < n + 1){
        y = y * (x + 0.1);
        x += 0.1;
        i += 1;
    }
    cout << "Произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей) равно: " << y << " \n";
}