//  B. Li Hua and Pattern

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n>>k;
    vector<vector<int>> v1(n,vector<int>(n));
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> v1[i][j];
        }
    }
    int ct=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (v1[i][j]!=v1[n-i-1][n-j-1]) {
                ct++;
            }
        }
    }
    ct=ct/2;
    if (ct>k)cout<<"NO"<<endl;
    else {
        int b=k-ct;
        if (b%2==0) cout<<"YES"<<endl;
        else {
            if (n%2==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
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
