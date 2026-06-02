#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a1(n), a2(n);
        for (int i = 0; i < n; i++) cin >> a1[i];
        for (int i = 0; i < n; i++) cin >> a2[i];
        vector<long long> a(n);
        for (int i = 0; i < n - 1; i++) {
            a[i] = __gcd(a1[i], a1[i + 1]);
        }
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (a[0] < a1[i]) cnt++;
            } else if (i == n - 1) {
                if (a[n - 2] < a1[i]) cnt++;
            } else {
                long long l = (a[i - 1] * a[i]) / __gcd(a[i - 1], a[i]);
                if (l < a1[i]) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}