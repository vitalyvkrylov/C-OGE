#include <iostream>
#include <string>
#include <vector>
#include <windows.h>  // SetConsoleCP, SetConsoleOutputCP
#include <io.h>
#include <fcntl.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    _setmode(_fileno(stdout), _O_U8TEXT);

    std::vector<std::wstring> words = {
        L"Футбол, ", L"Баскетбол, ", L"Волейбол, ", L"Теннис, ", L"Хоккей, ", L"Бейсбол "
    };
    std::wstring ending = L"— спорт";

    std::wstring original_text;
    for (const auto& w : words) {
        original_text += w;
    }
    original_text += ending;

    size_t original_size = original_text.size();

    for (size_t i = 0; i < words.size(); i++) {
        std::wstring modified_text;
        for (size_t j = 0; j < words.size(); j++) {
            if (j != i) {
                modified_text += words[j];
            }
        }
        modified_text += ending;

        size_t diff = original_size - modified_text.size();

        if (diff == 11) {
            // Удаляем запятую и пробел в конце слова, если есть
            std::wstring word = words[i];
            if (!word.empty() && word.back() == L' ') word.pop_back();
            if (!word.empty() && word.back() == L',') word.pop_back();

            std::wcout << L"Удаленное слово: " << word << std::endl;
            break;
        }
    }

    return 0;
}


