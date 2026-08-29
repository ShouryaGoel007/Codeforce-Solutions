//  C. Tea Tasting
#include<bits/stdc++.h>
using namespace std;
signed main() {
    long long t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        vector<long long> v1(n+1), v2(n+1);
        for (long long i=1;i<=n;i++) {
            cin>>v1[i];
        }
        for (long long i=1;i<=n;i++) {
            cin>> v2[i];
        }
        vector<long long> pre(n+1,0);
        for (long long i=1;i<=n;i++) {
            pre[i]=pre[i-1]+v2[i];
        }
        vector<long long> diff(n+2,0);
        vector<long long> rem(n+2,0);
        for (long long i=1;i<=n;i++) {
            // have to find upper bound of each tea in the prefix array and then put diff as 1, -1
            auto it=upper_bound(pre.begin(),pre.end(),v1[i]+pre[i-1]);
            diff[i]++;
            diff[it-pre.begin()]--;
            if (it-pre.begin()<=n)
            rem[it-pre.begin()]+=v1[i]-pre[it-pre.begin()-1]+pre[i-1];
        }
        long long ans=0;
        for (long long i=1;i<=n;i++) {
            ans+=diff[i];
            cout<<ans*v2[i]+rem[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
