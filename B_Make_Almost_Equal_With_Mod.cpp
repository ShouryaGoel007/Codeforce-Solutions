//  B. Make Almost Equal With Mod

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> v1(n);
    long long odd=0,even=0;
    for (long long i = 0; i < n; i++) {
        cin >> v1[i];
        if (v1[i]%2==0) even++;
        else odd++;
    }
    long long ans=2;
    while (true){
        long long rem=v1[0]%ans;
        for (long long i=1;i<n;i++) {
            long long c=v1[i]%ans;
            if (c!=rem) {
                cout<<ans<<endl;
                return;
            }
        }
        ans*=2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
