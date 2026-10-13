//  B. Difference of GCDs

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,l,r;
    cin >> n>>l>>r;
    // if (r-l+1<n) {
    //     cout<<"NO"<<endl;
    //     return;
    // }
    // cout<<"YES"<<endl;
    vector<int> v1;
    for (int i=1;i<=n;i++) {
        if (((l+i-1)/i)*i>r) {
            cout<<"NO"<<endl;
            break;
        }
        else {
            v1.push_back(((l+i-1)/i)*i);
        }
    }
    if (v1.size()==n) {
        cout<<"YES"<<endl;
        for (auto it: v1) {
            cout<<it<<" ";
        }
    }
    cout<<endl;
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
