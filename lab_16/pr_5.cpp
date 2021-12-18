#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 5. \n";
    int n, x, i, arr[1000];
    cout << "Введите число N (размер массива): ";
    cin >> n;
    cout << "Введите значения массива A: ";
    for (x = 0; x < n; x++){
        cin >> arr[x];
    }
    for (i = 0; i < n; i += 2){
        cout << arr[i] << " ";
    }  
    cout << endl;
    for (i = n - (n % 2) - 1; i >= 1; i -= 2){
        cout << arr[i] << " ";
    }
}