#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        long long n,c,k;
        cin>>n>>c>>k;
        vector<long long> v1(n);
        for(long long i=0;i<n;i++) {
            cin>>v1[i];
        }
        sort(v1.begin(),v1.end());
        long long ans=c;
        for (long long i=0;i<n;i++) {
            if (v1[i]<=ans) {
                long long temp=min(ans-v1[i],k);
                ans+=v1[i]+temp;;
                k=k-temp;
            }
        }
        cout<<ans<<endl;
    }
}    