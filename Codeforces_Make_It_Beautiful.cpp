#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        if (n==2) {
            if ( v1[0]==v1[1]) {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
                sort(v1.begin(),v1.end());
                for (int a:v1) {
                    cout<<a<<" ";
                }
            }
        }
        else{
            sort(v1.begin(),v1.end(),greater<int>());
            if (v1[0]==v1[n-1]) {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
                cout<<v1[n-1]<<" ";
                for (int i=0;i<n-1;i++) {
                    cout<<v1[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}    