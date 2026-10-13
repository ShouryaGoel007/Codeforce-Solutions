//  C. Yet Another Card Deck

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,q;
    cin >> n>>q;
    vector<int> v1(n),v2(q);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    for (int i=0;i<q;i++) {
        cin >> v2[i];
    }
    set<int> st;
    unordered_map<int,int>mpp;
    for (int i=0;i<n;i++) {
        if (st.find(v1[i])==st.end()) {
            mpp.insert({v1[i],i+1});
        }
        st.insert(v1[i]);
    }
    // int k=0;
    for (int i=0;i<q;i++) {
        cout<<mpp[v2[i]]<<" ";
        for (auto &it: mpp) {
            if (it.second<mpp[v2[i]])
                it.second=it.second+1;
        }
        mpp[v2[i]]=1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
