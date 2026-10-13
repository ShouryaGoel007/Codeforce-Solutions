//  B. JoJo's Incredible Adventures

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // long long n;
    // cin >> n;
    string s;
    cin>>s;
    if (s.find('0')==string::npos) {
        long long n = s.size();
        cout<<n*n<<endl;
    }
    else{
        long long n=s.size();
        long long tog=0,temp=0;

        for (long long i=0;i<n+n;i++) {
            if (s[i%n]=='1') {
                temp++;
                tog=max(tog,temp);
            }
            else {
                temp=0;
            }
        }
        tog=min(tog,n);
        long long ans=LLONG_MIN;
        for (long long i=0;i<=tog;i++) {
            ans=max(ans,i*(tog-i+1));
        }
        cout<<ans<<endl;
    }
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
