#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "\n Задание 3. \n";
    int a, b, i, n, sum, arr[1000];
    cout << "Введите число N (N > 2): ";
    cin >> n;
    cout << "Введите число A: ";
    cin >> arr[0];
    cout << "Введите число B: ";
    cin >> arr[1];
    sum = arr[0] + arr[1];
    for (i = 2; i < n; i++){
        arr[i] = sum;
        sum += arr[i];
    }
    for (i = 0; i < n; i++){
        cout << "array[" << i << "] = " << arr[i] << "\n" << endl;
    }
}