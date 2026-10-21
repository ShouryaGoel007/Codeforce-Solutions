//  C. Assembly via Minimums

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n*(n-1)/2);
    for (int i=0;i<n*(n-1)/2;i++) {
        cin >> v1[i];
    }
    sort(v1.begin(),v1.end());
    vector<int> ans;
    int i=0;
    int a=1;
    while (i<n*(n-1)/2) {
        ans.push_back(v1[i]);
        i+=n-a;
        a++;
    }
    for (int a:ans) {
        cout << a << " ";
    }
    cout<< ans.back();
    cout << endl;
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
