#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v1(n);
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }
        int flag = 0;
        map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[v1[i]]++;
        }
        for (auto i : mpp) {
            if (mpp.find(i.first + k) != mpp.end() ||
                mpp.find(i.first - k) != mpp.end()) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}