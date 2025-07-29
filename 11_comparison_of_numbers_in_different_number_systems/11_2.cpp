#include <iostream>
#include <string>

int main() {
    std::string binary_str = "1100110";         // Двоичное число как строка
    int decimal = std::stoi(binary_str, nullptr, 2);  // Перевод из 2-й СС в 10-ю
    std::cout << "Ответ: " << binary_str << "₂ = " << decimal << "₁₀" << std::endl;
    return 0;
}


