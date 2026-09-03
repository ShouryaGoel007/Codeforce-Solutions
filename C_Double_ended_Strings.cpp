//  C. Double-ended Strings

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    int ans=0;
    int j=0;
    int temp=0,prev=-1;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //
    //         int k = 0;
    //
    //         while (i + k < n && j + k < m &&
    //                a[i + k] == b[j + k]) {
    //             k++;
    //                }
    //
    //         ans = max(ans, k);
    //     }
    // }
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (a[i-1]==b[j-1]) {
                dp[i][j]=max(dp[i-1][j-1]+1,dp[i][j-1]);
                ans=max(ans,dp[i][j]);
            }
            else {
                dp[i][j]=0;
            }
        }
    }
    cout<<a.size()+b.size()-2*ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
