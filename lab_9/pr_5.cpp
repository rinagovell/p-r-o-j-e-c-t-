#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "\n Задание 5. \n";
    int y;
    cout << "Введите год: ";
    cin >> y;
    div_t g = div(y, 100);
    if (g.rem > 0){
        cout << "Номер столетия: " << g.quot + 1 << "\n";
    }
    else{
        cout << "Номер столетия: " << g.quot << "\n";
    }
}