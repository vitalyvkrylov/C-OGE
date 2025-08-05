#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <io.h>
#include <fcntl.h>

int main() {
    // Для корректного вывода на Windows
    _setmode(_fileno(stdout), _O_U16TEXT);

    std::wstring str = L"Врач, Учитель, Инженер, Повар — профессии";

    int vs = 8;
    double vsb = vs / 8.0; // = 1.0
    int menshe = 9;
    int ksymbols = static_cast<int>(menshe / vsb - 2); // = 7

    // Убираем пробелы
    str.erase(std::remove(str.begin(), str.end(), L' '), str.end());

    // Разделение по запятой
    std::wstringstream ss(str);
    std::wstring word;
    std::vector<std::wstring> words;

    while (std::getline(ss, word, L',')) {
        words.push_back(word);
    }

    for (const auto& w : words) {
        if (w.length() == ksymbols) {
            std::wcout << L"Удалённое слово: " << w << std::endl;
            break;
        }
    }

    return 0;
}


