#include <iostream>
using namespace std;

int main() {
    int stranic = 8;           // Количество страниц в документе
    int strok = 40;            // Количество строк на странице
    int stroka = 48;           // Количество символов в строке
    int vs = 8;                // Один символ кодируется 8 битами

    double vsb = vs / 8.0;     // Вес одного символа в байтах (8 бит / 8 = 1 байт)
    double V = stranic * strok * stroka * vsb;   // Общий объём информации в байтах

    V /= 1024;                 // Переводим байты в килобайты

    cout << static_cast<int>(V) << endl;  // Округляем и выводим

    return 0;
}

