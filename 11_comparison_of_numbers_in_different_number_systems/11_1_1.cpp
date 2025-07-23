#include <iostream>
#include <bitset>
#include <sstream>

int main() {
    int number = 123;

    // В двоичную
    std::bitset<16> binary(number);
    std::cout << "Двоичное представление: " << binary << std::endl;

    // В восьмеричную
    std::stringstream ss_oct;
    ss_oct << std::oct << number;
    std::cout << "Восьмеричное представление: " << ss_oct.str() << std::endl;

    // В шестнадцатеричную
    std::stringstream ss_hex;
    ss_hex << std::hex << number;
    std::cout << "Шестнадцатеричное представление: " << ss_hex.str() << std::endl;

    return 0;
}


