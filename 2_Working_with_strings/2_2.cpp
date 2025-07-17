#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

// Функция для подсчёта символов в UTF-8 строке
size_t utf8_length(const std::string& str) {
    size_t count = 0;
    for (unsigned char c : str) {
        if ((c & 0xC0) != 0x80) {
            ++count;
        }
    }
    return count;
}

int main() {
    SetConsoleOutputCP(65001);
    // Список слов (в UTF-8 формате)
    vector<string> words = {
        u8"Обь", u8"Лена", u8"Волга", u8"Москва", u8"Макензи", u8"Амазонка"
    };

    const int byte_diff = 8;         // Строка уменьшилась на 8 байт
    const int separator_bytes = 2;   // Удаляется также запятая и пробел
    const int expected_char_count = byte_diff - separator_bytes;  // = 6

    for (const auto& word : words) {
        if (utf8_length(word) == expected_char_count) {
            cout << "Удалённое слово: " << word << endl;
            break;
        }
    }

    return 0;
}
