//  A. Young Physicist

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> v1(n,vector<int>(3));
    for (int i=0;i<n;i++) {
        for (int j=0;j<3;j++) {
            cin >> v1[i][j];
        }
    }
    int x=0,y=0,z=0;
    for (auto i:v1) {
        x+=i[0];
        y+=i[1];
        z+=i[2];
    }
    if (x==0 && y==0 && z==0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
