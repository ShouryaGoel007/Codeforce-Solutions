#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >>n;
        vector<char> v1(n);
        for (int i=0;i<n;i++) {
            cin>>v1[i];
        }
        int ans=2;
        int temp=2;
        for (int i=0;i<n-1;i++) {
            if (v1[i]==v1[i+1]) {
                temp++;
                ans=max(ans,temp);
            }
            else {
                temp=2;
            }
        }
        cout<<ans<<endl;
    }
}    