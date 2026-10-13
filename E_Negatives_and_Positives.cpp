//  E. Negatives and Positives

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long check=0;
    long long n_sum=0;
    vector<long long> v1(n);
    for (int i=0;i<n;i++) {
        cin >> v1[i];
        if (v1[i]<0) {
            check++;
            n_sum+=v1[i];
            v1[i]=-v1[i];
        }
    }
    if (check%2==0) {
        cout<<accumulate(v1.begin(),v1.end(),0LL)<<endl;
    }
    else {
        cout<<accumulate(v1.begin(),v1.end(),0LL)-2**min_element(v1.begin(),v1.end())<<endl;
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
