#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        sort(v1.begin(),v1.end());
        vector<int> v2(n);
        int left=0,right=n-1;
        while (left<right) {
            if (v1[left]==v1[right]) {
                v2[left]=right+1;
                for (int i=left+1;i<right;i++) {
                    v2[i]=i-1;
                }
                left=right+1;
                right=n-1;
            }
        }
        for (int i=0;i<n;i++) {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
}    