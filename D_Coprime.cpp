#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Size 1001 to safely accommodate values up to 1000
    vector<int> v1(1001, 0);
    
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        // Keep the largest index (1-based) where 'a' appears
        v1[a] = i; 
    }
    
    int ans = -1; // Default answer if no pair is found
    
    // Check all combinations of values from 1 to 1000
    for (int i = 1; i <= 1000; i++) {
        if (v1[i] == 0) continue; // Number 'i' is not in the array
        
        for (int j = i; j <= 1000; j++) {
            if (v1[j] == 0) continue; // Number 'j' is not in the array
            
            // If they are coprime, check if their indices yield a new max
            if (__gcd(i, j) == 1) {
                ans = max(ans, v1[i] + v1[j]);
            }
        }
    }
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}