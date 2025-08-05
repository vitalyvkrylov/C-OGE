#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <io.h>
#include <fcntl.h>

int main() {
    // Для правильного вывода кириллицы в консоли Windows
    _setmode(_fileno(stdout), _O_U16TEXT);

    std::wstring str = L"Париж, Берлин, Мадрид, Пекин — столицы";

    int vs = 8;
    double vsb = vs / 8.0; // =1.0
    int menshe = 7;
    int ksymbols = static_cast<int>(menshe / vsb - 2); // =5

    // Убираем пробелы
    str.erase(std::remove(str.begin(), str.end(), L' '), str.end());

    // Разбиваем по запятой
    std::wstringstream ss(str);
    std::wstring word;
    std::vector<std::wstring> words;

    while (std::getline(ss, word, L',')) {
        words.push_back(word);
    }

    // Проверяем длину
    for (const auto& w : words) {
        if (w.length() == ksymbols) {
            std::wcout << L"Удалённое слово: " << w << std::endl;
            break;
        }
    }

    return 0;
}


