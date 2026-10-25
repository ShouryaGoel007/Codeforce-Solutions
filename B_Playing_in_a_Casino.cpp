//  B. Playing in a Casino

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,m;
    cin >> n>>m;
    vector<vector<long long>> v1(n,vector<long long>(m));
    for (long long i=0;i<n;i++) {
        for (long long j=0;j<m;j++) {
            cin >> v1[i][j];
        }
    }
    long long a=0;
    long long ans=0;
    while (a!=m) {
        vector<long long> temp;
        for (long long i=0;i<n;i++) {
            temp.push_back(v1[i][a]);
        }
        sort(temp.rbegin(),temp.rend());
        long long multiple=n-1;
        for (auto it: temp) {
            ans+=multiple*it;
            multiple-=2;
        }
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
