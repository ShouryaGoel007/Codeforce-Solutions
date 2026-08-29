#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    int sum = 0;
    for (int a: v1) {
        sum += a;
    }
    int change = 0;
    int vis = 0;
    while (q--) {
        int t;
        cin >> t;
        if (t == 2) {
            int x;
            cin >> x;
            cout << x * n << endl;
            sum = x * n;
            change = x;
        } else {
            int i, x;
            cin >> i >> x;
            if (vis == 0) {
                sum -= v1[i - 1];
                vis = 1;
            }
            sum -= change;
            sum += x;
            v1[i - 1] = x;
            change = x;
            cout << sum << endl;
        }
    }
}
