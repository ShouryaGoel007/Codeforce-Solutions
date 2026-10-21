//  D. Three Activities

#include <bits/stdc++.h>
using namespace std;

vector<int> op(vector<pair<int,int>> v) {
    sort(v.begin(),v.end());
    vector<int> ans;
    int n=v.size();
    for (int i=n-1;i>=n-3;i--) {
        ans.push_back(v[i].second);
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> v1(n),v2(n),v3(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i].first;
        v1[i].second=i+1;
    }
    for (int i=0;i<n;i++) {
        cin >> v2[i].first;
        v2[i].second=i+1;
    }
    for (int i=0;i<n;i++) {
        cin >> v3[i].first;
        v3[i].second=i+1;
    }
    vector<int> a,b,c;
    a=op(v1);
    b=op(v2);
    c=op(v3);
    int ans=0;
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            for (int k=0;k<3;k++) {
                if (a[i]==b[j] || b[j]==c[k] || c[k]==a[i]) continue;
                else {
                    ans=max(ans, v1[a[i]-1].first+v2[b[j]-1].first+v3[c[k]-1].first);
                }
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
