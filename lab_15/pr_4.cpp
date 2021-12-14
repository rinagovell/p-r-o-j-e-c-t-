#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int Quarter(int x, int y)
{
    if((x > 0) && (y > 0))
        return 1;
    else if((x < 0) && (y > 0))
        return 2;
    else if((x < 0) && (y < 0))
        return 3;
    else
        return 4;
}
int main()
{
    cout << "\n Задание 4. \n";
    int i;
    for (i = 1; i <= 3; i++){
        float x, y;
        cout << "Введите координату x точки (не равную 0): ";
        cin >> x;
        cout << "Введите координату y точки (не равную 0): ";
        cin >> y;
        cout << "Точка лежит в " << Quarter(x, y) << " четверти \n" << endl;
    }
}