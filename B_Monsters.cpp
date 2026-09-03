//  B. Monsters

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n>>k;
    vector<pair<int,int>> v1(n);
    for (int i=0;i<n;i++) {
        int a;
        cin >> a;
        v1[i] = {a%k,i+1};
        if (v1[i].first==0) {
            v1[i]={k,i+1};
        }
    }
    sort(v1.begin(),v1.end(),[](pair<int,int>&a ,pair<int,int>&b) {
        if (a.first==b.first) {
            return a.second<b.second;
        }
        return a.first>b.first;
    });
    for (int i=0;i<n;i++) {
        cout << v1[i].second << " ";
    }
    cout << endl;
    return;

    // priority_queue<pair<int,int>> pq;

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
