#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        const long long mod=(1e9 + 7);
        vector<int> v1(n),v2(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        for(int i=0;i<n;i++) {
            cin>>v2[i];
        }
        sort(v1.begin(),v1.end(),greater<int>());
        sort(v2.begin(),v2.end(),greater<int>());
        long long j=0;

        if (n==1) {
            if (v1[0]>v2[0]) {
                cout<<1<<endl;
            }
            else {
                cout<<0<<endl;
            }
        }
        else{
            long long ans=1;
            for (int i=0;i<n;i++) {
                while (j<n && v1[j]>v2[i]) {
                    j++;
                }

                ans=ans*(j-i)%mod;
            }
            cout<<ans<<endl;
        }
    }
}