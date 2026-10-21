//  D. Plus Minus Permutation

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,x,y;
    cin >> n>>x>>y;
    long long a=n/x;
    long long b=n/y;
    long long c=n/(lcm(x,y));
    a=a-c;
    b=b-c;
    long long x1=0,y1=0;
    // cout<<a<<" "<<b<<" "<<c<<endl;
    x1=(a)*(2*n-a+1)/2;     //-a*(a+1))/2;
    y1=b*(b+1)/2;
    cout<<x1-y1<<endl;
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
