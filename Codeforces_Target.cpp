#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        vector<vector<char>> v1(10,vector<char> (10));
        int ans=0;
        for (int i=0;i<10;i++) {
            for (int j=0;j<10;j++) {
                char c;
                cin>>c;
                v1[i][j]=c;
                if (c=='X') {
                    ans+=min({i,j,9-i,9-j})+1;
                }
            }
        }
        cout<<ans<<endl;
    }
}