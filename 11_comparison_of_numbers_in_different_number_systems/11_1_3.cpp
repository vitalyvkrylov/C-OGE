#include <iostream>
#include <string>
#include <bitset>
#include <sstream>

int main() {
    std::string binary_str = "10101";  // 21 в десятичной

    // Шаг 1: Бинарная -> Десятичная
    int decimal = std::stoi(binary_str, nullptr, 2);

    // Шаг 2: Десятичная -> Восьмеричная
    std::stringstream ss;
    ss << std::oct << decimal;
    std::string octal_str = ss.str();

    std::cout << "Двоичное число: " << binary_str << " = Восьмеричное: " << octal_str << std::endl;

    return 0;
}


