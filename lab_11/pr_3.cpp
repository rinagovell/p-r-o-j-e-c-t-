#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 3. \n";
    int ax, ay, bx, by, cx, cy;
    float ab, ac;
    cout << "Введите координаты точки A на плоскости: \n";
    cin >> ax;
    cin >> ay;
    cout << "Введите координаты точки B на плоскости: \n";
    cin >> bx;
    cin >> by;
    cout << "Введите координаты точки C на плоскости: \n";
    cin >> cx;
    cin >> cy;
    ab = abs(pow((bx - ax), 2) + pow((by - ay), 2));
    ac = abs(pow((cx - ax), 2) + pow((cy - ay), 2));
    if (ab < ac){
        cout << "Точка B ближе к A. Расстояние от A до B равно: " << ab << "\n";
    }
    else if (ac < ab){
        cout << "Точка C ближе к A. Расстояние от A до C равно: " << ac << "\n";
    }
    else{
        cout << "Точки B и C равноудалены от точки A \n";
    }
}