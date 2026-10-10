//  B. Luke is a Foodie

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int changes = 0;

    // Start the intersection window with the first food
    int current_L = v[0] - x;
    int current_R = v[0] + x;

    for (int i = 1; i < n; i++) {
        int next_L = v[i] - x;
        int next_R = v[i] + x;

        // Shrink the window to the overlapping zone
        current_L = max(current_L, next_L);
        current_R = min(current_R, next_R);

        // If Left > Right, the overlap is completely gone
        if (current_L > current_R) {
            changes++;
            // Reset the window to the current food's range
            current_L = next_L;
            current_R = next_R;
        }
    }

    cout << changes << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
