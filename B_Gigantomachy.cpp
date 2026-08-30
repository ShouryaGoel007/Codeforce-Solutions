//  B. Gigantomachy

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n>>m;
    vector<int> v1(n),v2(m);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    for (int i=0;i<m;i++) {
        cin >> v2[i];
    }
    if (accumulate(v1.begin(),v1.end(),0)>=accumulate(v2.begin(),v2.end(),0)) {
        return 1;
    }
    return 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
