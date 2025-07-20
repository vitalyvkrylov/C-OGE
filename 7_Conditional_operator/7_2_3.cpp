#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    // Присваиваем переменной z значение 20
    int z = 20;

    // Проверяем первое условие: z меньше 10
    if (z < 10) {
        cout << "z меньше 10" << endl;
    }
    // Проверяем второе условие: z от 10 до 19 включительно
    else if (z < 20) {
        cout << "z между 10 и 19" << endl;
    }
    // Третье условие: z больше или равно 20
    else {
        cout << "z больше или равно 20" << endl;
    }

    return 0;
}
