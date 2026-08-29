#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for (int i=0;i<n;i++) {
            cin>>v1[i];
        }        int ans;

        for (int i=0;i<n;i++) {
            if (v1[i]!=i) {
                ans=v1[i];
                break;
            }
        }
        for (int i=0;i<n;i++) {
            if (v1[i]!=i) {
                ans&=v1[i];
            }
        }
        cout<<ans<<endl;
    }
}