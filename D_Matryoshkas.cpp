//  D. Matryoshkas
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    sort(v1.begin(),v1.end());
    map<int,int>mpp;
    for (int i=0;i<n;i++) {
        mpp[v1[i]]++;
    }
    int ans=0;
    // int x=mpp[1];
    for (auto &it: mpp) {
        auto &[val,cnt]=it;
        ans+=max(0,cnt-mpp[val-1]);
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
