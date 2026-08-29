//  C. Little Girl and Maximum Sum

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    vector<long long> v1(n);
    for (long long i = 0; i < n; i++) cin >> v1[i];
    vector<long long> diff(n+1,0);
    for (long long i = 0; i < q; i++) {
        long long a,b;
        cin >> a >> b;
        diff[a-1]++;
        diff[b]--;
    }
    vector<long long> pre(n+1,0);
    for (long long i=1;i<=n;i++) {
        pre[i]=pre[i-1]+diff[i-1];
    }
    sort(pre.rbegin(),pre.rend());
    sort(v1.rbegin(),v1.rend());
    long long cnt=0;
    for (long long i=0;i<n;i++) {
        cnt+=pre[i]*v1[i];
    }
    cout<<cnt<<endl;
    return 0;
}
