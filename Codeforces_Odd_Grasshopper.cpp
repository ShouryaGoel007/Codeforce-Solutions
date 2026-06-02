#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, n;
        cin >> x >> n;

        long long r = n % 4;

        if (r == 0) {
            cout << x << endl;
        }
        else if (r == 1) {
            if (x % 2 == 0)
                cout << x - n << endl;
            else
                cout << x + n << endl;
        }
        else if (r == 2) {
            if (x % 2 == 0)
                cout << x + 1 << endl;
            else
                cout << x - 1 << endl;
        }
        else { // r == 3
            if (x % 2 == 0)
                cout << x + n + 1 << endl;
            else
                cout << x - n - 1 << endl;
        }
    }
}