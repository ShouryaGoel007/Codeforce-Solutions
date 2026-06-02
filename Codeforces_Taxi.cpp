#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    for (int i=0;i<n;i++) {
        cin>>v1[i];
    }
    int ans=count(v1.begin(),v1.end(),4);
    int a=count(v1.begin(),v1.end(),3);
    int b=count(v1.begin(),v1.end(),2);
    int c=count(v1.begin(),v1.end(),1);
    ans+=a;
    c=max(0,c-a);
    ans+=b/2;
    if (b%2==1) {ans++;c=max(0,c-2);}
    ans+=(c+3)/4;
    cout<<ans<<endl;
}    