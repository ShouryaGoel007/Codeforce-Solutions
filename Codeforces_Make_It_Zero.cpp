#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v1(n);
        for(int i=0;i<n;i++) {
            cin >> v1[i];
        }
        // if (count(v1.begin(),v1.end(),0)>=1) {
        //     cout<<1<<endl;
        //     cout<<1<<" "<<n<<endl;
        // }
        // for (int i=0;i<n;i++) {
        //     if (count(v1.begin(), v1.end(), v1[i]) >= 1) {
        //         cout << 1 << endl;
        //         cout << i << " " << find(v1.begin() + i + 1, v1.end(), v1[i]) - v1.begin() << endl;
        //         break;
        //     }
        // }
        // for (int i=0;i<n;i++) {
        //     for (int j=i+1;j<n;j++) {
        //         if (v1[i]^v1[j]==0) {
        //             cout<<1<<endl;
        //             cout<<i+1<<" "<<j+1<<endl;
        //         }
        //     }
        // }
        if (n%2==0) {
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else {
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
}    