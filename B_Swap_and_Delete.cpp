//  B. Swap and Delete

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // int n;
    // cin >> n;
    string s;
    cin>>s;
    string t="";
    int c0=0,c1=0;
    for (auto it: s) {
        if (it=='0') c0++;
        else c1++;
    }
    if (c0==c1) {cout<<0<<endl; return;}
    int cost=0;
    for (int i=0;i<s.size();i++) {
        if (s[i]=='0') {
            if (c1>0) {
                t+='1';
                c1--;
            }
            else {
                cout<<s.size()-i<<endl;
                return;
            }
        }
        else if (s[i]=='1') {
            if (c0>0) {
                t+='0';
                c0--;
            }
            else {
                cout<<s.size()-i<<endl;
                return;
            }
        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
