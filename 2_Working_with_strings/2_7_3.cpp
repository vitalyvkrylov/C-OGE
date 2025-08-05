#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <io.h>
#include <fcntl.h>

int main() {
    // Настройка консоли Windows для вывода Юникода (UTF-16)
    _setmode(_fileno(stdout), _O_U16TEXT);

    // Исходная строка
    std::wstring str = L"Франция, Германия, Италия, Испания — страны";

    // Параметры задачи
    int vs = 8;
    double vsb = vs / 8.0; // = 1.0
    int menshe = 10;
    int ksymbols = static_cast<int>(menshe / vsb - 2); // = 8

    // Удаляем пробелы
    str.erase(std::remove(str.begin(), str.end(), L' '), str.end());

    // Разделяем по запятой
    std::wstringstream ss(str);
    std::wstring word;
    std::vector<std::wstring> words;

    while (std::getline(ss, word, L',')) {
        words.push_back(word);
    }

    // Поиск слова нужной длины
    for (const auto& w : words) {
        if (w.length() == ksymbols) {
            std::wcout << L"Удалённое слово: " << w << std::endl;
            break;
        }
    }

    return 0;
}

