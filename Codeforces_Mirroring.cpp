#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<vector<int>> v1(n,vector<int>(n) );
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                cin>>v1[i][j];
            }
        }
        int ans=0;
        for (int i=0;i<n/2;i++) {
            for (int j=0;j<(n+1)/2;j++) {
                int a=v1[i][j];
                int b=v1[j][n-i-1];
                int c=v1[n-i-1][n-j-1];
                int d=v1[n-j-1][i];

                int ones = a+b+c+d;
                ans += min(ones, 4-ones);
            }
        }
        cout<<ans<<endl;
    }
}    