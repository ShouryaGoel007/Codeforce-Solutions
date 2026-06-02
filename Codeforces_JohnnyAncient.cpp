#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        long long a,b;
        cin >> a >> b;

        if(a == b) {
            cout << 0 << endl;
            continue;
        }

        long long big = max(a,b);
        long long small = min(a,b);

        if(big % small != 0) {
            cout << -1 << endl;
            continue;
        }

        long long ratio = big / small;

        double x = log2((double)ratio);
        long long n = round(x);

        if((1LL << n) != ratio) {
            cout << -1 << endl;
            continue;
        }

        long long ans = n/3 + (n%3)/2 + (n%3)%2;

        cout << ans << endl;
    }
}