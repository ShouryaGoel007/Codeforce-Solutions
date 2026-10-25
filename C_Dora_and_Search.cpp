//  C. Dora and Search

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
    }
    int mn=1,mx=n;
    int l=0,r=n-1;
    while(l<r) {
        if(v1[l]==mn) {
            l++;
            mn++;
        }
        else if(v1[l]==mx) {
            l++;
            mx--;
        }
        else if(v1[r]==mx) {
            r--;
            mx--;
        }
        else if(v1[r]==mn) {
            r--;
            mn++;
        }
        else {
            break;
        }
    }
    if(l<r) cout<<l+1<<" "<<r+1<<endl;
    else cout<<-1<<endl;
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
