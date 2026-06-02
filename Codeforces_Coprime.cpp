# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        int ans=-1;
        int i=n-1,j=n-1;
        while (i>=0 && j>=0){
            if (__gcd(v1[i],v1[j])==1) {
                ans=max(ans,i+j+2);
            }
            i--;
            if (i==-1) {j--;i=j;}
        }
        cout<<ans<<endl;
    }
}    