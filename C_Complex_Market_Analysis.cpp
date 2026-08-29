//  C. Complex Market Analysis

#include<bits/stdc++.h>

using namespace std;
bool cc(long long x) {
    if (x<=1) return 0;
    for (long long i=2;i*i<=x;i++) {
        if (x%i==0) return 0;
    }
    return 1;
}
int main() {
    long long t;
    cin>> t;
    while (t--) {
        long long n,e;
        cin>>n>>e;
        vector<long long> v1(n);
        for(long long i=0;i<n;i++) {
            cin>>v1[i];
        }
        vector<long long> vl(n,0),vr(n,0);
        for (long long i=0;i<n;i++) {
            if (i-e>=0 && v1[i-e]==1) {
                vl[i]=(vl[i-e]+1);
            }
        }
        for (long long i=n-1;i>=0;i--) {
            if (i+e<n && v1[i+e]==1) {
                vr[i]=(vr[i+e]+1);
            }
        }
        long long ans=0;
        for (long long i=0;i<n;i++) {
            if (cc(v1[i])) {
                ans+=(vl[i]+1)*(vr[i]+1)-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
