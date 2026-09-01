//  B. Tenzing and Books

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,x;
    cin >> n>>x;
    vector<long long> v1(n),v2(n),v3(n);
    for (long long i=0;i<n;i++) {
        cin >> v1[i];
    }
    for (long long i=0;i<n;i++) {
        cin >> v2[i];
    }
    for (long long i=0;i<n;i++) {
        cin >> v3[i];
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
