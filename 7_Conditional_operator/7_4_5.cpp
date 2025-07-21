#include <iostream>
using namespace std;

int main() {
    int x, y;
    // Ввод значений переменных x и y
    cin >> x;
    cin >> y;
    // Проверка условия: x < 10 и y > 0
    if (x < 10 && y > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

