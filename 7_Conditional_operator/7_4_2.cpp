#include <iostream>
using namespace std;

int main() {
    int m, n;
    // Ввод значений переменных m и n
    cin >> m;
    cin >> n;
    // Проверка условия: НЕ (m > 10 ИЛИ n < -5)
    if (!(m > 10 || n < -5)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}


