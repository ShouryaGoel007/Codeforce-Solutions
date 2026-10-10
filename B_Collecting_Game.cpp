//  B. Collecting Game

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    vector<pair<long long,long long>> v1(n);
    for (long long i=0;i<n;i++) {
        cin >> v[i];
    }
    for (long long i=0;i<n;i++) {
        v1[i]={v[i],i};
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    vector<pair<long long,long long>> pre;
    pre.push_back(v1[0]);
    for (long long i=1;i<n;i++) {
        pre.push_back({pre.back().first+v1[i].first,v1[i].second});
    }
    vector<long long> ans(n,0);
    ans[pre[n-1].second]=n-1;
    for (int i=n-2;i>=0;i--) {
        if (pre[i].first>=v1[i+1].first) {
            ans[pre[i].second]=ans[pre[i+1].second];
        }
        else {
            ans[pre[i].second]=i;
        }
    }
    for (long long i=0;i<n;i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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
