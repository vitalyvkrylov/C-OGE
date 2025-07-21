#include <iostream>
using namespace std;

int main() {
    int a, b;
    // Ввод значений переменных a и b
    cin >> a;
    cin >> b;
    // Проверка условия: a > 10 и b < -2
    if (a > 10 && b < -2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

