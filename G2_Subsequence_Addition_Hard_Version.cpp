//  G2. Subsequence Addition (Hard Version)

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> v1(n);
    for (long long i=0;i<n;i++) {
        cin >> v1[i];
    }
    sort(v1.begin(),v1.end());
    if (v1[0]!=1) {
        cout<<"NO"<<endl;
    }
    else {
        long long ans=0;
        long long flag=0;
        for (long long i=1;i<n;i++) {
            if (ans+v1[i-1]<v1[i]) {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            ans+=v1[i-1];
        }
        if (!flag) {
            cout<<"YES"<<endl;
        }
    }

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
