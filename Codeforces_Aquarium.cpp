#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll mid, vector<int>& v1, int x) {
    ll sum=0;
    for (int i=0;i<v1.size();i++) {
        if (v1[i]<mid) {
            sum+=mid-v1[i];
        }
    }
    return sum<=x;
}

int main(){
    int t;
    cin>>t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        vector<int> v1(n);
        for (int i=0;i<n;i++) {
            cin>>v1[i];
        }
        ll a=1,b=1e12,ans=-1;
        while (a<=b) {
            ll mid=a+(b-a)/2;
            if (check(mid,v1,x)) {
                ans=mid;
                a=mid+1;
            }
            else {
                b=mid-1;
            }
        }
        cout<<ans<<endl;

    }
}    