//  B. Valerii Against Everyone

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    set<int> st;
    for (int i=0;i<n;i++) {
        st.insert(v1[i]);
    }
    if (st.size()==v1.size()) {cout<<"NO"<<endl;}
    else {cout<<"YES"<<endl;}
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
