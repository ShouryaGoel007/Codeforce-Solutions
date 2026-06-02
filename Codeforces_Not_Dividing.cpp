#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] == 1) v[i] = 2;   // Fix the real issue
        }

        for(int i = 0; i < n - 1; i++) {
            if(v[i+1] % v[i] == 0) {
                v[i+1]++;
            }
        }

        for(long long x : v) {
            cout << x << " ";
        }
        cout << "\n";
    }
}
