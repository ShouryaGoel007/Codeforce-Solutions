#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        vector<int> v2;
        for (int a:v1) {
            v2.push_back(n+1-a);
        }
        for (int a:v2) {
            cout<<a<<" ";
        }
        cout<<endl;
    }
}