#include <iostream>
using namespace std;

int main() {
    int a, b;
    // Ввод значений переменных a и b
    cin >> a;
    cin >> b;
    // Проверка условия: a > 3 и b < 5
    if (a > 3 && b < 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

