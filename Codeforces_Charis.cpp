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
        // int right=v1[0]-1;
        // int left=0;
        // int ans=right-left;
        // while (left<right && v1[left]>=v1[right]){
        //     ans=right-left;
        //     left++;
        //     right=v1[left]-1;
        // }
        // cout<<abs(ans)<<endl;
        int ans=0;
        vector<int> vis(n,0);
        for (int i=0;i<n;i++) {
            if (!vis[i]) {
                ans++;
                int curr=i;
                while (!vis[curr]) {
                    vis[curr]=1;
                    curr=v1[curr]-1;
                }
            }
        }
        cout<<ans<<endl;
    }
}    