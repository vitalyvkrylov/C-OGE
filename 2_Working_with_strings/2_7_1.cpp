#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001);
    std::string str = "Яблоко, Груша, Слива, Абрикос, Персик — фрукты";

    // Условия
    int vs = 8;
    double vsb = vs / 8.0; // vsb = 1.0
    int menshe = 7;
    int ksymbols = static_cast<int>(menshe / vsb - 2); // 7 / 1 - 2 = 5

    // Удаляем пробелы
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());

    // Разделяем строку по запятой
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (std::getline(ss, word, ',')) {
        words.push_back(word);
    }

    // Проверка слов
    for (const auto& w : words) {
        // Подсчёт длины в символах, не в байтах
        int count = 0;
        for (unsigned char c : w) {
            if ((c & 0b11000000) != 0b10000000) { // UTF-8: новый символ
                count++;
            }
        }

        if (count == ksymbols) {
            std::cout << "Удалённое слово: " << w << std::endl;
            break;
        }
    }

    return 0;
}
