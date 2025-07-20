#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    // Присваиваем переменной x значение 10
    int x = 10;

    // Проверяем условие: если x больше 5, то выполняем блок кода внутри if
    if (x > 5) {
        // Выводим сообщение "x больше 5"
        cout << "x больше 5" << endl;
    }

    return 0;
}

