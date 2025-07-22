#include <iostream>
using namespace std;

int main() {
    int s, t;
    cin >> s;
    cin >> t;
    if (s > -2 && !(t > 4)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

