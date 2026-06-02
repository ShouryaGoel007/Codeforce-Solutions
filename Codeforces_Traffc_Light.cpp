#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        int ans=INT_MIN;
        s=s+s;
        if (c=='g')cout<<0<<endl;
        else {
            int check=-1;
            for (int i=0;i<2*n;i++) {
                if (s[i]==c && check==-1) {
                    check=i;
                }
                else if (s[i]=='g' && check!=-1) {
                    ans=max(ans,i-check);
                    check=-1;
                }
            }
            cout<<ans<<endl;
        }
    }
}


// JUST OPTIMIZE THE CODE.