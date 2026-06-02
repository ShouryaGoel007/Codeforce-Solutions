#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--) {
        int a,b,xk,yk,xq,yq;
        cin >>a>>b;
        cin >>xk>>yk;
        cin >>xq>>yq;
        set<pair<int,int>> king;
        set<pair<int,int>> queen;
        vector<int> v1={-1,1,-1,1};
        vector<int> v2={-1,-1,1,1};
        for (int i=0;i<4;i++) {
            king.insert({xk+v1[i]*a,yk+v2[i]*b});
            king.insert({xk+v1[i]*b,yk+v2[i]*a});
            queen.insert({xq+v1[i]*b,yq+v2[i]*a});
            queen.insert({xq+v1[i]*a,yq+v2[i]*b});
        }
        int ans=0;
        for (auto a:king) {
            if (queen.find(a)!=queen.end())ans++;
        }
        cout<<ans<<endl;
    }
}    