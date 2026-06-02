#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    vector<int> v1(n);
    for(int i=0;i<n;i++) {
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    while (q--) {
        int ans=0;
        int x,y;
        cin>>x>>y;
        vector<int> v2(v1.begin()+n-x,v1.begin()+n-x+y);
        for (int i=0;i<v2.size();i++){ ans+=v2[i];}
        cout<<ans<<endl;
    }
}    