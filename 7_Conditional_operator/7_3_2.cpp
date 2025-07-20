#include <iostream>
using namespace std;

int main() {
    // Список всех пар чисел
    int pairs[9][2] = {
        {1, 2}, {11, 2}, {1, 12}, {11, 12}, {-11, -12},
        {-11, 12}, {-12, 11}, {10, 10}, {10, 5}
    };
    // Переменная для подсчета запусков с "YES"
    int count_yes = 0;
    // Проверяем каждую пару чисел
    for (int i = 0; i < 9; i++) {
        int s = pairs[i][0];
        int t = pairs[i][1];
        if (s > 10 || t > 10) {
            count_yes++;
        }
    }

    // Выводим количество запусков с "YES"
    cout << count_yes << endl;
    return 0;
}


