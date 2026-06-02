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
        int odd=0,eve=0;
        for (int i=0;i<n;i++) {
            if (v1[i]%2==0) {
                eve++;
            }
            else {
                odd++;
            }
        }
        if (odd%2==0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}    