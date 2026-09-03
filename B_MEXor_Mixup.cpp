//  B. MEXor Mixup

#include <bits/stdc++.h>
using namespace std;
int xorr(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}
void solve() {
    int a,b;
    cin >> a>>b;
    int xbase=xorr(a-1);
    if (xbase==b) {
        cout<<a<<endl;
    }
    else if ((xbase^a)!=b) {
        cout<<a+1<<endl;
    }
    else {
        cout<<a+2<<endl;
    }
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
