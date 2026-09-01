//  D. Balanced Round

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n>>k;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    sort(v1.begin(),v1.end());
    int ans=1;
    int r=1;
    int temp=1;

    while (r<n) {
        if (v1[r]-v1[r-1]<=k) {
            temp++;
            r++;
        }
        else {
            ans=max(ans,temp);
            temp=1;
            r++;
        }
    }
    cout << n-max(ans,temp) << endl;
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
