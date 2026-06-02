#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v1(n);
        for(int i=0; i<n; i++) cin >> v1[i];

        sort(v1.begin(), v1.end());

        int maxCount = 0;
        int curr = 0;

        for(int i=0; i<n; i++) {
            if(i == 0 || v1[i] == v1[i-1]) {
                curr++;
            } else {
                curr = 1;
            }
            maxCount = max(maxCount, curr);
        }

        int ans = n - maxCount;
        int count = maxCount;

        while (count < n) {
            ans++;
            count *= 2;
        }
        cout << ans << endl;
    }
}