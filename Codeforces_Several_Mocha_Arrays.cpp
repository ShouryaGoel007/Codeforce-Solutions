#include <bits/stdc++.h>
using namespace std;

// 1 -> Good       0-> Bad

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        int flag=0;
        for (int i=0;i<n;i++) {
            for (int j=i;j<n;j++) {
                if (gcd(v1[i],v1[j])==1 || gcd(v1[i],v1[j])==2) {
                    flag=1;
                    break;
                }
            }
        }
        if (flag==0) {
            cout<<"No"<<endl;
        }
        else {
            cout<<"Yes"<<endl;
        }
    }
}