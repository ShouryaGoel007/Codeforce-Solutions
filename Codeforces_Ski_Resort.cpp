#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while (t--) {
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long> v1(n);
        for (long long i=0; i<n; i++) {
            cin>>v1[i];
        }
        long long left=0, right=-1;
        long long ans=0;
        for (long long i=0; i<n; i++) {
            if (v1[i]<=q) {
                right=i;
            }
            else {
                if (right>=left) {
                    long long check=right-left+1;
                    if (check >= k)
                        ans+=(check-k+1)*(check-k+2)/2;
                }
                left=i+1;
                right=-1;  
            }
        }
        if (right>= left) {
            long long check=right-left+1;
            if (check>= k)
                ans+=(check-k+1)*(check-k+2)/2;
        }
        cout<<ans<<endl;
    }
}