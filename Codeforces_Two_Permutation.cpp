#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (n == 1 || a+b+2<=n || (a==b && a==n)) cout << "YES\n";
        else cout << "NO\n";
    }
}
