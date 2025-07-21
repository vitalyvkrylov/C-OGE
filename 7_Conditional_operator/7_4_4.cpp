#include <iostream>
using namespace std;

int main() {
    int k, l;
    // Ввод значений переменных k и l
    cin >> k;
    cin >> l;
    // Проверка условия: k < 4 ИЛИ l > 7
    if (k < 4 || l > 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

