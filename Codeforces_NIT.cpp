# include  <bits/stdc++.h>
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
        int ans=0;
        int seg=0;
        if (count(v1.begin(),v1.end(),0)==n) cout<<0<<endl;
        else {
            for (int i=0;i<n;i++) {
                if (v1[i]!=0 && (i==0||v1[i-1]==0)) {
                    seg++;
                }
            }
            if (seg==1) cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
}    