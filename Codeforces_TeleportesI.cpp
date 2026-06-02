# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n,c;
        cin>>n>>c;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        vector<int> v2(n);
        for(int i=0;i<n;i++) {
            v2[i]=v1[i]+i+1;
        }
        sort(v2.begin(),v2.end());
        int ans=0;
        for (int i=0;i<n;i++) {
            if (v2[i]<=c) {
                c-=v2[i];
                ans++;
            }
            else {
                break;
            }
        }
        cout<<ans<<endl;
    }
}    