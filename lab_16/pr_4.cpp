#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 4. \n";
    int a, b, n, x, arr[1000];
    cout << "Введите число N (размер массива): ";
    cin >> n;
    cout << "Введите значения массива A: ";
    for (x = 0; x < n; x++){
        cin >> arr[x];
    }
    a = 0;
    b = n - 1;
    while(a <= b){
        cout << arr[a];
        if (a == b){
            break;
        }
        cout << arr[b];
        a++;
        b--;
    }
}