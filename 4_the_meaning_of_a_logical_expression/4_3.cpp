#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    // Перебираем значения x от 0 до 999
    for (int x = 0; x < 1000; ++x) {
        // Проверка логического выражения
        bool F = (!(x < 100)) && (!(x % 2 == 1));  // НЕ (x < 100) И НЕ (x нечетное)

        if (F == true) {
            cout << "Наименьшее значение x: " << x << endl;
            break;  // Прерываем цикл после первого подходящего значения
        }
    }

    return 0;
}


