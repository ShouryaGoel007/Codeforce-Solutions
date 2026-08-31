//  B. Gigantomachy

#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n,m;
    cin >> n>>m;
    vector<int> v1(n),v2(m);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    for (int i=0;i<m;i++) {
        cin >> v2[i];
    }
    int a=0,b=0;
    for (int i=0;i<n-1;i++) {
        a+=v1[i]-v1[i+1]+1;
    }
    a+=v1[n-1];
    for (int i=1;i<m;i++) {
        b+=-v2[i]+v2[i-1]+1;
    }
    b+=v2[m-1];
    if (b>a) return 2;
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        cout<<solve()<<endl;
    }

    return 0;
}
