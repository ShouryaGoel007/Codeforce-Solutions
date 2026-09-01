//  B. Sum of Medians

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k;
    cin >> n >> k;
    vector<long long> v1(n*k);
    for (long long i=0;i<n*k;i++) {
        cin >> v1[i];
    }
    long long a=n/2;
    long long ans=0;
    long long b=k;
    while (b--) {
        ans+=v1[n*k-a-1];
        a+=n/2;
        a++;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
