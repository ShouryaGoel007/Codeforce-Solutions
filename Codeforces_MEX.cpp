# include  <bits/stdc++.h>
using namespace std;
int main(){
    // zero is a must;
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        if (count(v1.begin(),v1.end(),0)==0) {
            cout<<"NO"<<endl;
        }
        else if (count(v1.begin(),v1.end(),0)==1) {
            cout<<"YES"<<endl;
        }
        else {
            if (count(v1.begin(),v1.end(),1)>0) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
}    