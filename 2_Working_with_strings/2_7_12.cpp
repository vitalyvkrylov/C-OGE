#include <iostream>
#include <windows.h>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

// Функция деления строки по символу
vector<string> split(const string& s, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream stream(s);
    while (getline(stream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Удаляет все пробелы
string remove_spaces(const string& str) {
    string result = str;
    result.erase(remove(result.begin(), result.end(), ' '), result.end());
    return result;
}

// Подсчитывает длину UTF-8 строки в байтах
int utf8_byte_len(const string& str) {
    return str.size();
}

int main() {
    SetConsoleOutputCP(CP_UTF8);  // Поддержка вывода UTF-8 в Windows

    string str = "Гитара, Пианино, Скрипка, Барабан, Саксофон, Арфа — инструменты";
    int removed_bytes = 8;

    // Удаляем всё после "—"
    size_t dash_pos = str.find("—");
    if (dash_pos != string::npos)
        str = str.substr(0, dash_pos);

    // Удаляем пробелы и разбиваем строку
    string clean_str = remove_spaces(str);
    vector<string> words = split(clean_str, ',');

    for (const string& word : words) {
        if (utf8_byte_len(word) == removed_bytes) {
            cout << "Удалённое слово: " << word << endl;
            break;
        }
    }

    return 0;
}
