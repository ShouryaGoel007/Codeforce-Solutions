//  A. SauSaGe Bank

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n>>k;
    int ans=2*k;
    int i =1;
    while (n-k>0) {
        ans+=2*i;
        k++;
        i*=2;
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
