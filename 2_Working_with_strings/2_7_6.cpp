#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <io.h>
#include <fcntl.h>

int main() {
    // Включаем поддержку Unicode в консоли Windows
    _setmode(_fileno(stdout), _O_U16TEXT);

    // Исходная строка
    std::wstring str = L"Футбол, Хоккей, Теннис, Волейбол — игры";

    // Параметры
    int vs = 8;
    double vsb = vs / 8.0;   // = 1
    int menshe = 8;
    int ksymbols = static_cast<int>(menshe / vsb - 2);  // = 6

    // Удаление пробелов
    str.erase(std::remove(str.begin(), str.end(), L' '), str.end());

    // Разделение по запятой
    std::wstringstream ss(str);
    std::wstring word;
    std::vector<std::wstring> words;

    while (std::getline(ss, word, L',')) {
        words.push_back(word);
    }

    // Поиск нужного слова
    for (const auto& w : words) {
        if (w.length() == ksymbols) {
            std::wcout << L"Удалённое слово: " << w << std::endl;
            break;
        }
    }

    return 0;
}


