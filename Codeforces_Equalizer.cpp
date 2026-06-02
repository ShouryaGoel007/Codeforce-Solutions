#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> v1(n);
        for (int i=0;i<n;i++) {
            cin>>v1[i];
        }
        int sum=0;
        for (int a:v1) {
            sum+=a;
        }
        if (sum%2!=0) {
            cout<<"YES"<<endl;
        }
        else if (n*k%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}    