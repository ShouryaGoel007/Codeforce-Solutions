#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n, m;
        long long v;
        cin >> n >> m >> v;

        vector<long long> a(n);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Prefix sums
        vector<long long> pre(n + 1, 0);

        for (long long i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + a[i];
        }

        // left[k] = first position after satisfying
        // k creatures from the left
        vector<long long> left(m + 1, 0);

        long long sum = 0;
        long long cnt = 0;

        for (long long i = 0; i < n && cnt < m; i++) {
            sum += a[i];

            if (sum >= v) {
                cnt++;
                left[cnt] = i + 1;
                sum = 0;
            }
        }

        // Cannot satisfy all m creatures
        if (cnt < m) {
            cout << -1 << '\n';
            continue;
        }

        // right[k] = starting position after satisfying
        // k creatures from the right
        vector<long long> right(m + 1, n);

        sum = 0;
        cnt = 0;

        for (long long i = n - 1; i >= 0 && cnt < m; i--) {
            sum += a[i];

            if (sum >= v) {
                cnt++;
                right[cnt] = i;
                sum = 0;
            }
        }
        long long ans = 0;
        for (long long k = 0; k <= m; k++) {
            long long l = left[k];
            long long r = right[m - k];

            if (l <= r) {
                long long alice = pre[r] - pre[l];
                ans = max(ans, alice);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}