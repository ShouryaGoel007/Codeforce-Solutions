#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        if (*min_element(v1.begin(),v1.end())==*max_element(v1.begin(),v1.end())) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            int x=1;
            int y;
            for (int i=1;i<n;i++) {
                if (v1[i]!=v1[0]) {
                    y=i+1;
                }
            }
            for (int i=1;i<n;i++) {
                if (v1[i]!=v1[0]) {
                    cout<<x<<" "<<i+1<<endl;
                }
                else if (v1[i]==v1[0]) {
                    cout<<y<<" "<<i+1<<endl;
                }
            }
        }
    }
}    