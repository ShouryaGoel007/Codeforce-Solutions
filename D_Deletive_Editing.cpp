//  D. Deletive Editing

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // int n;
    // cin >> n;
    string s,t;
    cin >> s >> t;
    long long n=s.size();
    long long m=t.size();
    long long a=m-1;
    unordered_map<char,long long> mp;
    for (auto it: t) {
        mp[it]++;
    }
    for (long long i=n-1;i>=0;i--) {
        char curr=s[i];
        if (mp[curr]>0) {
            if (a>=0 && curr==t[a]) {
                a--;
                mp[curr]--;
            }
            else {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    if (a<0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
