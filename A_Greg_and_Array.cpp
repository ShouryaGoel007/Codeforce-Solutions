//  A. Greg and Array
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> v1(n+1);
    for (long long i=1;i<=n;i++) {
        cin>>v1[i];
    }
    vector<long long> l(m+1),r(m+1),d(m+1);
    for (long long i=1;i<=m;i++) {
        cin>>l[i]>>r[i]>>d[i];
    }
    vector<long long> freq(m+2,0);
    for (long long i=1;i<=k;i++) {
        long long a,b;
        cin>>a>>b;
        freq[a]++;
        freq[b+1]--;
    }
    for (long long i=1;i<=m;i++) {
        freq[i]+=freq[i-1];
    }
    vector<long long> diff(n+2,0);
    for (long long i=1;i<=m;i++) {
        diff[l[i]]+=(long long)d[i]*freq[i];
        diff[r[i]+1]-=(long long)d[i]*freq[i];
    }
    for (long long i=1;i<=n;i++) {
        diff[i]+=diff[i-1];
    }
    for (long long i=1;i<=n;i++) {
        cout<<v1[i]+diff[i]<<" ";
    }
    cout<<endl;
}
