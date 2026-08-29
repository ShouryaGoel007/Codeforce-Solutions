#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        unordered_map<int,long long> mpp;
        for(int i=0;i<n;i++) {
            int x=31-__builtin_clz(v1[i]);
            mpp[x]++;
        }
        long long ans=0;
        for (auto it:mpp) {
            auto ct=it.second;
            ans+=ct*(ct-1)/2;
        }
        cout<<ans<<endl;
    }
}    