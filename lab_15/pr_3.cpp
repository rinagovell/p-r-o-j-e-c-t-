#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

float RingS(float R1, float R2)
{
    return 3.14 * (R1 * R1 - R2 * R2);
}
int main()
{
    cout << "\n Задание 3. \n";
    int i;
    for (i = 1; i <= 3; i++){
        float R1, R2;
        cout << "Введите радиус первого (большего) круга R1: ";
        cin >> R1;
        cout << "Введите радиус второго (меньшего) круга R2: ";
        cin >> R2;
        cout << "Площадь кольца равна: " << RingS(R1, R2) << "\n" << endl;
    }
}