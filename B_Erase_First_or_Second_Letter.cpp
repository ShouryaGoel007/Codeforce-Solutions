//  B. Erase First or Second Letter

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    int ans=0;
    // st.insert(s[0]);
    for (int i=0;i<n;i++) {
        if (st.find(s[i])==st.end()) {
            ans+=n-i;
        }
        st.insert(s[i]);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
