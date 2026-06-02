# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (count(s.begin(),s.end(),'.')<2) {
            cout<<count(s.begin(),s.end(),'.')<<endl;
        }
        else {
            int ct=0;
            for (int i=0;i<n;i++) {
                if (s[i]=='.') {
                    ct++;
                    if (ct==3) {
                        break;
                    }
                }
                else {
                    ct=0;
                }
            }
            if (ct>2) {
                cout<<2<<endl;
            }
            else {
                cout<<count(s.begin(),s.end(),'.')<<endl;
            }
        }
    }
}