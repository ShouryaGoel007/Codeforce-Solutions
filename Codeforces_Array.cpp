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
        for (int i=0;i<n;i++) {
            int a=0,b=0;
            for (int j=i+1;j<n;j++) {
                if (v1[i]>v1[j])a++;
                else if (v1[i]<v1[j]) b++;
            }
            cout<<max(a,b)<<" ";
        }
        cout<<endl;
    }
}    