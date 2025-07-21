#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m;
    cin >> n;
    if (!(m > 5 && n < 2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

