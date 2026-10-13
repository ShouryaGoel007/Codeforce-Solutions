//  B. A Perfectly Balanced String?

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    set<char> st;
    for (auto i:s) {
        st.insert(i);
    }
    int unique=st.size();
    int n=s.size();
    int flag=0;
    for (int i=0;i<n-unique;i++) {
        if (s[i]!=s[i+unique]) {
            flag=1;
            break;
        }
    }
    if (flag==0) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
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
