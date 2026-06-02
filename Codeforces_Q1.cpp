#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        v1[0]=3;
        int j=5;
        for (int i=1;i<n;i++) {
            v1[i]=(j-2)*j;
            j+=2;
        }
        for (int i=0;i<n;i++) {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
}    