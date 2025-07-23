#include <iostream>
#include <string>

int main() {
    // Двоичная -> Десятичная
    std::string binary_str = "1111011";
    int decimal_from_bin = std::stoi(binary_str, nullptr, 2);
    std::cout << "Из двоичной: " << decimal_from_bin << std::endl;

    // Восьмеричная -> Десятичная
    std::string octal_str = "377";
    int decimal_from_oct = std::stoi(octal_str, nullptr, 8);
    std::cout << "Из восьмеричной: " << decimal_from_oct << std::endl;

    // Шестнадцатеричная -> Десятичная
    std::string hex_str = "3e8";
    int decimal_from_hex = std::stoi(hex_str, nullptr, 16);
    std::cout << "Из шестнадцатеричной: " << decimal_from_hex << std::endl;

    return 0;
}


