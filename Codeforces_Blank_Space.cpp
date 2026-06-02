#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }


        int ans=0;
        int temp=0;
        for (int a:v1) {
            if (a==0) {
                temp++;
                ans=max(ans,temp);
            }
            else {
                temp=0;
            }
        }
        cout<<ans<<endl;
    }
}