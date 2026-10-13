//  C. Paint the Array

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    int d=v1[0];
    for (int i = 0; i < n; i+=2) {
        d=__gcd(d,v1[i]);
    }
    int f1=0,f2=0;
    for (int i=1;i<n;i+=2) {
        if (v1[i]%d==0) {
            f1=1;
            // return;
        }
    }
    int d1=v1[1];
    for (int i=1;i<n;i+=2) {
        d1=__gcd(d1,v1[i]);
    }
    for (int i=0;i<n;i+=2) {
        if (v1[i]%d1==0) {
            // cout<<0<<endl;
            f2=1;
        }
    }
    if (f1 && f2) cout << 0 << endl;
    // cout<<max(d,d1)<<endl;
    else {
        if (f1) {
            cout<<d1<<endl;
        }
        else {
            cout<<d<<endl;
        }
    }
    return;
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
