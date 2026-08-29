//  C. Two TVs

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,int> diff;
    for (int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        diff[a-1]++;
        diff[b]--;
    }
    int cnt=0;
    for (auto it: diff) {
        cnt+=it.second;
        if (cnt>2) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
