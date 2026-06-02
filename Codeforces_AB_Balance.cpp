# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        string a="";
        int n=s.size();
        if (s[0]==s[n-1]){ cout<<s<<endl;}
        else {
            a+=s[0];
            for (int i=1;i<n-1;i++) {
                a+=s[i];
            }
            a+=s[0];
            cout<<a<<endl;
        }
    }
}    