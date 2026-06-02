# include  <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=-1;
        for (int i=0;i<n;i++) {
            if (s[i]=='L') {
                ans=i;
                break;
            }
        }
        cout<<ans+1<<endl;
    }
}