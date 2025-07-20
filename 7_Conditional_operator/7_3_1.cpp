#include <iostream>
using namespace std;

int main() {
    int s, t;
    // Считываем ввод пользователя
    cin >> s;
    cin >> t;
    // Проверяем, больше ли хотя бы одно из чисел 10
    if (s > 10 || t > 10) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}


