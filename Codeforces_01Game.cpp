# include  <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n=s.size();
        int z=0;
        stack<char> st;
        for (int i=0;i<n;i++) {
            if (!st.empty() && st.top()!=s[i]) {
                st.pop();
                z+=1;
            }
            else
            st.push(s[i]);
        }
        if (z%2!=0) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
}