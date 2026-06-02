# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int  n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        sort(v1.begin(),v1.end(),greater<int>());
        for (int a:v1) cout<<a<<" ";
        cout<<endl;
    }
}    