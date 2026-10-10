//  B. Lunatic Never Content

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    int ans=abs(v1[n-1]-v1[0]);
    for (int i=1;i<n-1;i++) {
        ans=__gcd(ans,abs(v1[i]-v1[n-1-i]));
    }
    cout<<ans<<endl;
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
