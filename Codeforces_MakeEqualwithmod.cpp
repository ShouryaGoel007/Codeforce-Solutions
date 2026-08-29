#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<int> v1(n);
        int odd=0, even=0;// 0 means all even.
        for (int i=0;i<n;i++) {
            cin >> v1[i];
            if (v1[i]%2!=0) {
                odd =1;
            }
            else {
                even=1;
            }
        }
        int k=1;
        while (true) {
            bool odd=false, even=false;
            for (auto &it: v1) {
                if (it%2==0) even=true;
                else odd=true;
            }
            if (odd && even){
                cout<<2*k<<endl;
                break;
            }
            for (auto &it: v1) {
                it/=2;

            }
            k*=2;
        }
    }
}    