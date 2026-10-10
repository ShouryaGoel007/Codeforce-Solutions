//  B. 250 Thousand Tons of TNT
#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n;
    cin >> n;
    vector<long long> v1(n);
    for (long long i=0;i<n;i++) {
        cin >> v1[i];
    }
    vector<long long> pre(n+1,0);
    // pre.push_back(v1[0]);
    for (long long i=0;i<n;i++) {
        pre[i+1]=(pre[i]+v1[i]);
    }


    long long ans=0;
    for (long long i=1;i<=n/2;i++) {
        if (n%i==0) {
            long long minn=2e18;
            long long maxx=-2e18;
            for (long long j=0;j<n;j+=i) {
                minn=min(minn,pre[j+i]-pre[j]);
                maxx=max(maxx,pre[j+i]-pre[j]);
            }
            ans=max(maxx-minn,ans);
        }
    }
    cout << ans << endl;
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
