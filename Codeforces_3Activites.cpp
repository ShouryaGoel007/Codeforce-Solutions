#include <bits/stdc++.h>
using namespace std;

vector<int> findmax(vector<int> &arr) {
    vector<pair<int,int>> v;
    for (int i=0;i<arr.size();i++) {
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    vector<int> ans(3);
    for (int i=0;i<3;i++) {
        ans[i]=v[i].second;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v1(n),v2(n),v3(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        for(int i=0;i<n;i++) {
            cin>>v2[i];
        }
        for(int i=0;i<n;i++) {
            cin>>v3[i];
        }
        vector<int> ans1=findmax(v1);
        vector<int> ans2=findmax(v2);
        vector<int> ans3=findmax(v3);
        // ans1,ans2 contains only dates on which highest obtained.
        int ans=INT_MIN;
        for (int i=0;i<3;i++) {
            for (int j=0;j<3;j++) {
                for (int k=0;k<3;k++) {
                    if (ans1[i]==ans2[j] ||  ans1[i]==ans3[k] || ans2[j]==ans3[k]) continue;
                    ans=max(ans,v1[ans1[i]]+v2[ans2[j]]+v3[ans3[k]]);
                }
            }
        }
        cout<< ans<<endl;
    }
}    