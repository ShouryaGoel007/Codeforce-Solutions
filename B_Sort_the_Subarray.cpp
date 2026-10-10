//  B. Sort the Subarray

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n),v2(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    for (int i=0;i<n;i++) {
        cin >> v2[i];
    }
    int l=0,r=0;
    // int lf=0,rf=0;
    for (int i=0;i<n;i++) {
        if (v1[i]!=v2[i]) {
            l=i;
            break;
        }
    }
    for (int i=n-1;i>=0;i--) {
        if (v1[i]!=v2[i]) {
            r=i;
            break;
        }
    }
    while (l>0 && v2[l-1]<=v2[l]) {
        l--;
    }
    while (r<n-1 && v2[r]<=v2[r+1]) {
        r++;
    }
    cout<<l+1<<" "<<1+r<<endl;
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
