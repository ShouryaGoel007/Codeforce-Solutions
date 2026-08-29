//  B. Karen and Coffee

#include<bits/stdc++.h>

using namespace std;
const int MAX_TEMP=200005;
int main() {
    int n,q,k;
    cin>>n>>k>>q;
    vector<int> diff(MAX_TEMP,0);
    for (int i=0;i<n;i++) {
        int l,r;
        cin>>l>>r;
        diff[l]++;
        diff[r+1]--;
    }
    vector<int> valid(MAX_TEMP,0);
    int sum=0;
    for (int i=0;i<MAX_TEMP;i++) {
        sum+=diff[i];
        if (sum>=k) {
            valid[i]=1;
        }
    }
    vector<int> pre(MAX_TEMP,0);
    for (int i=0;i<MAX_TEMP;i++) {
        pre[i]=valid[i]+pre[i-1];
    }
    while (q--) {
        int a,b;
        cin>>a>>b;
        cout<<pre[b]-pre[a-1]<<endl;
    }
    return 0;
}
