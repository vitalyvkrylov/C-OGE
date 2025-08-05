#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::string str = "Яблоко, Груша, Слива, Абрикос, Персик — фрукты";
    int vs = 8;
    double vsb = vs / 8.0;
    int menshe = 7;
    int ksymbols = menshe / vsb - 2;  // 5

    // Удалим пробелы
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    // Разделим по запятым
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (getline(ss, word, ',')) {
        words.push_back(word);
    }

    for (const auto& w : words) {
        if (w.length() == ksymbols) {
            std::cout << w << std::endl;
            break;
        }
    }

    return 0;
}









