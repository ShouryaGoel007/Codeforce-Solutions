#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;            int min=0,max=0;

        if (count(s.begin(),s.end(),'1')<2)cout<<1<<" "<<1<<endl;
        else {
            for (int i=0;i<n-2;i++) {
                if (s[i]=='1' && s[i+2]=='1') {
                    max++;
                    if (s[i+1]=='1')min++;
                }
            }
        }
        int a=count(s.begin(),s.end(),'1');
        cout<<a-min<<" "<<max+a<<endl;
    }
}    