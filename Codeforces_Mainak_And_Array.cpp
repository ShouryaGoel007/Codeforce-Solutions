# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<long long> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        long long a=v1[n-1]-v1[0];
        for (long long i:v1) {
            a=max(i-v1[0],a);
        }
        for (long long i:v1) {
            a=max(-i+v1[n-1],a);
        }
        for (int i=0;i<n-1;i++) {
            a=max(-v1[i+1]+v1[i],a);
        }
        cout<<a<<endl;
    }
}    