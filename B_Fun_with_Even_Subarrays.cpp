//  B. Fun with Even Subarrays

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    int i=n-1;
    while (i>=0 && v1[i]==v1[n-1]) {
        i--;
    }int ans=0;
    if (i==-1) {
        cout<<0<<endl;
        // return;
    }

    else
    {
        while (i>=0) {
            i-=n-i-1;
            ans++;
            while (i>=0 && v1[i]==v1[n-1]) {
                i--;
            }
        }    cout<<ans<<endl;

    }
    return;
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
