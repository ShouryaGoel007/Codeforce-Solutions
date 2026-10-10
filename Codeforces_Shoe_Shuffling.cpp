#include <bits/stdc++.h>
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
        unordered_map<int,vector<int>>mp;
        int i=0;
        for (int a:v1) {
            mp[a].push_back(i);
            i++;
        }
        i=0;
        int flag=0;
        for (auto a:mp) {
            if (a.second.size()<2) {
                cout<<-1<<endl;
                flag=1;
                break;
            }
        }
        if (flag==0) {
            vector<int> ans(n);
            for (auto &it : mp) {
                auto &ct=it.second;
                int size=ct.size();
                for (i=0;i<size;i++) {
                    ans[ct[i]]=((ct[(i+1)%size]));
                }
            }
            for (int i=0;i<n;i++) {
                cout<<ans[i]+1<<" ";
            }
        }

        cout<<endl;
    }
}    