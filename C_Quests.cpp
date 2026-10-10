//  C. Quests

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long k;
    cin>>k;
    vector<long long> v1(n),v2(n);
    for (long long i=0;i<n;i++) {
        cin>>v1[i];
    }
    for (long long i=0;i<n;i++) {
        cin>>v2[i];
    }
    long long ans=0;
    long long tmax=0;
    vector<long long> suff;
    suff.push_back(v1[0]);
    for (long long i=1;i<n;i++) {
        suff.push_back(suff[i-1]+v1[i]);
    }
    for (long long i=0;i<n;i++) {
        tmax=max(tmax,v2[i]);
        if (k-i-1>=0) {
            ans=max(ans,suff[i]+(k-i-1)*tmax);
        }
        // else {
        //     ans=max(ans,)
        // }
    }
    cout<<ans<<endl;
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
