#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    if (x < 2 || y > 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

