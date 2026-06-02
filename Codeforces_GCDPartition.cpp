# include  <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        vector<long long> v1(n);
        for(long long i=0;i<n;i++) {
            cin>>v1[i];
        }
        long long sum=0;
        for (long long a:v1) {
            sum+=a;
        }
        long long ans=0;
        long long l=0;
        for (long long i=0;i<n-1;i++) {
            sum-=v1[i];
            l+=v1[i];

            ans=max(ans,gcd(sum,l));
        }
        cout<<ans<<endl;
    }
}