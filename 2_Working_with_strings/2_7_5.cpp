#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <io.h>
#include <fcntl.h>

int main() {
    // Включаем поддержку Unicode вывода в Windows консоли
    _setmode(_fileno(stdout), _O_U16TEXT);

    // Исходная строка
    std::wstring str = L"Кофе, Чай, Сок, Лимонад — напитки";

    // Параметры задачи
    int vs = 8;
    double vsb = vs / 8.0;  // = 1
    int menshe = 5;
    int ksymbols = static_cast<int>(menshe / vsb - 2);  // = 3

    // Удаляем пробелы
    str.erase(std::remove(str.begin(), str.end(), L' '), str.end());

    // Разделяем по запятой
    std::wstringstream ss(str);
    std::wstring word;
    std::vector<std::wstring> words;

    while (std::getline(ss, word, L',')) {
        words.push_back(word);
    }

    // Ищем первое слово длины 3 символа
    for (const auto& w : words) {
        if (w.length() == ksymbols) {
            std::wcout << L"Удалённое слово: " << w << std::endl;
            break;
        }
    }

    return 0;
}


