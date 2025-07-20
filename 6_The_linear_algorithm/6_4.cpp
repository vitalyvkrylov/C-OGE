#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    for (int b = 2; b < 100; b++) {  // Перебираем возможные значения b
        int number = 63;             // Начальное число
        string sequence = "12111";   // Последовательность команд

        bool valid = true;           // Флаг корректности выполнения

        for (char command : sequence) {
            if (command == '1') {
                number += 1;         // Прибавляем 1
            } else if (command == '2') {
                if (number % b == 0) {
                    number /= b;     // Делим на b
                } else {
                    valid = false;   // Деление невозможно
                    break;
                }
            }
        }

        if (valid && number == 11) {
            cout << "Значение b: " << b << endl;  // Выводим найденное значение
            break;  // Прерываем цикл, так как решение найдено
        }
    }

    return 0;
}

