#include <iostream>
#include <string>
#include <vector>
#include <windows.h>  // для SetConsoleCP и SetConsoleOutputCP
#include <io.h>
#include <fcntl.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    _setmode(_fileno(stdout), _O_U8TEXT);

    std::vector<std::wstring> words = {
        L"Математика, ", L"Физика, ", L"Химия, ", L"Биология, ", L"География, ", L"Астрономия "
    };
    std::wstring ending = L"— науки";

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
            // Удаляем из слова запятую и пробел в конце
            std::wstring word = words[i];
            // Удаляем запятую и пробел с конца, если есть
            if (!word.empty() && word.back() == L' ') word.pop_back();
            if (!word.empty() && word.back() == L',') word.pop_back();

            std::wcout << L"Удаленное слово: " << word << std::endl;
            break;
        }
    }

    return 0;
}


