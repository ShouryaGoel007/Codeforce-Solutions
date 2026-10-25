//  E. Scuza

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,q;
    cin >> n>>q;
    vector<long long> v1(n);
    for (long long i=0;i<n;i++) {
        cin>>v1[i];
    }
    vector<long long> pre(n+1,0), mx(n+1,0);
    // pre[0]=0;
    // pre[1]=(v1[0]);
    for (long long i=0;i<n;i++) {
        pre[i+1]=pre[i]+v1[i];

    }
    for (int i=0;i<n;i++) {
        mx[i+1]=max(mx[i],v1[i]);
    }

    for (long long i=0;i<q;i++) {
        long long k;
        cin>>k;
        int pos=upper_bound(mx.begin(),mx.end(),k)-mx.begin();
        //ab apan ko k+pre[pos] ka lower bound find karna hai
        cout<<pre[pos-1]<<" ";
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
