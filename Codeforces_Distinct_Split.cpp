 #include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> pref(n),sex(n);
        set<char> st;
        for (int i=0;i<n;i++) {
            st.insert(s[i]);
            pref[i]=st.size();
        }
        st.clear();
        for (int i=n-1;i>=0;i--) {
            st.insert(s[i]);
            sex[i]=st.size();
        }
        int ans=-1;
        for (int i=0;i<n-1;i++) {
            ans=max(ans,pref[i]+sex[i+1]);
        }
        cout<<ans<<endl;
    }
}