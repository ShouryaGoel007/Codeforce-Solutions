#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int xo = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            xo ^= x;
        }

        if (n % 2 == 0) {
            if (xo == 0) cout << 0 << "\n";
            else cout << -1 << "\n";
        } else {
            cout << xo << "\n";
        }
    }
    return 0;
}
