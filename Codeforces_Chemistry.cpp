#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin >>s;
        unordered_map<char,int> mpp;
        for (auto i:s) {
            mpp[i]++;
        }
        if (n==1 & k==0) cout<<"YES"<<endl;
        int flag=1;
        int f=0;
        if ((s.size()-k)%2==0) {
            for (auto i:mpp) {
                if (i.second%2==0) {
                    flag=1;
                }
                else {flag=0;break;}
            }
        }

        else {
            for (auto i:mpp) {
                if (i.second%2==1) {
                    f++;
                }
                if (f==1) {
                    if (i.second%2==0) {
                        flag=1;
                    }
                    else {flag=0;break;}
                }
                else {flag=0;break;}
            }
        }
        if (flag==1) {cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }
}    