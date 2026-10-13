//  B. Subtract Operation

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n>>k;
    multiset<int> v1;
    for (int i=0;i<n;i++) {
        int d;
        cin >> d;
        v1.insert(d);
    }
    multiset<int> s(v1.begin(), v1.end());
    for (int x : v1) {
        if (s.find(x - k) != s.end()) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
