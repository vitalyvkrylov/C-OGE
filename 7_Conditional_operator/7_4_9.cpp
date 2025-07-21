#include <iostream>
using namespace std;

int main() {
    int m, n;
    // Ввод значений переменных m и n
    cin >> m;
    cin >> n;
    // Проверка условия: НЕ (m > 7 и n < -1)
    if (!(m > 7 && n < -1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

