#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x - 2 * y < 0 || x + 4 * y < 0) cout << "NO" << endl;
        else if ((x + 4 * y) % 3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}