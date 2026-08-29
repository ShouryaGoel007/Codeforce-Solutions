//  C. Helping the Nature

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> v1(n);
    for (long long i=0;i<n;i++) {
        cin >> v1[i];
    }
    long long diff=0;
    long long change=0;
    for (long long i=1;i<n;i++) {
        long long t_diff=(v1[i]-v1[i-1]);
        diff+=abs(t_diff);
        if (t_diff<0) {
            change+=abs(t_diff);
        }
    }
    cout<<diff+abs(change-v1[0])<<endl;
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
