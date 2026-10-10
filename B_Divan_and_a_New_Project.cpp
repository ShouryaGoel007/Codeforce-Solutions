//  B. Divan and a New Project

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> visit(n+1,0);
    for (long long i=1;i<=n;i++) {
        cin>>visit[i];
    }
    vector<pair<long long,long long>> v1;
    for (long long i=1;i<=n;i++) {
        v1.push_back({visit[i],i}); // i says which building.
    }
    sort(v1.rbegin(),v1.rend());
    long long a=0;
    vector<long long> left,right;
    for (long long i=0;i<n;i++) {
        if (a==0) {
            a=1;
            left.push_back(v1[i].second);
        }
        else {
            a=0;
            right.push_back(v1[i].second);
        }
    }
    vector<long long> pos;
    reverse(left.begin(),left.end());
    for (auto it: left) {
        pos.push_back(it);
    }
    pos.push_back(0);
    for (auto it: right) {
        pos.push_back(it);
    }
    vector<long long> ans(n+1,0);
    for (long long i=0;i<=n;i++) {
        ans[pos[i]]=i;
    }
    long long time=0;
    for (long long i=1;i<=n;i++) {
        time+=abs(ans[i]-ans[0])*2*visit[i];
    }
    cout<<time<<endl;
    for (long long i=0;i<=n;i++) {
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
