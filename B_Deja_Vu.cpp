//  B. Deja Vu

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,q;
    cin >> n>>q;
    vector<long long> a(n),x(q);
    for (long long i=0;i<n;i++) {
        cin >> a[i];
    }
    // cin >> q;
    for (long long i=0;i<q;i++) {
        cin >> x[i];
    }
    vector<long long> v={x[0]};
    for (auto it: x) {
        if (it<v.back()) {
            v.push_back(it);
        }
    }
    for (auto it: v) {
        for (auto &ab: a) {
            if (ab%(long long)pow(2,it)==0) {
                ab+=pow(2,it-1);
            }
        }
    }
    for (auto it: a) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
