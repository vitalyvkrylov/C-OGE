#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    // Цикл от 1000 до 2 (включительно), с шагом -1
    for (int x = 1000; x > 1; --x) {
        // Проверяем логическое выражение: НЕ (x <= 15) И (x < 20)
        bool F = (!(x <= 15)) && (x < 20);

        if (F == true) {
            cout << "Наибольшее значение x: " << x << endl;
            break; // Прерываем цикл при первом подходящем значении
        }
    }

    return 0;
}




