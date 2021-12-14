#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

float FactN(float N)
{
    int x = 1;
    for (; N > 0; N -= 2) 
        x *= N;
    return x;
}
int main()
{
    cout << "\n Задание 5. \n";
    int i, N;
    for (i = 1; i <= 5; i++){
        cout << "Введите значение N: ";
        cin >> N;
        cout << "Факториал числа равен: " << FactN(N) << "\n" << endl;
    }
}