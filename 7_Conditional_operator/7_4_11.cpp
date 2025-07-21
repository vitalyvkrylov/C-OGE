#include <iostream>
using namespace std;

int main() {
    int k, l;
    // Ввод значений переменных k и l
    cin >> k;
    cin >> l;
    // Проверка условия: k < 0 ИЛИ l > 5
    if (k < 0 || l > 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

