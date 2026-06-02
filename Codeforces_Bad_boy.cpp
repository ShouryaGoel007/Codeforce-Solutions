# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x1,y1;
        if (c>a/2) {
            x1=1;
            cout<<1<< " ";
        }
        else {
            x1=a;
            cout<<a<<" ";
        }
        if (d>b/2) {
            y1=1;
            cout<<1<<" ";
        }
        else {
            y1=b;
            cout<<b<<" ";
        }
        if (x1==1) {
            cout<<a<<" ";
        }
        else {
            cout<<1<<" ";
        }
        if (y1==1) {
            cout<<b<<" ";
        }
        else {
            cout<<1<<" ";
        }
    }
}    