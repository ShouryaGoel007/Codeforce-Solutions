#include<bits/stdc++.h>
using namespace std;

int main() {
    // int n,b;
    // cin>>n>>b;
    // vector<pair<int,int>> v1(n);
    // for (int i=0;i<n;i++) {
    //     cin>>v1[i].first>>v1[i].second;
    // }
    // vector<int> v2,v3;
    // for (auto it: v1) {
    //     v2.push_back(it.second);
    //     v3.push_back(it.first);
    // }
    // vector<vector<int>> dp(n+1,vector<int>(b+1,0));
    // for (int i=1;i<=n;i++) {
    //     for (int j=1;j<=b;j++) {
    //         if (v2[i-1]<=j) {
    //             dp[i][j]=max(dp[i-1][j],dp[i-1][j-v2[i-1]]+v3[i-1]);
//     //         }
//     //         else {
//     //             dp[i][j]=dp[i-1][j];
//     //         }
//     //     }
//     // }
//     // cout<<dp[n][b];
//     int n;
//     cin>>n;
//     vector<int> v1(n);
//     for (int i=0;i<n;i++) {
//         cin>>v1[i];
//     }
//     queue<pair<int,int>> q;
//     set<int> st;
//     for (int i=1;i<=2*1e5;i++) {
//         st.insert(i);
//     }
//     int a=1;
//     for (auto it: v1) {
//         q.push({it,a});
//         a++;
//     }
//     vector<int> v2(n);
//     while (!q.empty()) {
//         auto seat=q.front().first;
//         auto val=q.front().second;
//         q.pop();
//         if (st.find(seat)!=st.end()) {
//             st.erase(seat);
//             v2[val-1]=seat;
//         }
//         else {
//             q.push({seat+1,val});
//         }
//     }
//     for (auto it: v2) {
//         cout<<it<<" ";
//     }
// }



int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // 1-based indexing for simplicity
    vector<int> arr(n + 1);

    // Group people by their requested seat
    // requests[x] holds the indices of all people who want seat x
    vector<vector<int>> requests(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        requests[arr[i]].push_back(i);
    }

    vector<int> ans(n + 1);

    // Max-Heap Priority Queue
    // Stores pairs of {original_seat, -original_index}
    // We use negative index so the smallest index gets higher priority in a max-heap
    priority_queue<pair<int, int>> pq;

    int seat = 1;

    // Process seats sequentially until we've checked all N requests AND the waiting line is empty
    while (seat <= n || !pq.empty()) {

        // If there are people who originally wanted this specific seat, add them to the competition
        if (seat <= n) {
            for (int idx : requests[seat]) {
                pq.push({arr[idx], -idx});
            }
        }

        // The person with the highest priority takes this seat
        if (!pq.empty()) {
            int idx = -pq.top().second;
            pq.pop();
            ans[idx] = seat;
        }

        // Move on to the next seat
        seat++;
    }

    // Print final answers
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}