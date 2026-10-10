    //  B. 2D Traveling

    #include <bits/stdc++.h>
    using namespace std;

    void solve() {
        long long n,k,a,b;
        cin >> n>>k>>a>>b;
        a--;b--;
        vector<pair<long long, long long>> v1(n);
        for (long long i=0;i<n;i++) {
            cin>>v1[i].first>>v1[i].second;
        }
        long long ans=abs(v1[a].first-v1[b].first)+abs(v1[a].second-v1[b].second);
        long long min1=2e18,min2=2e18;
        for (long long i=0;i<k;i++) {
            min1=min(min1,abs(v1[i].first-v1[a].first)+abs(v1[i].second-v1[a].second));
            min2=min(min2,abs(v1[i].first-v1[b].first)+abs(v1[i].second-v1[b].second));
        }
        cout<<min(ans,min1+min2)<<endl;
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
