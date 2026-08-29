//  D1. The Endspeaker (Easy Version)

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,m;
        cin >> n >> m;
        vector<long long> v1(n),v2(m);
        for (long long i=0;i<n;i++) {
            cin >> v1[i];
        }
        for (long long i=0;i<m;i++) {
            cin >> v2[i];
        }
        long long k=1;
        vector<long long> pre(n+1,0);
        for (long long i=1;i<=n;i++) {
            pre[i]=(pre[i-1]+v1[i-1]);
        }
        // i have to minimize (m-k) bas
        // for that i need a huge k but
        vector<vector<long long>> dp(n+1,vector<long long>(m+1,1000000000000000000LL));
        for (long long i=0;i<=m;i++) {
            dp[n][i]=0;
        }
        // ab dp shows minimum cost to remove the subbary from i to n when my index is j in b vector
        for (long long i=n;i>=0;i--) {
            for (long long j=m;j>0;j--) {
                if (j<m) {
                    dp[i][j]=min(dp[i][j+1],dp[i][j]);
                }
                long long all=v2[j-1]+pre[i];
                auto it=upper_bound(pre.begin(),pre.end(),all);
                long long dist=distance(pre.begin(),it)-1;
                if (dist>i) {
                    dp[i][j]=min(dp[i][j],dp[dist][j]+m-j);
                }
            }
        }
        if (dp[0][1] >= 1000000000000000000LL) {
            cout << -1 << "\n";
        } else {
            cout << dp[0][1] << "\n";
        }    }
    return 0;
}
