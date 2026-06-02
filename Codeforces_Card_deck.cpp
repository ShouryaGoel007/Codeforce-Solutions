#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // pos[color] = position of topmost occurrence (1-based)
    vector<int> pos(51, 0);

    // store first occurrence
    for (int i = 0; i < n; i++) {
        if (pos[a[i]] == 0) {
            pos[a[i]] = i + 1;
        }
    }

    while (q--) {
        int t;
        cin >> t;

        int curr = pos[t];
        cout << curr << " ";

        // shift all colors above it
        for (int c = 1; c <= 50; c++) {
            if (pos[c] < curr) {
                pos[c]++;
            }
        }

        // move t to top
        pos[t] = 1;
    }
}