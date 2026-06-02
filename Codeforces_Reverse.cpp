#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin>>s;
    int a=1;
    for (int i=0;i<n-1;i++) {
        if (s[i]>s[i+1]) {
            cout<<"Yes"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            a=1;
            break;
        }
        else{ a =0;}
    }
    if (a==0) {
         cout<<"No"<<endl;
    }
}    