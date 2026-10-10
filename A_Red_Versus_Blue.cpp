//  A. Red Versus Blue

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int b,r;
    cin>>r>>b;
    string s;
    int a=r/(b+1);
    int rem=r%(b+1);
    int c=0;
    int copy=a;
    if (rem>0) {
        a=copy+1;
        rem--;
    }
    while (c<n && b>0) {
        // a times r bharunga phir ek baari b
        if (a>0) {
            s+='R';
            a--;
            r--;
        }
        else {
            s+='B';
            b--;
            if (rem>0) {
                a=copy+1;
                rem--;
            }
            else {
                a=copy;
            }
        }
        c++;
    }
    while (r--) {
        s+='R';
    }

    cout<<s<<endl;
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
