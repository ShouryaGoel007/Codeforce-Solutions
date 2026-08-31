//  B. Chemistry

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n>>k;
    string s;
    cin >> s;
    unordered_map<char,int> mpp;
    for (auto i:s) {
        mpp[i]++;
    }
    int cnt=0;
    for (auto it: mpp){
        if (it.second%2!=0) {
            cnt+=it.second%2;
        }
    }
    if (cnt>k+1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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
