#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    // Строка в UTF-16
    u16string s = u"Я к вам пишу — чего же боле? Что я могу еще сказать?";

    const unsigned short bits_per_symbol = 16; // 16 бит
    const float bytes_per_symbol = static_cast<float>(bits_per_symbol) / 8; // 2 байта

    // Получаем длину строки (в символах)
    size_t symbol_count = s.length();

    // Размер строки в байтах
    size_t total_bytes = symbol_count * bytes_per_symbol;

    cout << "Количество символов: " << symbol_count << endl;
    cout << "Размер предложения в байтах (UTF-16): " << total_bytes << endl;

    return 0;
}
