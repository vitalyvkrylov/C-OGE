#include <iostream>
using namespace std;

int main() {
    int m, n;
    // Ввод значений переменных m и n
    cin >> m;
    cin >> n;
    // Проверка условия: m > 5 ИЛИ n < 3
    if (m > 5 || n < 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

