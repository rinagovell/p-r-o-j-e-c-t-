#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 1. \n";
    int i, n, arr[1000];
    cout << "Введите число N: ";
    cin >> n;
    for (i = 0; i < n; i++){
        arr[i] = 1 + i * 2;
        cout << "array[" << i << "] = " << arr[i] << "\n" << endl;
    }
}