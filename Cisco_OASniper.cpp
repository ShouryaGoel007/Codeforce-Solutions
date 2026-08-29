#include <bits/stdc++.h>
using namespace std;
// struct inputdata {
//     int n,w,k;
//     vector<pair<int,int>> v;
// };
// int solve(const inputdata& d) {
//     int init_t=d.v[0].first;
//     int left=0;
//     unordered_map<int,int> mpp;
//     for (auto it: d.v) {
//         int t=it.first, u=it.second;
//
//         if (t-init_t<=d.w) {
//             mpp[u]++;
//             if (mpp[u]>=d.k) return u;
//         }
//         while (t-init_t>d.w) {
//             mpp[d.v[left].second]--;
//             left+=1;
//             init_t=d.v[left].first;
//         }
//     }
//     return -1;
// }
// int main() {
//     inputdata d;
//     int n=8,w=5,k=2;
//     d.n=n; d.w=w; d.k=k;
//     for (int i = 0; i < n; i++) {
//         int t, u;
//         cin >> t >> u;
//         d.v.push_back({t, u});
//     }
//     cout<<solve(d);
// }


// Change return type to long long to prevent overflow
long long solve(vector<int> v, int k) {
    int n = v.size();

    // Store positions of 1s (left-to-right) and 0s (right-to-left)
    vector<int> ones_idx, zeros_idx;
    vector<int> orig_zeros_after(n, 0);
    vector<int> orig_ones_before(n, 0);

    int o = 0;
    for (int i = 0; i < n; i++) {
        orig_ones_before[i] = o;
        if (v[i] == 1) {
            o++;
            ones_idx.push_back(i);
        }
    }

    int z = 0;
    for (int i = n - 1; i >= 0; i--) {
        orig_zeros_after[i] = z;
        if (v[i] == 0) {
            z++;
            zeros_idx.push_back(i); // zeros_idx[0] is the rightmost 0
        }
    }

    int x = 0; // count of 1s flipped to 0 from the left
    int y = 0; // count of 0s flipped to 1 from the right
    int O = ones_idx.size();
    int Z = zeros_idx.size();

    // Process up to k flips
    while (k > 0 && x < O && y < Z) {
        int p1 = ones_idx[x];  // Current leftmost 1
        int p2 = zeros_idx[y]; // Current rightmost 0

        // If the leftmost 1 is after the rightmost 0, it's already sorted
        if (p1 > p2) break;

        // Dynamic gains: original gain minus the count of opposite flips
        int gainLeft = orig_zeros_after[p1] - y;
        int gainRight = orig_ones_before[p2] - x;

        // Stop if flipping no longer reduces inversions
        if (gainLeft <= 0 && gainRight <= 0) break;

        if (gainLeft >= gainRight) {
            v[p1] = 0;
            x++;
        } else {
            v[p2] = 1;
            y++;
        }
        k--;
    }

    // Calculate final inversions using long long
    long long inv = 0;
    long long ones = 0;
    for (int val : v) {
        if (val == 1) {
            ones++;
        } else {
            inv += ones;
        }
    }

    return inv;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cout << solve(v1, k) << '\n';

    return 0;
}