// # include  <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--) {
//         int n;
//         cin>>n;
//         vector<int> w(n);
//         for (int i=0;i<n;i++) {
//             cin>>w[i];
//         }
//         int left=0, right=n-1;
//         int ll=0,rr=0;
//         int ans=0;
//         while (left<right) {
//
//             if (ll==rr) {
//                 ans=max(ans,left+1+n-right);
//
//                 ll+=w[left];
//                 rr+=w[right];
//                 left++;
//                 right--;
//             }
//             else if (ll>rr) {
//                 rr+=w[right];
//
//                 right--;
//
//             }
//             else {
//                 ll+=w[left];
//
//                 left++;
//
//             }
//         }
//         cout<<ans<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> w(n);
        for (int i = 0; i < n; i++) cin >> w[i];

        int left = 0, right = n - 1;
        int ll = 0, rr = 0;
        int ans = 0;

        while (left <= right) {
            if (ll <= rr) {
                ll += w[left];
                left++;
            } else {
                rr += w[right];
                right--;
            }

            if (ll == rr) {
                ans = left + (n - right - 1);
            }
        }

        cout << ans << '\n';
    }
}