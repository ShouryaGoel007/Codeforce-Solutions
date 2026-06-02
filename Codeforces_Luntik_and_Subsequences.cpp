# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        vector<long long> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        long long num1=count(v1.begin(),v1.end(),1);
        long long num2=count(v1.begin(),v1.end(),0);
        cout<<num1*(1LL<<num2)<<endl;
    }
}    