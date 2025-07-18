#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    int y = 5;
    int z = 12;

    // Решаем уравнение: x = z - y
    int x = z - y;

    std::cout << "Неизвестное число x: " << x << std::endl;
    return 0;
}

