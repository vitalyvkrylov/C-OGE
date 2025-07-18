#include <iostream>
#include <algorithm>  // для std::max
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    int a = 5;
    int b = 10;
    int c = 15;

    // Используем функцию std::max
    int largest_value = std::max({a, b, c});

    std::cout << "Наибольшее значение: " << largest_value << std::endl;
    return 0;
}

