//  G1. Teleporters (Easy Version)

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,c;
    cin >> n>>c;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    for (int i=0;i<n;i++){
        v1[i]+=i+1;
    }
    sort(v1.begin(),v1.end());
    int ans=0;
    int temp=0;
    for (auto it: v1) {
        temp+=it;
        if (temp<=c) {
            ans++;
        }
        else {
            break;
        }
    }
    cout<<ans<<endl;
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
