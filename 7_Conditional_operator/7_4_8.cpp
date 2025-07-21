#include <iostream>
using namespace std;

int main() {
    int x, y;
    // Ввод значений переменных x и y
    cin >> x;
    cin >> y;
    // Проверка условия: x < 5 ИЛИ y > 8
    if (x < 5 || y > 8) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}


