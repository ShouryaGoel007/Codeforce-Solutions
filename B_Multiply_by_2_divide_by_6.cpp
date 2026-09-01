//  B. Multiply by 2, divide by 6

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    if (n==1) {
        cout << 0 << endl;
        return;
    }
    long long c3=0,c2=0;
    while (n>1) {
        if (n%3==0) {
            c3++;
            n/=3;
        }
        else if (n%2==0) {
            c2++;
            n/=2;
        }
        else {
            cout<<-1<<endl;
            return;
        }
    }
    if (n!=1 || c2>c3) cout << -1 << endl;
    else cout << c3*2 - c2 << endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
