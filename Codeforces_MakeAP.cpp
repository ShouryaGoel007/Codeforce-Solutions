#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int check;

        if ((a+c)==b*2) {
            cout<<"YES"<<endl;
        }
        else if ((a+c)>b*2) {
            if ((a+c)%2==0) {
                check=(a+c)/2;
                if (check%b==0) {
                    cout<<"YES"<<endl;
                }
                else {
                    cout<<"NO"<<endl;
                }
            }
            else {
                cout<<"NO"<<endl;
            }
        }
        else {
            if ((2*b-c)%a==0) {
                cout<<"YES"<<endl;
            }
            else if ((2*b-a)%c==0) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
}    