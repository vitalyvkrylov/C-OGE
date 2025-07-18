#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <windows.h>

using namespace std;

// Функция для удаления пробелов перед словом
string trim_left(const string& str) {
    size_t first = str.find_first_not_of(" ");
    return (first == string::npos) ? "" : str.substr(first);
}

// Функция для подсчета количества UTF-8 символов
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
    string str = "Врач, актер, акушер, генетик, издатель, кардиолог";

    const int bytes_per_char = 4;     // UTF-32 = 4 байта на символ
    const int total_bytes_removed = 44;
    const int removed_symbols = (total_bytes_removed / bytes_per_char) - 2; // 11 - 2 = 9

    vector<string> words;
    stringstream ss(str);
    string token;

    while (getline(ss, token, ',')) {
        token = trim_left(token);
        words.push_back(token);
    }

    // Ищем слово с 9 символами (по UTF-8)
    for (const auto& word : words) {
        if (utf8_length(word) == removed_symbols) {
            cout << "Удалённое слово: " << word << endl;
            break;
        }
    }

    return 0;
}

