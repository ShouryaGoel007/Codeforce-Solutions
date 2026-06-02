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
        bool flag=true;
        for (int i = n-2; i >= 0; i--) {
            while (v1[i] >= v1[i+1] && v1[i] > 0) {
                v1[i] /= 2;
                ans++;
            }
            if (v1[i] >= v1[i+1]) {
                flag=false;
            }
        }
        if (flag==false) {cout <<-1<<endl;}
        else
        cout<<ans<<endl;
    }
}    