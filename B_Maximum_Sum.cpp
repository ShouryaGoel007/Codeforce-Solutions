//  B. Maximum Sum

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k;
    cin >> n>>k;
    vector<long long> v1(n);
    for (long long i=0;i<n;i++) {
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    vector<long long> pre;
    pre.push_back(0);
    for (long long i=0;i<n;i++) {
        pre.push_back(pre.back()+v1[i]);
    }
    long long ans1=LLONG_MIN;
    for (int i=0;i<=k;i++) {
        ans1=max(ans1,-pre[(k-i)*2]+pre[n-i]);
    }
    cout<<ans1<<endl;
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
