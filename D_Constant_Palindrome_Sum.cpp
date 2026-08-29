#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    map<int, int> mpp; // Your frequency map
    vector<int> mins;  // To store the smaller element of each pair
    vector<int> maxs;  // To store the larger element of each pair
    
    // 1. Process pairs (only up to n/2)
    for(int i = 0; i < n / 2; i++) {
        int A = a[i];
        int B = a[n - 1 - i];
        
        mpp[A + B]++;                 // Count frequency of sums needing 0 ops
        mins.push_back(min(A, B));
        maxs.push_back(max(A, B));
    }
    
    // 2. Sort to use binary search (lower_bound) just like your original idea
    sort(mins.begin(), mins.end());
    sort(maxs.begin(), maxs.end());
    
    int min_ans = n; 
    
    // 3. We MUST check all possible target sums from 2 to 2k
    for(int X = 2; X <= 2 * k; X++) {
        
        // Pairs needing 2 ops because both elements are too BIG 
        // (Even changing one to 1, the sum is still >= X)
        auto it1 = lower_bound(mins.begin(), mins.end(), X);
        int too_large = mins.end() - it1; 
        
        // Pairs needing 2 ops because both elements are too SMALL 
        // (Even changing one to k, the sum is still < X)
        auto it2 = lower_bound(maxs.begin(), maxs.end(), X - k);
        int too_small = it2 - maxs.begin();
        
        int ops_2 = too_large + too_small; // Total pairs needing 2 operations
        int ops_0 = mpp[X];                // Total pairs needing 0 operations (from your map)
        
        // The magic formula: (Total pairs) + (Pairs needing 2) - (Pairs needing 0)
        int current_ops = (n / 2) + ops_2 - ops_0;
        
        min_ans = min(min_ans, current_ops);
    }
    
    cout << min_ans << "\n";
}

int main() {
    // Fast I/O is necessary for large inputs in CP
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}