    //  A. Helmets in Night Light

    #include <bits/stdc++.h>
    using namespace std;

    void solve() {
        long long n,p;
        cin >> n>>p;
        vector<long long> v1(n),v2(n);
        for (long long i=0;i<n;i++) {
            cin >> v1[i];
        }
        for (long long i=0;i<n;i++) {
            cin >> v2[i];
        }
        vector<pair<long long,long long>> v;
        for (long long i=0;i<n;i++) {
            v.push_back({v2[i],v1[i]});
        }
        sort(v.begin(),v.end());
        long long ans=p;
        long long shared=1;
        for (auto it: v) {
            if (it.first>=p) {
                break;
            }
            if (shared+it.second>=n) {
                ans+=(n-shared)*it.first;
                shared=n;
                break;
            }
            else {
                ans+=it.second*it.first;
                shared+=it.second;
            }
        }
        ans+=(n-shared)*p;
        cout << ans << endl;
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
