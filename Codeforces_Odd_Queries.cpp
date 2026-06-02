#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;
    while(t--) {

        int n, q;
        cin >> n >> q;

        vector<long long> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Prefix sum array
        vector<long long> pref(n + 1, 0);
        for(int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + v[i];
        }

        long long total_sum = pref[n];

        while(q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long sub_sum = pref[r] - pref[l - 1];
            long long new_sum = total_sum - sub_sum + (k * (r - l + 1));

            if(new_sum % 2 != 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
