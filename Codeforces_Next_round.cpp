#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v1(n);
    for(int i=0;i<n;i++) {
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end(),greater<int>());
    int a=v1[k-1];
    int ans=0;
    for (int i=0;i<n;i++) {
        if (v1[i]>=a && v1[i]>0) {
            ans++;
        }
    }
    cout<<ans<<endl;
}    