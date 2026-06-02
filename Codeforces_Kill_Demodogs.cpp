# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        int const mod=1e9+7;
        // cout<<(337*n*(n+1)*(4*n-1)%(mod))<<endl;
        cout<<((n*(n+1)%mod)*(4*n-1)%mod)*337%mod<<endl;
    }
}    