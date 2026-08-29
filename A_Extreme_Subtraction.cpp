//  A. Extreme Subtraction

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
        int p=0;
        for (int i=1;i<n;i++) {
            if (v1[i]<v1[i-1]) {
                p+=v1[i-1]-v1[i];
            }
            // else {
            //     break;
            // }
        }
        if (p>v1[0]) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
