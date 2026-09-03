//  B. Array merging

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>v1(n),v2(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    for (int i=0;i<n;i++) {
        cin >> v2[i];
    }
    queue<int> q1,q2;
    for (int i=0;i<n;i++) {
        q1.push(v1[i]);
        q2.push(v2[i]);
    }
    int ans=0;
    int temp=0;
    while (!q1.empty() && !q2.empty()) {
        auto it1=q1.front();
        auto it2=q2.front();
        if (it1==it2) {
            temp+=2;
            q1.pop();
            q2.pop();
        }
        else {
            ans=max(ans,temp);
            temp=0;
            q1.pop();
        }
    }

    for (int i=0;i<n;i++) {
        q1.push(v1[i]);
        q2.push(v2[i]);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
