# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for (int i=0;i<n;i++) {
            cin>>v1[i];
        }
        int ans=0;
        // while (v1.size()!=0) {
        //     int t=*max_element(v1.begin(),v1.end());
        //     int ind;
        //     for (int i=v1.size()-1;i>=0;i--) {
        //         if (v1[i]==t) {
        //             ind=i;
        //             break;
        //         }
        //     }
        //     v1.erase(v1.begin()+ind,v1.end());
        //     ans++;
        // }
        // cout<<ans<<endl;
    //     int right_max=0;
    //     for (int i=n-1;i>=0;i--) {
    //         right_max=max(right_max,v1[i]);
    //         if (right_max==v1[i]) {ans++;right_max=0;}
    //     }
    //     cout<<ans<<endl;
        int right_max=0;
        for (int i=0;i<n;i++) {
            if (v1[i]>=right_max) {
                ans++;
                right_max=v1[i];
            }
        }
        cout<<ans<<endl;
     }
}