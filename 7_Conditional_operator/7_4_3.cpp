#include <iostream>
using namespace std;

int main() {
    int p, q;
    // Ввод значений переменных p и q
    cin >> p;
    cin >> q;
    // Проверка условия: p > 0 и q < 0
    if (p > 0 && q < 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

