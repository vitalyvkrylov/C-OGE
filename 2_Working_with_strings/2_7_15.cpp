#include <iostream>
#include <string>
#include <vector>
#include <windows.h>  // Для SetConsoleCP и SetConsoleOutputCP
#include <io.h>
#include <fcntl.h>

int main() {
    // Настройка консоли Windows для корректного вывода Unicode
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    _setmode(_fileno(stdout), _O_U8TEXT);

    std::vector<std::wstring> words = {
        L"Toyota, ", L"Honda, ", L"Mercedes, ", L"BMW, ", L"Audi, ", L"Ford "
    };
    std::wstring ending = L"— марки";

    // Формируем исходный текст
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

        if (diff == 6) {
            // Удаляем запятую и пробел с конца, если они есть
            std::wstring word = words[i];
            if (!word.empty() && word.back() == L' ') word.pop_back();
            if (!word.empty() && word.back() == L',') word.pop_back();

            std::wcout << L"Удаленное слово: " << word << std::endl;
            break;
        }
    }

    return 0;
}



