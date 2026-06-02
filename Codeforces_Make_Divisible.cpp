#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n= s.size();
        int ans=1e9;
        for (int i=n-1;i>=0;i--) {
            if (s[i]=='0') {
                for (int j=i-1;j>0;j--) {
                    if (s[j]=='0') {
                        ans=min(ans,n-j-2);
                        break;
                    }
                }
                for (int j=i-1;j>=0;j--) {
                    if (s[j]=='5') {
                        ans=min(ans,n-j-2);
                        break;
                    }
                }
            }
            if (s[i]=='5') {
                for (int j=i-1;j>=0;j--) {
                    if (s[j]=='2') {
                        ans=min(ans,n-j-2);
                        break;
                    }
                }
                for (int j=i-1;j>=0;j--) {
                    if (s[j]=='7') {
                        ans=min(ans,n-j-2);
                    }
                }
            }
        }

        cout<<ans<<endl;
    }
}