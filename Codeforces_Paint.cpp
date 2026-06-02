#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) cin >> v[i];

        ll gcd1 = 0, gcd2 = 0;

        for (ll i = 0; i < n; i++) {
            if (i % 2 == 0) gcd1 = __gcd(gcd1, v[i]);
            else gcd2 = __gcd(gcd2, v[i]);
        }

        bool ok1 = true;
        for (ll i = 1; i < n; i += 2) {
            if (v[i] % gcd1 == 0) {
                ok1 = false;
                break;
            }
        }
        bool ok2 = true;
        for (ll i = 0; i < n; i += 2) {
            if (v[i] % gcd2 == 0) {
                ok2 = false;
                break;
            }
        }

        if (ok1 && gcd1 != 0) cout << gcd1 << endl;
        else if (ok2 && gcd2 != 0) cout << gcd2 << endl;
        else cout << 0 << endl;
    }
}