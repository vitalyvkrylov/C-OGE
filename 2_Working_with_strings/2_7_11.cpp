#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::string str = "Frontend, Backend, DevOps, DataScience, QA, Cybersecurity — направления";

    int vs = 8;
    double vsb = vs / 8.0; // 1.0
    int menshe = 9;
    int ksymbols = static_cast<int>(menshe / vsb - 2); // 9 / 1 - 2 = 7

    // Убираем пробелы
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());

    // Разбиваем строку по запятой
    std::stringstream ss(str);
    std::string item;
    std::vector<std::string> words;

    while (std::getline(ss, item, ',')) {
        words.push_back(item);
    }

    // Поиск слова по длине
    for (const auto& word : words) {
        if (word.length() == ksymbols) {
            std::cout << "Удалённое слово: " << word << std::endl;
            break;
        }
    }

    return 0;
}


