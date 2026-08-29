#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> inputarray(n*(n-1)/2);
        for(int i=0;i<n*(n-1)/2;i++) {
            cin>>inputarray[i];
        }
        sort(inputarray.begin(),inputarray.end());
        int a=n-1,i=0;
        while (a>0) {
            cout<<inputarray[i]<<" ";
            i+=a;
            a--;
        }
        cout<<inputarray.back()<<" ";
        cout<<endl;
    }
}    