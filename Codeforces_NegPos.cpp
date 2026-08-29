#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        vector<long long> v1(n);
        for (long long i=0;i<n;i++) {
            cin>>v1[i];
        }
        long long sum=0;
        for (long long i=0;i<n;i++) sum+=abs(v1[i]);
        long long cnt=0;
        for (auto it: v1) {
            if (it<0) cnt++;
        }
        cnt=cnt%2;
        if (cnt==0) cout<<sum<<endl;
        if (cnt==1) {
            vector<long long> v2;
            for (long long i=0;i<n;i++) {
                v2.push_back(abs(v1[i]));
            }                       sort(v2.begin(),v2.end());
         cout<<sum-2*v2[0]<<endl;

        }
    }
}    