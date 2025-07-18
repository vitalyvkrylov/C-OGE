#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    // Перебираем значения x от 0 до 999
    for (int x = 0; x < 1000; ++x) {
        // Проверяем логическое выражение
        bool F = (x > 3) || !(x > 2);  // (x > 3) ИЛИ НЕ (x > 2)

        // Если выражение ложно — выводим x и завершаем цикл
        if (F == false) {
            cout << "Наименьшее значение x: " << x << endl;
            break;
        }
    }

    return 0;
}





