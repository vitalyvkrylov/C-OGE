#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    // Перебираем возможные значения b от 2 до 99
    for (int b = 2; b < 100; ++b) {
        int number = 6;              // Начальное число
        string sequence = "11211";   // Последовательность команд

        // Выполнение команд из последовательности
        for (char command : sequence) {
            if (command == '1') {
                number += 1;         // Команда "1" — увеличить на 1
            } else if (command == '2') {
                number *= b;         // Команда "2" — умножить на b
            }
        }

        // Проверка результата
        if (number == 82) {
            cout << "Значение b: " << b << endl;
            break;  // Прерываем цикл, решение найдено
        }
    }

    return 0;
}

