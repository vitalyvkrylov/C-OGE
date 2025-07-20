#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    // Присваиваем переменной y значение 15
    int y = 15;

    // Проверяем остаток от деления y на 2
    if (y % 2 == 0) {
        // Если остаток равен нулю, значит число четное
        cout << "y четное" << endl;
    }
    else {
        // Иначе число нечетное
        cout << "y нечетное" << endl;
    }

    return 0;
}

