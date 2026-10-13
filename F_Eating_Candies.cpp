//  F. Eating Candies

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin>>v1[i];
    }
    int l=0,r=n-1;
    int ans=0;
    int suml=0,sumr=0;
    while (l<=r) {
        // int flag=0;
        if (suml<=sumr) {
            suml+=v1[l];
            l++;
            // flag=1;
        }
        else {
            sumr+=v1[r];
            r--;
        }
        if (suml==sumr) {
            ans=max(ans,n-r+l-1);
            // l++;r--;
        }
    }
    cout << ans << endl;
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
