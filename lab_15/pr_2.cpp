#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int SignX(float X)
{
    if(X < 0)
        return -1;
    
    else if(X > 0)
        return 1;
    
    else
        return 0;
}
int main()
{
    cout << "\n Задание 2. \n";
    float a, b;
    cout << "Введите число A: ";
    cin >> a;
    cout << "Введите число B: ";
    cin >> b;

    cout << "Sign(A) + Sign(B) = " << SignX(a) + SignX(b) << "\n" << endl;
}