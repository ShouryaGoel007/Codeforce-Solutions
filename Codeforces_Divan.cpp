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
        vector<int> v2=v1;
        sort(v2.begin(),v2.end());
        vector<pair<int,int>> v3(n);
        for (int i=0;i<n;i++) {
            v3[i]={v1[i],i};
        }
        sort(v3.begin(),v3.end());
        vector<int> v4(n+1);
        v4[0]=0;
        for (int i=1;i<=n;i++) {
            if (i%2==0) {
                v4[i]=
            }}
    }
}    