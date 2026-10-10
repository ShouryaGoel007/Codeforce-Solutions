//  E. Building an Aquarium

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,x;
    cin >> n >> x;
    vector<long long> v1(n);
    for (long long i=0;i<n;i++) {
        cin >> v1[i];
    }
    vector<long long> v2={v1[0]};
    for (auto it: v1) {
        if (it<=v2.back()) {
            v2.push_back(it);
        }
    }
    for (auto it: v2) {
        for (auto &ab: v1) {

        }
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
