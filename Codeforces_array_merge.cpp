#include <bits/stdc++.h>
using namespace std;

int cc(vector<int> v1) {
    int cnt=1;
    int ans=0;
    for (int i=0;i<v1.size()-1;i++) {
        if(v1[i]==v1[i+1]) {
            cnt+=1;
        }
        else {
            ans=max(cnt,ans);
            cnt=1;
        }
    }
    ans=max(cnt,ans);
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v1(n), v2(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        for(int i=0;i<n;i++) {
            cin>>v2[i];
        }

    }
}    