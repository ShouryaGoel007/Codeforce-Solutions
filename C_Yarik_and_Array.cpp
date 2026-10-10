
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    int ans=v1[0];
    int parity=v1[0];
    int ts=ans;
    for (int i=1;i<n;i++) {
        if (abs(v1[i])%2==abs(parity)%2) {
            ans=max(ans,v1[i]);
            ts=v1[i];
        }
        else {
            ts=max(ts+v1[i],v1[i]);
            ans=max(ans,ts);
        }
        parity=v1[i];
    }
    ans=max(ans,ts);
    cout << ans << endl;
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
