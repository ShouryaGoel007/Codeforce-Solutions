#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >>n;
        vector<float> v1(n);
        for(int i=0;i<n;i++) {
            int d;
            cin>>d;
            v1[i]=logl(d);
        }
        int k=1;
        int flag=1;
        while (k<n) {
            float pre_pro=1;
            for (int i=0;i<k;i++) {
                pre_pro+= (v1[i]);
            }
            float post_pro=1;
            for (int i=k;i<n;i++) {
                post_pro+=(v1[i]);
            }
            if (post_pro==pre_pro) {
                flag=1;
                break;
            }
            else{flag=0;k++;}
        }
        if (flag==1) {cout<<k<<endl;}
        else {cout<<"-1"<<endl;}
    }
}    