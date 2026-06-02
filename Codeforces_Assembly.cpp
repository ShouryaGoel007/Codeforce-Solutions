#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v1(n*(n-1)/2);
        for(int i=0;i<n*(n-1)/2;i++) {
            cin>>v1[i];
        }
        sort(v1.begin(),v1.end());
        int x=n-1,i=0;
        while (x>0) {
            cout<<v1[i]<<" ";
            i+=x;
            x--;
        }
        cout<<v1.back()<<" ";
        cout<<endl;
    }
}    