//  C. Contrast Value
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    int ans=1;
    if (n==1) {
        cout<<1<<endl;
        return;
    }
    int dir=0;
    for (int i=1;i<n;i++) {
        if (v1[i]>v1[i-1]) {
            dir=1;
            break;
        }
        else if (v1[i]<v1[i-1]) {
            dir=-1;
            break;
        }
    }
    if (dir==0) {
        cout<<1<<endl;
        return;
    }
    for (int i=1;i<n;i++) {
        if (v1[i]>v1[i-1] && dir==-1) {
            ans++;
            dir=1;
        }
        else if (v1[i]<v1[i-1] && dir==1) {
            ans++;
            dir=-1;
        }
    }
    cout<<ans+1<<endl;
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
