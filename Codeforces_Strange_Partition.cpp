#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        vector<long long> v1(n);

        long long sum = 0;
        long long mx = 0;

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
            sum += v1[i];
            mx += (v1[i] + x - 1) / x;
        }

        long long mn = (sum + x - 1) / x;

        cout << mn << " " << mx << endl;
    }
}