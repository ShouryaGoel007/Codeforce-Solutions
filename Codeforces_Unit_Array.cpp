#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin >> v1[i];
        }
        int sum=0,prod=1;
        for (int a:v1) {sum+=a;prod*=a;}

        if (sum<0 && prod==-1) {
            cout<<abs(sum/2)+1<<endl;
        }
        else if (sum>=0 &&prod==-1) {
            cout<<1<<endl;
        }
        else if (sum<0 && prod==1) {
            cout<<abs(sum/2)+1<<endl;
        }
        else {
            cout<<0<<endl;
        }
    }
}