#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 5. \n";
    int a;
    cout << "Введите значение четырехзначного целого положительного числа: ";
    cin >> a;
    if (a < 0){
        cout << "Неправильно введено число!\n";
    }
    else{
        div_t b = div(a, 10);
        div_t c = div(b.quot, 10);
        div_t d = div(c.quot, 10);
        if ((b.rem == d.quot) and (c.rem == d.rem))
        {
            cout << "Число читается одинаково справа налево и слева направо \n ";
        }
        else
        {
            cout << "Число не читается одинаково справа налево и слева направо \n ";
        }
    }
}