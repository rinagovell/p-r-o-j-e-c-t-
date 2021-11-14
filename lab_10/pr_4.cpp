#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 4. \n";
    int a;
    cout << "Введите значение трехзначного целого положительного числа: ";
    cin >> a;
    if (a < 0){
        cout << "Неправильно введено число!\n";
    }
    else{
        div_t b = div(a, 10);
        div_t c = div(b.quot, 10);
        if ((b.rem < c.rem) and (c.rem < c.quot))
        {
            cout << "Число образует убывающую последовательность \n ";
        }
        else if ((b.rem > c.rem) and (c.rem > c.quot))
        {
            cout << "Число образует возрастающую последовательность \n ";
        }
        else
        {
            cout << "Число не образует ни возрастающую, ни убывающую последовательность \n ";
        }
    }
}