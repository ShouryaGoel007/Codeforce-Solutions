#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<vector<int>> v1(n,vector<int> (n));
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cin>>v1[i][j];
            }
        }
        int ct=0;
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (v1[i][j]!=v1[n-i-1][n-j-1]) {
                    ct++;
                }
            }
        }
        ct=ct/2;
        if (ct>k) cout<<"No"<<endl;
        else {
            int l=k-ct;
            if (l%2==0) cout<<"Yes"<<endl;
            else {
                if (n%2==0) cout<<"no"<<endl;
                else cout<<"Yes"<<endl;
            }
        }
    }
}    