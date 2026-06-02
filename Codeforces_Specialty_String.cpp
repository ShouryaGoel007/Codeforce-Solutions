#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char>st;
        if (n==1) cout<<"NO"<<endl;
        else {
            for (int i=0;i<n;i++) {

                    if (!st.empty() && s[i]==st.top()) {
                        st.pop();
                    }
                else
                st.push(s[i]);
            }
            if (st.empty()) {cout<<"YES"<<endl;}
            else {cout<<"NO"<<endl;}
            while (!st.empty()) {
                st.pop();
            }
        }
    }
}    