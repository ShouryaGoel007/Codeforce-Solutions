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
        int a=abs(1-v1[0]);
        for (int i=1;i<n;i++) {
            a=gcd(a,abs(-i-1+v1[i]));
        }
        cout<<a<<endl;
    }
}    