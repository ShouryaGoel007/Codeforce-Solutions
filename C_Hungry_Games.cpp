//  C. Hungry Games

#include<bits/stdc++.h>

using namespace std;

signed main() {
    long long t;
    cin>>t;
    while (t--) {
        long long n,x;
        cin>>n>>x;
        vector<long long> v1(n);
        for(long long i=0;i<n;i++) {
            cin>>v1[i];
        }
        vector<long long> pre;
        pre.push_back(0);
        for (auto it: v1) {
            pre.push_back(pre.back()+it);
        }
        long long cnt=0;
        vector<long long> dp(n+1,0);
    // my dp will be stooring number of arrays starting at i having their toxicity to 0.
        for (long long i=n-1;i>=0;i--) {
            auto it=upper_bound(pre.begin(),pre.end(),pre[i]+x);
            if (it!=pre.end()) {
                long long j=distance(pre.begin(),it);
                dp[i]=1+dp[j];
            }
            else {
                dp[i]=0;
            }
            cnt+=dp[i];
        }
        cout<<n*(n+1)/2-cnt<<endl;
    }
    return 0;
}
