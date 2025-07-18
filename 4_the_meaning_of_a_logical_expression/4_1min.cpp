#include <iostream>
#include <algorithm>  // для std::min
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    int a = 5;
    int b = 10;
    int c = 15;

    // Используем функцию std::min
    int smallest_value = std::min({a, b, c});

    std::cout << "Наименьшее значение: " << smallest_value << std::endl;
    return 0;
}

