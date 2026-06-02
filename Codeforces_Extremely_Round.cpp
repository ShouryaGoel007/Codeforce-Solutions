#include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--) {
        int n;
        cin>>n;
        int ans=0;
        for (int i=1;i<=n;i+=int(pow(10,floor(log10(abs(i)))))) {
            if (i%int(pow(10,floor(log10(abs(i)))))==0)ans++;
        }
        cout<<ans<<endl;
    }
}    